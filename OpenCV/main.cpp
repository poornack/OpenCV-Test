//
//  main.cpp
//  OpenCV
//
//  Created by Poorna Chander Kalidas on 2017-06-24.
//  Copyright © 2017 Poorna Chander Kalidas. All rights reserved.
//

#include <iostream>
#include "opencv2/imgproc.hpp"
#include "opencv2/core.hpp"
#include "opencv2/highgui.hpp"
#include "opencv2/opencv.hpp"



int main(int argc, const char * argv[]) {
    
    cv::Mat imageUnchanged = cv::imread("../../Pictures/honda_civic.jpeg", CV_LOAD_IMAGE_UNCHANGED);
    
    cv::namedWindow("Window1", CV_WINDOW_FREERATIO);
    cv::imshow("Window1", imageUnchanged);
    cv::waitKey();
    
    cv::resizeWindow("Window1", 200, 200);
    cv::waitKey();
    
    cv::resizeWindow("Window1", 500, 500);
    cv::waitKey();
    
    cv::moveWindow("Window1", 0, 0);
    cv::waitKey();
    
    cv::moveWindow("Window1", 500, 500);
    cv::waitKey();
    
    return 0;
}


/*
Read image from file:
    cv::imread("/filename", FLAG); FLAGS: CV_LOAD_IMAGE_UNCHANGED, CV_LOAD_IMAGE_GRAYSCALE, ...
 
crop:
    imshow("cropped", imageUnchanged(cv::Rect(100,100,100,100))); //rect(x, y, lenght, width)
    cv::Rect r(10, 10, 100, 100)
    cv::Mat imageCropped = imageUnchanged(r);
 
convert colour:
    cv::cvtColor(originalImage, newImage, FLAG); FLAGS: CV_BGR2GRAY, ...
 
Read image characteristics:
     std::cout << "Image row count: " << imageGray.rows << std::endl;
     std::cout << "Image coloumn count: " << imageGray.cols << std::endl;
     std::cout << "Image colour depth: " << imageGray.channels() << std::endl;

Windows controls
 Initialize window:
    cv::namedWindows("Window Name", FLAG) FLAGS: CV_WINDOW_FREERATIO, CV_WINDOWS_AUTOSIZE, ...
 Move window:
    cv::moveWindow("Window Name", x-coordinate, y-coordinate)
 Resize window:
    cv::resizeWindow("Window Name", x-size, y-size)



*/
