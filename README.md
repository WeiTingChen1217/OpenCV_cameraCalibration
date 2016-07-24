README.md

本範例在進行 camera calibrarytion

- 編譯環境：
    Xcode 7.2
    OpenCV 3.1.0

- 編譯環境設定：
    1. Header Search Paths: /usr/local/include /opt/local/include
    2. Library Search Paths: /usr/local/lib /opt/local/lib
    3. Other Linker Flags: -lopencv_calib3d -lopencv_highgui -lopencv_features2d -lopencv_flann -lopencv_highgui -lopencv_imgcodecs -lopencv_imgproc -lopencv_ml -lopencv_objdetect -lopencv_photo -lopencv_shape -lopencv_stitching -lopencv_superres -lopencv_video -lopencv_videoio -lopencv_videostab -lopencv_core

- 執行順序 takePhoto.cpp -> imagelist_creater.cpp -> calibration.cpp

- 拍攝棋盤照片的方法為編譯並執行 takePhoto.cpp ，按下 c 即可照相。
    擺放的訣竅在於儘量放置在畫面的邊緣, 並且包含不同的深度. 基本上需要 15~20 張有效的影像.

- 產生 imagelist.xml 得方法
    編譯 imagelist_creater.cpp 後 cd 至 /cameraCalibration/build/Debug 於 cmd 中輸入 「./cameraCalibration imagelist.xml ../../dataBase/checkerboard/Picture1.jpg ../../dataBase/checkerboard/Picture2.jpg ../../dataBase/checkerboard/Picture3.jpg ../../dataBase/checkerboard/Picture4.jpg ../../dataBase/checkerboard/Picture5.jpg ../../dataBase/checkerboard/Picture6.jpg ../../dataBase/checkerboard/Picture7.jpg ../../dataBase/checkerboard/Picture8.jpg ../../dataBase/checkerboard/Picture9.jpg ../../dataBase/checkerboard/Picture10.jpg ../../dataBase/checkerboard/Picture11.jpg ../../dataBase/checkerboard/Picture12.jpg ../../dataBase/checkerboard/Picture13.jpg」

- 產生 camera.yaml 的方法
編譯 calibration.cpp 後 cd 至 /cameraCalibration/build/Debug 於 cmd 中輸入 「./cameraCalibration -w=11 -h=7 -pt=chessboard -o=camera.yaml -op -oe -su imagelist.xml」
    執行 calibration.cpp 後得到校正參數。
    - 參數說明：
        -w=11           表示棋盤橫向點數為 11 個點。
        -h=7            表示棋盤縱向點數為 7  個點。
        -pt=chessboard  pattern = chessboard（預設為 CHESSBOARD）
        -o=camera.yaml  校正後輸出的檔案名稱（副檔名為 .yaml）

@ 若在執行該程式時沒有給 input_data 則可以按下 q 進入拍照模式，預設為 10 張，可輸入參數 -n=20 設定拍攝 20 張影像。

- Referance:
    - http://www.voidcn.com/blog/t247555529/article/p-3982735.html
    - calibration 函示中文講解
        http://monkeycoding.com/?p=781


END
