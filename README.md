# Semi-Auto-Segmentation-Labelling-System
Author: Xu Liu             
Date: 02/18/2019

This is a semi-auto labelling software for those who work on image labelling.   

Input: 
Click the "Open" button, open the "image" directory and select the first image to start. After this step, the left canvas will display the original image with 50% transparence colored label on it. And the right canvas will display the labelled image with totally black ground and colorful foreground (one color, one instance).  
All the images in the "image" directory are the outputs(aka. prediction) of the segmentation deep neural network and are located at the "masks" directory. Most parts of the right image are labelled correctly by the neural network, what we need to do is just to revise it slightly.   


Instructions:  
1. Click your right mouse button on the right image to pick a color (the color is corresponding to the pixel where your cursor locates) that you wish to revise on the left image. If there are instances that have not been labelled, you can click your right mouse button on the circular color palatte to pick a different color.  

2. Move your cursor to right image, click at the place where you wish to revise the label, keep press the left mouse button and move it can draw curve lines, which can revise a large part.  

3. The silder on the top of the two images can control the pen (or brush) size, when you need to paint (revise) a large part, you can move the slider a bit right to get a larger pen size. On the other hand, just move it left can be helpful for revising small part.  

4. Click "Save" button on the right can save the revised image (the right one) as a 3 channels, 8 unsigned bits  PNG format file at the "output" directory, which is in the same directory as the "images" directory.   

5. Click "Next" button then the two canvas can refresh and load the next pair: image and label. Then just repeat the above operations.



半自动分割标注系统说明手册
Semi-Auto Segmentation Labelling System Manual

整体布局：
![pic](https://github.com/francisliu2017/Semi-Auto-Segmentation-Labelling-System/blob/master/screenshots/1.png)

初始界面：
![pic](https://github.com/francisliu2017/Semi-Auto-Segmentation-Labelling-System/blob/master/screenshots/2.png)

软件说明书：
点击Instruction，显示如下：
![pic](https://github.com/francisliu2017/Semi-Auto-Segmentation-Labelling-System/blob/master/screenshots/3.png)

选取图片：
仅需在images文件夹，即初始文件夹下选择图像（为方便批处理，最好选取第一张，主界面有next下一张快捷按钮），labels文件夹和images一一对应，图像会自动加载到主界面右边的canvas上；
![pic](https://github.com/francisliu2017/Semi-Auto-Segmentation-Labelling-System/blob/master/screenshots/4.png)

和images文件夹对应的labels文件夹：
![pic](https://github.com/francisliu2017/Semi-Auto-Segmentation-Labelling-System/blob/master/screenshots/5.png)

显示结果如下：
![pic](https://github.com/francisliu2017/Semi-Auto-Segmentation-Labelling-System/blob/master/screenshots/6.png)

取色标注：
鼠标右键单击在右图中（或右上方调色板增加instance）选取颜色，再按住鼠标左键，在左图中移动可以重新修补标注（右图中会同步显示）；
红色箭头：右击鼠标选取颜色；
紫色箭头：在左图中按住鼠标左键并移动可以重新标注，同时右边图像同步更新；
![pic](https://github.com/francisliu2017/Semi-Auto-Segmentation-Labelling-System/blob/master/screenshots/7.png)

滑动条调节笔刷大小：
![pic](https://github.com/francisliu2017/Semi-Auto-Segmentation-Labelling-System/blob/master/screenshots/8.png)

保存图像：
![pic](https://github.com/francisliu2017/Semi-Auto-Segmentation-Labelling-System/blob/master/screenshots/9.png)
![pic](https://github.com/francisliu2017/Semi-Auto-Segmentation-Labelling-System/blob/master/screenshots/10.png)

点击next进入下一张：
![pic](https://github.com/francisliu2017/Semi-Auto-Segmentation-Labelling-System/blob/master/screenshots/11.png)

最后一张：
![pic](https://github.com/francisliu2017/Semi-Auto-Segmentation-Labelling-System/blob/master/screenshots/12.png)

点击Exit退出程序：
![pic](https://github.com/francisliu2017/Semi-Auto-Segmentation-Labelling-System/blob/master/screenshots/13.png)

