#include "Circle.h"

Circle::Circle(cv::Point center, int radius, cv::Scalar color)
    : center(center), radius(radius), color(color) {}

void Circle::draw(cv::Mat& image) const {
    cv::circle(image, center, radius, color, cv::FILLED);
}