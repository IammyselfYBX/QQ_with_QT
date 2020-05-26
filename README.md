# 2020计算机网络期末大作业——制作一个QQ
socket编程：实现一个网络聊天程序。语言不限、开发平台不限。可以采用udp、socket，也可以采用TCPsocket.

## 下载
```bash
git clone https://github.com/IammyselfYBX/Qt_test_QQ.git
```

## doc 目录
该目录存放<b>选题</b>与<b>报告</b>。
```bash
doc
├── 附件1-计算机网络期末大作业选题.docx
└── 附件2-计算机网络期末大作业报告.doc

0 directories, 2 files
```

## 开发环境
```bash
 ██████████████████  ████████     tony@tony-pc
 ██████████████████  ████████     OS: Manjaro 19.0 Kyria
 ██████████████████  ████████     Kernel: x86_64 Linux 5.4.18-1-MANJARO
 ██████████████████  ████████     Uptime: 385d 13h 39m
 ████████            ████████     Packages: 1301
 ████████  ████████  ████████     Shell: bash 5.0.11
 ████████  ████████  ████████     Resolution: 1920x1080
 ████████  ████████  ████████     DE: GNOME 3.34.4
 ████████  ████████  ████████     WM: Mutter
 ████████  ████████  ████████     WM Theme: Matcha-dark-sea
 ████████  ████████  ████████     GTK Theme: Matcha-dark-sea [GTK2/3]
 ████████  ████████  ████████     Icon Theme: Papirus-Dark
 ████████  ████████  ████████     Font: Noto Sans 11
 ████████  ████████  ████████     Disk: 4.7T / 4.8T (99%)
                                  CPU: Intel Core i7-8550U @ 8x 4GHz [46.0°C]
                                  GPU: Intel Corporation UHD Graphics 620 (rev 07)
                                  RAM: 7113MiB / 15899MiB
```
![Qt_version.png(如果加载不出来检查网络，刷新页面即可)](Qt_version.png)

## 目录结构
```bash
./
├── bin	#可执行文件
│   ├── dialoglist.o
│   ├── main.o
│   ├── Makefile
│   ├── moc_dialoglist.cpp
│   ├── moc_dialoglist.o
│   ├── moc_predefs.h
│   ├── moc_widget.cpp
│   ├── moc_widget.o
│   ├── MyselfQQ			#这个就是可执行文件，在Linux上直接 ./MyselfQQ 就可以直接运行
│   ├── qrc_res.cpp
│   ├── qrc_res.o
│   ├── ui_dialoglist.h
│   ├── ui_widget.h
│   └── widget.o
│
├── doc	#大作业报告
│   ├── 附件1-计算机网络期末大作业选题.docx
│   └── 附件2-计算机网络期末大作业报告.doc
│
├── images	#存放人物头像
│   └── *.png
│
├── LICENSE	#GNU v2.0 许可证
│
│		#源文件
├── dialoglist.h		#名单列表头文件
├── dialoglist.cpp	#名单列表的实现
├── dialoglist.ui   #名单列表的UI
├── widget.cpp			#聊天窗口头文件，采用广播UDP传输消息
├── widget.h				#聊天窗口的实现
├── widget.ui				#聊天窗口的UI
├── main.cpp 				#主函数
│
│		#Qt的配置文件
├── MyselfQQ.pro			#Qt的工程文件，用来给qmake生成Makefile的
├── MyselfQQ.pro.user	#用于记录打开工程的路径，所用的编译器、构建的工具链、生成目录、打开工程的qt-creator的版本等，当更换编译环境时，要将其删除。
├── res.qrc						#资源文件
│
│   #说明文件
├── README.md				#说明文件
├── Qt_version.png	#Qt版本信息
└── 运行效果图.png	#运行效果图
```

## 运行
[运行视频(点击即可跳转)](https://www.bilibili.com/video/BV19E411N7CG)
```bash
cd bin/
make
./MyselfQQ
```
![运行效果图.png(如果加载不出来检查网络，刷新页面即可)](运行效果图.png)

## 参考资料
1.[QT编译器](https://www.bilibili.com/video/av99439413)<br>
2.零基础学Qt4编程,作者 吴迪<br>
3.[计算机网络原理与实践(第2版),主编徐磊](https://www.bilibili.com/video/BV1yE411s7LP)

4.[如何安装MariaDB](https://mariadb.com/kb/en/mariadb-package-repository-setup-and-usage/)

5.[Mariadb基本操作](https://mp.weixin.qq.com/s?__biz=MzU1OTM3ODQ0MA==&mid=2247486201&idx=7&sn=de1af246628be3bacbdef981fd89f89a&chksm=fc19739ecb6efa880c3e4f4121c97ddf440a8644028ce66db46608f3740fea96beb05bdb500f&mpshare=1&scene=1&srcid=01206GOmlI3ERaOwSZeiOFJC&sharer_sharetime=)

6.[Docker基础](https://mp.weixin.qq.com/s?__biz=MzU1OTM3ODQ0MA==&mid=2247486201&idx=4&sn=6516ee82a3ed16114134540c14149306&exportkey=AUUgs%2FrAPLEMQwXbP%2BcIoqc%3D&pass_ticket=uprqBeZcd7t1t9eXBZRBE6cz%2FSwMnG7%2BO1kEPaTWIdQ%3D)

7.[VIM 使用](https://mp.weixin.qq.com/s?__biz=MzU1OTM3ODQ0MA==&mid=2247487277&idx=3&sn=0047fb27a72d665eb8c3f43692d0d801&chksm=fc19764acb6eff5c13f34340182adecfcf754c26c213fe6865811e6c120fe4a45f738d5cec03&mpshare=1&scene=1&srcid=0322LQQvGS7lsmfSRE6j9hGF&sharer_sharetime=)