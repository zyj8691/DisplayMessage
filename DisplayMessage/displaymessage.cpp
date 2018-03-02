#include "displaymessage.h"

DisplayMessage::DisplayMessage(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	//��ʼ��PCL��ʾ�ؼ�
	viewer.reset(new pcl::visualization::PCLVisualizer("viewer", false));
	ui.widget->SetRenderWindow(viewer->getRenderWindow());
	viewer->setupInteractor(ui.widget->GetInteractor(), ui.widget->GetRenderWindow());
	ui.widget->update();

	path = "E://engineFile";

	ui.tableWidget->setColumnCount(10);
	ui.tableWidget->setRowCount(100);
	ui.tableWidget->setFont(QFont("Helvetica"));

	centerPoints = pcl::PointCloud<pcl::PointXYZ>::Ptr(new pcl::PointCloud<pcl::PointXYZ>);
	
	

}

void DisplayMessage::on_openCloudButton_clicked()
{
	QString fileName = QFileDialog::getOpenFileName(this,
		QString::fromLocal8Bit("��һ�������ļ�"),
		path,
		"pointCloud Files (*.txt)");
	QSettings setting("./Setting.ini", QSettings::IniFormat);          //Ϊ���ܼ�ס�ϴδ򿪵�·��
	path = setting.value("LastFilePath").toString();
	ui.cloudFileDirEdit->setText(fileName);
	QFile file(fileName);
	file.open(QIODevice::ReadOnly|QIODevice::Text);
	QTextStream in(&file);
	QString pointsStr;
	QString midStr;
	vector<double> mid;
	Point3f point;
	Vector<Point3f> points;
	while (!in.atEnd()){
		pointsStr = in.readLine();
		int i = 0;
		do{
			
			midStr.append(pointsStr[i]);
			i++;
			
			if(pointsStr[i]==' '||pointsStr[i]=='\0'){
				mid.push_back(midStr.toDouble());
				midStr.clear();
				i++;
			}
		} 
		while (pointsStr[i] != '\0');
		point.x = mid[0];
		point.y = mid[1];
		point.z = mid[2];
		points.push_back(point);
		mid.clear();

	}
	//����cloudPoints��С,�������
	pcl::PointCloud<pcl::PointXYZ>::Ptr cloudPoints(new pcl::PointCloud<pcl::PointXYZ>);
	cloudPoints->resize(points.size());
	//����ά���긳ֵ��PCL��������
	for (int i = 0; i < points.size(); i++){
		(*cloudPoints)[i].x = points[i].x;
		(*cloudPoints)[i].y = points[i].y;
		(*cloudPoints)[i].z = points[i].z;
	}
	//�Ƴ����ڵ���
	viewer->removeAllPointClouds();
	//��������
	//���õ�����ɫ
	pcl::visualization::PointCloudColorHandlerCustom<pcl::PointXYZ> cloud_color(cloudPoints, 255, 255, 255);
	//������ɫ��Ⱦ	
	viewer->addPointCloud(cloudPoints, cloud_color, "cloud");
	//���õ��ƴ�С
	viewer->setPointCloudRenderingProperties(pcl::visualization::PCL_VISUALIZER_POINT_SIZE, 2, "cloud");
	viewer->resetCamera();
	ui.widget->update();
}

void DisplayMessage::on_openTableButton_clicked()
{
	ui.tableWidget->clear();
	QString fileName = QFileDialog::getOpenFileName(this,
		QString::fromLocal8Bit("���ļ�"),
		path, 
		tr("file(*.csv)"));
	QSettings setting("./Setting.ini", QSettings::IniFormat);          //Ϊ���ܼ�ס�ϴδ򿪵�·��
	path = setting.value("LastFilePath").toString();
	ui.tableFileDirEdit->setText(fileName);
	QFile file(fileName);
	file.open(QIODevice::ReadOnly | QIODevice::Text);
	QTextStream in(&file);
	QString line;
	QStringList fields;
	int row = 0;
	while (!in.atEnd())
	{
		line = in.readLine();
		linesStr.push_back(line);
		fields = line.split(',');
		for (int column = 0; column < fields.size(); column++){
			ui.tableWidget->setItem(row, column, new QTableWidgetItem(fields[column]));
		}
		row++;
	}
}

void DisplayMessage::on_selectButton_clicked()
{
	ui.tableWidget->clear();
	vector<QString>selectLineStr;
	for (int i = 0; i < linesStr.size(); i++){
		if (linesStr[i]>ui.lowEdit->text() && linesStr[i] < ui.upEdit->text()){
			selectLineStr.push_back(linesStr[i]);
		}
	}
	QStringList fields;
	//д����
	fields = linesStr[0].split(',');
	for (int column = 0; column < fields.size(); column++){
		ui.tableWidget->setItem(0, column, new QTableWidgetItem(fields[column]));
	}//֮ǰfields.size() ΪlinesStr[0] ���� 
	//д����
	for (int row = 0; row < selectLineStr.size(); row++){
		fields = selectLineStr[row].split(',');
		for (int column = 0; column < fields.size(); column++){
			ui.tableWidget->setItem(row + 1, column, new QTableWidgetItem(fields[column]));
		}
	}

}

