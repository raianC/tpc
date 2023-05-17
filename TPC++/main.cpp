#include "Circle.h"
#include "Rectangle.h"

int main() {
        cv::Mat image(500, 500, CV_8UC3, cv::Scalar(255, 255, 255));  // Création d'une image blanche

        Circle circle(cv::Point(250, 250), 100, cv::Scalar(0, 0, 255));  // Création d'un cercle rouge

        circle.draw(image);  // Dessin du cercle sur l'image

        cv::imshow("Circle", image);  // Affichage de l'image avec le cercle
        cv::waitKey(0);  // Attente d'une touche pour fermer la fenêtre




        cv::Mat image1(500, 500, CV_8UC3, cv::Scalar(255, 255, 255));  // Création d'une image blanche

        Rectangle rectangle(cv::Point(400, 400), cv::Point(200, 200), cv::Scalar(0, 0, 255));  // Création d'un rectangle rouge

        rectangle.draw(image1);  // Dessin du rectangle sur l'image

        cv::imshow("Rectangle", image1);  // Affichage de l'image avec le rectangle
        cv::waitKey(0);  // Attente d'une touche pour fermer la fenêtre

        return 0;
    }

  