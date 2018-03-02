#pragma once

#include <vtkAutoInit.h> 
VTK_MODULE_INIT(vtkRenderingOpenGL2);
VTK_MODULE_INIT(vtkInteractionStyle);

#include <QtWidgets/QMainWindow>
#include "ui_displaymessage.h"

#include <vtkRenderWindow.h>//注意添加这个头文件
#include <pcl/io/pcd_io.h>
#include <pcl/point_types.h>
#include <pcl/visualization/pcl_visualizer.h>

#include<QFile>
#include <QTextStream>
#include <QFileDialog>
#include<QDir>
#include <QSettings>
#include<opencv.hpp>
#include<QTableWidgetItem>
#include<QTableWidget>
#include<iostream>
#include <vector>
#include <math.h>
using namespace cv;

const double Pi = 3.14159265358979;

class DisplayMessage : public QMainWindow
{
    Q_OBJECT

public:
    DisplayMessage(QWidget *parent = Q_NULLPTR);

	void createTheoryCircle(Point3d planeNormal, Point3d centerPoint, double R);
public slots:
	void on_openCloudButton_clicked();
	void on_openTableButton_clicked();
	void on_selectButton_clicked();
	void on_selectCenterButton_clicked();
	void on_displayCenterButton_clicked();

private:
    Ui::DisplayMessageClass ui;
	pcl::visualization::PCLVisualizer::Ptr viewer;
	vector<QString>linesStr;
	QString path;
	pcl::PointCloud<pcl::PointXYZ>::Ptr centerPoints;
	
};
