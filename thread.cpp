#include "thread.h"
#include <QDebug>

DTRThread::DTRThread(QObject * parent):QThread(parent)
{
   stopped = false;
}

void DTRThread::stop()
{
    stopped = true;
}

void DTRThread::run()
{
    qreal i = 0;// QT的浮点型

    while(!stopped)
    {
        qDebug()<<QString("in my_thread:%1").arg(i);
        msleep(1000);
        msleep(1000);
        i++;
    }
    stopped = false;
    qDebug()<<tr("线程已经停止啦");
}
