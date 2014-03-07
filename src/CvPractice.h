//
//  CvPractice.h
//  Movement-HMI
//
//  Created by Yuki Takei on 3/7/14.
//  Copyright (c) 2014 miketokyo. All rights reserved.
//

#ifndef __Movement_HMI__CvPractice__
#define __Movement_HMI__CvPractice__

#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;

class CvPractice {
    
public:
    static int loadImage(char* sourceName){
        
        IplImage* img;
        
        cvNamedWindow("Display image");
        
        img = cvLoadImage(sourceName);
        
        if(img == NULL){
            cout << "Failed to load image source.";
            cvWaitKey(0);
            
            return -1;
        }
        
        cvShowImage("Display image", img);
        
        cvWaitKey(0);
        
        cvDestroyWindow("Display image");
        cvReleaseImage(&img);
        
        return 0;
    }
};



#endif /* defined(__Movement_HMI__CvPractice__) */
