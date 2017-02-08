### 產生 imagelist.xml 的方法

編譯 `imagelist_creater.cpp` 後 cd 至 `/cameraCalibration/build/Debug` 

於 cmd 中輸入 `./imageListCreator imagelist.xml ../../dataBase/checkerboard/Picture1.jpg ../../dataBase/checkerboard/Picture2.jpg ../../dataBase/checkerboard/Picture3.jpg ../../dataBase/checkerboard/Picture4.jpg ../../dataBase/checkerboard/Picture5.jpg ../../dataBase/checkerboard/Picture6.jpg ../../dataBase/checkerboard/Picture7.jpg ../../dataBase/checkerboard/Picture8.jpg ../../dataBase/checkerboard/Picture9.jpg ../../dataBase/checkerboard/Picture10.jpg ../../dataBase/checkerboard/Picture11.jpg ../../dataBase/checkerboard/Picture12.jpg ../../dataBase/checkerboard/Picture13.jpg`

**參數說明**

| Parameter | Remarks |
| :--------------------------------------- | --------------: |
| imageListCreator | 執行檔 |
| imagelist.xml | 輸出 |
| ../../dataBase/checkerboard/Picture1.jpg | 圖片路徑 |

#### imagelist.xml 檔

![ksmoakc](https://github.com/WeiTingChen1217/OpenCV_cameraCalibration/blob/master/imageListCreator/Screen%20Shot%202017-02-08%20at%205.26.27%20PM.png2 "abcd")

