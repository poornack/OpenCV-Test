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
    
    cv::Mat image;
    cv::VideoCapture camera(0);
    
    cv::namedWindow("Poorna Face", cv::WINDOW_AUTOSIZE);
    
    camera >> image;
    
    if(!image.empty()) {
        cv::imshow("Poorna Face", image);
    }
    
    cv::waitKey(0);
    
    cv::destroyAllWindows();
    
    camera.release();
    
    return 0;
}
