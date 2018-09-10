//
//  takePhoto.cpp
//  Test
//
//  Created by WeiTingChen on 2016/7/6.
//  Copyright © 2016年 WeiTingChen. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <cstdio>
#include "opencv2/highgui.hpp"

int main()
{
    std::cout<< "1" << std::endl ;
    IplImage *pImg = NULL;
    CvCapture *cap = cvCaptureFromCAM(0);
    char fileName[100];
    char key;
    int count = 0;
    
    while(1)
    {
        pImg = cvQueryFrame(cap);
        //cvFlip(pImg, NULL, 1); //水平翻转图像，像照镜子一样，不想要这个效果可以去掉此句
        key = cvWaitKey(50);
        if(key == 27) break; //按ESC键退出程序
        if(key == 'c')       //按c键拍照
        {
            sprintf(fileName, "Picture%d.jpg", ++count); //生成文件名
            //cvCvtColor(pImg, pImg, CV_BGR2GRAY);
            cvSaveImage(fileName, pImg);
            cvXorS(pImg, cvScalarAll(255), pImg);         //将拍到的图像反色（闪一下形成拍照效果）
            cvShowImage("Camera",pImg);
            cvWaitKey(200); //反色图像显示ms
        }
        cvShowImage("Camera",pImg);
    }
    cvReleaseCapture(&cap);
    return 0;
}