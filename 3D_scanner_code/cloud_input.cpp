#include "cloud_input.h"
#include <iostream>
#include "scannerwindow.h"
#include "ui_scannerwindow.h"

#include <vtkAutoInit.h>
// registration and 3D view
#include "registration.h"

// Grabber
#include "kinect2grabber.h"
#include<QElapsedTimer>
#include <thread>
#include <vector>
#include <chrono>
#include  <QDebug>
#include <QString>

// For Arduino

#include <iostream>
#include <C:\Qt\Qt5.7.0\5.7\msvc2015_64\include\QtSerialPort\QSerialPort>
#include <QDebug>
#include <Windows.h>
#include <QElapsedTimer>
#include <dos.h>
#include <stdio.h>
#include <conio.h>
#include "cloud_input.h"

// Filter & Surface Libraries

#include <pcl/io/pcd_io.h>
//#include <pcl/io/ply/io_operators.h>
#include <pcl/io/ply_io.h>
#include <pcl/search/kdtree.h>
#include <pcl/point_types.h>
#include <pcl/kdtree/io.h>
#include <pcl/kdtree/kdtree.h>
#include <pcl/point_cloud.h>
#include <pcl/PCLPointCloud2.h>
#include <pcl/features/normal_3d.h>
#include <pcl/kdtree/kdtree_flann.h>
#include <pcl/surface/mls.h>
#include <pcl/PolygonMesh.h>
#include <math.h>
#include <pcl/surface/gp3.h>
#include <pcl/surface/vtk_smoothing/vtk_mesh_smoothing_laplacian.h>
#include <pcl/visualization/pcl_visualizer.h>
#include <iostream>
#include <pcl/point_types.h>
#include <pcl/filters/passthrough.h>
#include <pcl/filters/statistical_outlier_removal.h>
#include <pcl/surface/grid_projection.h>

cloud_input::cloud_input()
{


}
