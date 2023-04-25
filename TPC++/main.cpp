#include "opencv2/opencv.hpp"
#include "opencv2/highgui/highgui.hpp"
#include <iostream>
using namespace cv;

int main(){
Mat img=imread("myImage.jpg");
Rect r=Rect(10,20,40,60);
rectangle(img,r,Scalar(255,0,0),1,8,0);

return 0;
}
