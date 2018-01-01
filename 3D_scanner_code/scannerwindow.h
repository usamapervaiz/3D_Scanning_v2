#ifndef SCANNERWINDOW_H
#define SCANNERWINDOW_H

#include <QMainWindow>
#include <vtkRenderWindow.h>
#include <Windows.h>
#include <pcl/point_cloud.h>
#include <pcl/point_types.h>
#include <pcl/io/pcd_io.h>
#include <pcl/io/ply_io.h>
#include <pcl/visualization/pcl_visualizer.h>
#include <pcl/filters/passthrough.h>



typedef pcl::PointXYZRGBA PointT;
typedef pcl::PointCloud<PointT> PointCloudT;


namespace Ui {
class ScannerWindow;
}

class ScannerWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit ScannerWindow(QWidget *parent = 0);
    ~ScannerWindow();
    bool scanStatrt;

private slots:

    void on_openPreviousScanWindowButton_clicked();

    void on_newScanWindowButton_clicked();

    void on_previousScanWindowHomeButton_clicked();

    void on_registerButon_clicked();

    void on_nextCalibrationButton_clicked();

    void on_homeCalibrationButton_clicked();

    void on_newScanFrameHomeButton_clicked();

    void on_filterButton_clicked();

    void on_recordButton_clicked();

    void on_openMeshButton_clicked();

    void on_openPCDButton_clicked();



private:
    Ui::ScannerWindow *ui;

    boost::shared_ptr<pcl::visualization::PCLVisualizer> viewer1;
    boost::shared_ptr<pcl::visualization::PCLVisualizer> viewer2;
    int cmp = 0;


};

#endif // SCANNERWINDOW_H
