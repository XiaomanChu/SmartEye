#pragma once



#include <pcl/point_types.h>
#include <pcl/point_cloud.h>
#include <opencv2/opencv.hpp>

typedef pcl::PointXYZRGBA PointT;
typedef pcl::PointCloud<PointT> PointCloudT;

class PCLConvert
{
public:
	PCLConvert();
	~PCLConvert();
	void setConvertParameter(double fx, double fy, double cx, double cy, double k1, double k2, double p1, double p2, double k3);	//设置转换参数
	PointCloudT::Ptr getPointCloud(cv::Mat img);		//计算点云

private:
	cv::Mat undistImg(cv::Mat src);		//畸变矫正

	double fx;
	double fy;
	double cx;
	double cy;
	double k1;
	double k2;
	double p1;
	double p2;
	double k3;
};

