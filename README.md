本範例在進行 camera calibrarytion

#### 編譯環境：
    Xcode 7.2
    OpenCV 3.1.0

#### 編譯環境設定：

1. Header Search Paths: `/usr/local/opt/opencv3/include`
2. Library Search Paths: `/usr/local/opt/opencv3/lib`
3. Other Linker Flags: `-lopencv_shape -lopencv_stitching -lopencv_objdetect -lopencv_superres -lopencv_videostab -lopencv_calib3d -lopencv_features2d -lopencv_highgui -lopencv_videoio -lopencv_imgcodecs -lopencv_video -lopencv_photo -lopencv_ml -lopencv_imgproc -lopencv_flann -lopencv_core`

#### 執行順序

1. 取得照片[takePhoto.cpp](/takePhoto/takePhoto.cpp)
2. 製作 `imagelist.xml` [imagelist_creater.cpp](/imageListCreator/imagelist_creator.cpp)
3. 攝像鏡頭校正 [calibration.cpp](/cameraCalibration/calibration.cpp)

#### Referance:
- [opencv 单目相机标定 自带例子程序的使用](http://www.voidcn.com/blog/t247555529/article/p-3982735.html)
- [calibration 函示中文講解](http://monkeycoding.com/?p=781)


test test
END
<!--stackedit_data:
eyJoaXN0b3J5IjpbLTExMjM0MDQ4NjVdfQ==
-->