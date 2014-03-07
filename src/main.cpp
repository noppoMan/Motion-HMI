//
//  main.cpp
//  Movement-HMI
//
//  Created by Yuki Takei on 3/7/14.
//  Copyright (c) 2014 miketokyo. All rights reserved.
//

#include <iostream>
#include "CvPractice.h"

using namespace std;

char* strToChar(std::string str){
    
    int len = str.length();
    char* ch = new char[len+1];
    memcpy(ch, str.c_str(), len+1);
    
    return ch;
}

int main(int argc, const char * argv[])
{
    CvPractice::loadImage(strToChar("/Users/yuki/Desktop/20120815-6.jpg"));
}

