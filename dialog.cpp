#include "dialog.h"
#include "ui_dialog.h"
#include <QPushButton>
#include "queen.h"

int arr[9] = {0};
int sum2=0;
queen que;

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{

       QPushButton *button = new QPushButton(this); // 创建按钮
       button->setObjectName("myButton");           // 指定按钮的对象名
       button->move(45,27);
       ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::paintEvent(QPaintEvent *event)
{
            que.sum1=0;//用于计数
            que.recursion(1);
            this->Dialog::draw();//在棋盘上表现一次八皇后的排法
            que.out = true;//用于出递归
}

/**
 * @brief Dialog::draw 画八皇后中的棋盘以及皇后
 */
void Dialog::draw()
{
    //初始化
    int N = 8;
    int rect = 600 / (N + 1);
    this->resize (N * rect, (N+1) * rect);
        QPainter painter(this);
        painter.setPen(Qt::black);
        painter.setBrush(Qt::white);
        painter.drawRect(0,0,8*rect,9*rect);//为了之后再次显示而 初始化
        painter.setBrush(Qt::blue);
      //画皇后
    for (int j = 0; j < N; j++)
        {
      painter.drawRect ( (arr[j+1]-1)* rect ,(j+1) *rect, rect , rect );
        }

    //棋盘的实现
    for (int i = 0; i < N; i++)
    {
        painter.drawLine (i * rect, rect, i * rect, rect * (N + 1));  //每行
        painter.drawLine (0, (i + 1) * rect, rect * N, (i + 1) * rect); //每列
    }

}


void Dialog::on_myButton_clicked()          // 使用自动关联
{
    sum2++;//用于计数
    this->update();//用于再次走入paintEvent
}

