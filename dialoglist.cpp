#include "dialoglist.h"
#include "ui_dialoglist.h"
#include <QToolButton>
#include "widget.h"
#include <QMessageBox>

DialogList::DialogList(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DialogList)
{
    ui->setupUi(this);


    //设置标题
    setWindowTitle("MySelfQQ 2020");
    //设置图标
    setWindowIcon(QPixmap(":/images/qq.png"));

    //准备图标
    QList<QString>nameList;
    nameList << "杨秉学" << "数据结构石老师" <<"接口技术徐老师"<<"编译原理齐老师"<<"软件工程王老师"
             <<"操作系统李老师"<<"体系结构夏老师"<<"数据库周老师"<<"计网李老师";


    QStringList iconNameList; //图标资源列表
    iconNameList << "ftbz"<< "ymrl" <<"qq" <<"Cherry"<< "dr"
                 <<"jj"<<"lswh"<<"qmnn"<<"wy";

    QVector <QToolButton *> vToolBtn;

    for(int i = 0 ; i < 9 ; i++)
    {
        //设置头像
        QToolButton * btn = new QToolButton;
        //设置文字
        btn->setText(nameList[i]);
        //设置头像
        QString str = QString(":/images/%1.png").arg(iconNameList.at(i));
        btn->setIcon(QPixmap(str));
        //设置头像大小
        btn->setIconSize( QPixmap(str).size() );
        //设置按钮风格 透明
        btn->setAutoRaise(true);
        //设置文字和图片一起显示
        btn->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        //加到 垂直布局中
        ui->vLayout->addWidget(btn);
        //容器保存住9个按钮，方便以后再次操作
        vToolBtn.push_back(btn);
        //9个标示默认初始化
        isShow.push_back(false);
    }

    //对9个按钮 进行添加信号槽
    for(int i = 0 ; i < vToolBtn.size();i++)
    {
        connect(vToolBtn[i],&QToolButton::clicked,[=](){
            //如果被打开了，就不要再次打开
            if(isShow[i])
            {
                QString str = QString("%1窗口已经被打开了").arg(vToolBtn[i]->text());
                QMessageBox::warning(this,"警告",str);
                return;
            }

            isShow[i] = true;

            //弹出聊天对话框
            //构造聊天窗口时候 告诉这个窗口他的名字 参数1  顶层方式弹出 参数2  窗口名字
            //注意！ Widget构造函数 并没有这两个参数
            Widget * widget = new Widget(0,vToolBtn[i]->text());
            //设置窗口标题
            widget->setWindowTitle(vToolBtn[i]->text());
            widget->setWindowIcon(vToolBtn[i]->icon());
            widget->show();

            connect(widget,&Widget::closeWidget,[=](){

                    isShow[i] = false;
            });

        });

    }




}

DialogList::~DialogList()
{
    delete ui;
}
