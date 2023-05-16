#include "opencv2/opencv.hpp"
#include "opencv2/highgui/highgui.hpp"
#include <iostream>
using namespace cv;
using namespace std;
//
// on le met en reusinage 
// 
// 
// !!!!!!!!!!!! pour certains exercices on a utilisé le meme ordinateur pour coder !!!!!!!!!!!
//

void dessinerRectangle() {
	// Fonction qui dessine un rectangle bleu.

	Mat fondBlanc(200, 200, CV_8UC3, Scalar(255, 255, 255));
	Rect rectangle_ = Rect(10, 20, 40, 60);
	namedWindow("whiteMatrix");
	rectangle(fondBlanc, rectangle_, Scalar(255, 0, 0), 1, 8, 0);
	imshow("WhiteMatrix", fondBlanc);
	waitKey(0);

}

void dessinerCercle(){ 
	//Fonction qui dessine un cercle noir.

	Mat fondBlanc(200, 200, CV_8UC3, Scalar(255, 255, 255));
	Point center(100, 100);
	int radius = 50;
	Scalar line_Color(0, 0, 0);
	int thickness = 2;
	namedWindow("whiteMatrix");
	circle(fondBlanc, center, radius, line_Color, thickness);
	imshow("WhiteMatrix", fondBlanc);

	waitKey(0);

}


int main(){

	dessinerRectangle();
	dessinerCercle();


  




  
 
return 0;
}
