#include "Rectangle.h"

Rectangle::Rectangle(cv::Point topLeft, cv::Point bottomRight, cv::Scalar color)
    : topLeft(topLeft), bottomRight(bottomRight), color(color) {}

void Rectangle::draw(cv::Mat& image) const {
    cv::rectangle(image, topLeft, bottomRight, color, cv::FILLED);
}