void DisplayMessage::on_selectCenterButton_clicked()
{
	ui.centerEdit->clear();
	int row;
	row = ui.tableWidget->currentRow();
	QTableWidgetItem * itemPtr[7];
	//Բ��
	itemPtr[0] = ui.tableWidget->item(row, 2);
	itemPtr[1] = ui.tableWidget->item(row, 3);
	itemPtr[2] = ui.tableWidget->item(row, 4);
	//��ʸ
	itemPtr[3] = ui.tableWidget->item(row, 6);
	itemPtr[4] = ui.tableWidget->item(row, 7);
	itemPtr[5] = ui.tableWidget->item(row, 8);
	//�뾶
	itemPtr[6] = ui.tableWidget->item(row, 9);
	vector<QString>itemStr;
	if (itemPtr[0] != NULL)//������Ϊ��ʱ��itemPtr[]==null,ʹ�ú���text������������һ�����
	{
		itemStr.push_back(itemPtr[0]->text());
		itemStr.push_back(itemPtr[1]->text());
		itemStr.push_back(itemPtr[2]->text());
		itemStr.push_back(itemPtr[3]->text());
		itemStr.push_back(itemPtr[4]->text());
		itemStr.push_back(itemPtr[5]->text());
		itemStr.push_back(itemPtr[6]->text());

		ui.centerEdit->setText(itemStr[0] + " " + itemStr[1] + " " + itemStr[2]);
		ui.planeNormalEdit->setText(itemStr[3] + " " + itemStr[4] + " " + itemStr[5]);
		ui.radiusEdit->setText(itemStr[6]);
	}

}

void DisplayMessage::on_displayCenterButton_clicked()
{
	centerPoints->clear();
	QString centerLineStr = ui.centerEdit->text();
	QString planeNormalStr = ui.planeNormalEdit->text();
	QString radiusStr = ui.radiusEdit->text();
	Point3d planeNormal;
	Point3d center;
	double radius;

	QStringList fen;
	if (!centerLineStr.isEmpty())
	{                                      
		
		fen = centerLineStr.split(' ');
		//����cloudPoints��С,�������
		centerPoints->resize(1);
		//����ά���긳ֵ��PCL��������
		(*centerPoints)[0].x = (fen[0]).toDouble();
		(*centerPoints)[0].y = (fen[1]).toDouble();
		(*centerPoints)[0].z = (fen[2]).toDouble();

		center.x = (fen[0]).toDouble();
		center.y = (fen[1]).toDouble();
		center.z = (fen[2]).toDouble();
		//Բ�ĵ�������
		//���õ�����ɫ
		viewer->removePointCloud("centerCloud");
		pcl::visualization::PointCloudColorHandlerCustom<pcl::PointXYZ> centerCloud_color(centerPoints, 255, 0, 0);
		//������ɫ��Ⱦ	
		viewer->addPointCloud(centerPoints, centerCloud_color, "centerCloud");
		//���õ��ƴ�С
		viewer->setPointCloudRenderingProperties(pcl::visualization::PCL_VISUALIZER_POINT_SIZE, 5, "centerCloud");
		viewer->resetCamera();
		ui.widget->update();
	}
	if (!planeNormalStr.isEmpty())
	{
		fen = planeNormalStr.split(' ');
		planeNormal.x = (fen[0]).toDouble();
		planeNormal.y = (fen[1]).toDouble();
		planeNormal.z = (fen[2]).toDouble();
	}
	if (!radiusStr.isEmpty())
	{
		radius = radiusStr.toDouble();
	}

	//��������Բ
	createTheoryCircle(planeNormal, center, radius);

}

void DisplayMessage::createTheoryCircle(Point3d planeNormal, Point3d centerPoint, double R)
{
	double nx = planeNormal.x, ny = planeNormal.y, nz = planeNormal.z;
	double cx = centerPoint.x, cy = centerPoint.y, cz = centerPoint.z;
	double r = R;

	double ux = ny, uy = -nx, uz = 0;
	double vx = nx*nz,
		vy = ny*nz,
		vz = -nx*nx - ny*ny;

	double sqrtU = sqrt(ux*ux + uy*uy + uz*uz);
	double sqrtV = sqrt(vx*vx + vy*vy + vz*vz);

	double ux_ = (1 / sqrtU)*ux;
	double uy_ = (1 / sqrtU)*uy;
	double uz_ = (1 / sqrtU)*uz;

	double vx_ = (1 / sqrtV)*vx;
	double vy_ = (1 / sqrtV)*vy;
	double vz_ = (1 / sqrtV)*vz;

	double xi, yi, zi;
	double t = 0;
	double angle = (t / 180.0)*Pi;
	vector<double> x, y, z;

	while (t < 360.0)
	{
		xi = cx + r*(ux_*cos(angle) + vx_*sin(angle));
		yi = cy + r*(uy_*cos(angle) + vy_*sin(angle));
		zi = cz + r*(uz_*cos(angle) + vz_*sin(angle));
		x.push_back(xi);
		y.push_back(yi);
		z.push_back(zi);

		t = t + 1;
		angle = (t / 180.0)*Pi;
	}
	pcl::PointCloud<pcl::PointXYZ>::Ptr theroyCirclePoints(new pcl::PointCloud<pcl::PointXYZ>);

	//����cloudPoints��С,�������
	theroyCirclePoints->resize(x.size());
	for (int i = 0; i < x.size(); i++){
		//����ά���긳ֵ��PCL��������
		(*theroyCirclePoints)[i].x = x[i];
		(*theroyCirclePoints)[i].y = y[i];
		(*theroyCirclePoints)[i].z = z[i];
	}
	
	//Բ�ĵ�������
	//���õ�����ɫ
	viewer->removePointCloud("theroyCircleCloud");
	pcl::visualization::PointCloudColorHandlerCustom<pcl::PointXYZ> theroyCircleCloud_color(theroyCirclePoints, 255, 0, 0);
	//������ɫ��Ⱦ	
	viewer->addPointCloud(theroyCirclePoints, theroyCircleCloud_color, "theroyCircleCloud");
	//���õ��ƴ�С
	viewer->setPointCloudRenderingProperties(pcl::visualization::PCL_VISUALIZER_POINT_SIZE, 2, "theroyCircleCloud");
	viewer->resetCamera();
	ui.widget->update();
	
}
