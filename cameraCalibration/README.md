### 產生 camera.yaml 的方法

編譯 __calibration.cpp__ 後 cd 至 __/cameraCalibration/build/Debug__ 於 cmd 中輸入 

```
./cameraCalibration -w=11 -h=7 -pt=chessboard -o=camera.yaml -op -oe -su imagelist.xml
```

執行後得到校正參數(__camera.yaml__)

__參數說明__

參數 | 解釋
------------ | -------------
-w=11 | 表示棋盤橫向點數為 11 個點
-h=7 | 表示棋盤縱向點數為 7 個點
-pt=chessboard | pattern = chessboard（預設為 CHESSBOARD）
-s=2 | squareSize = 2公分
-o=camera.yaml | 校正後輸出的檔案名稱（副檔名為 .yaml）
imagelist.xml | 讀取圖片的表單


_若在執行該程式時沒有給 input_data 則可以按下 __q__ 進入拍照模式，預設為 10 張，可輸入參數 -n=20 設定拍攝 20 張影像_
