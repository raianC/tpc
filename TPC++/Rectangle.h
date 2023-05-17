
#include <opencv2/opencv.hpp>

class Rectangle {
private:
    cv::Point topLeft;
    cv::Point bottomRight;
    cv::Scalar color;

public:
    Rectangle(cv::Point topLeft, cv::Point bottomRight, cv::Scalar color);
    void draw(cv::Mat& image) const;
};


