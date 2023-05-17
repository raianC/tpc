
#include <opencv2/opencv.hpp>

class Circle {
private:
    cv::Point center;
    int radius;
    cv::Scalar color;

public:
    Circle(cv::Point center, int radius, cv::Scalar color);
    void draw(cv::Mat& image) const;
};

