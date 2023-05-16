#include "opencv2/opencv.hpp"
#include "opencv2/highgui/highgui.hpp"
#include <iostream>
using namespace cv;
using namespace std;
// etpaes:
// git status
// git add -u
// git status
// git commit -m <nom>
// git status
// git log
// git push 
// git log
int main(){
Mat image(200, 200, CV_8UC3, Scalar(255, 255, 255));
Rect r=Rect(10,20,40,60);
rectangle(image,r,Scalar(255,0,0),1,8,0);
//coment
  

namedWindow("whiteMatrix");
imshow("WhiteMatrix", image);
waitKey(0);

Mat wee(200, 200, CV_8UC3, Scalar(255, 255, 255));
Point center(100, 100);
int radius = 50;
Scalar line_Color(0, 0, 0);
int thickness = 2;
namedWindow("whiteMatrix");
circle(wee, center, radius, line_Color, thickness);
imshow("WhiteMatrix", wee);
waitKey(0);
  
 
return 0;
}
