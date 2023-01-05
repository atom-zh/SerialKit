#ifndef THREAD_H
#define THREAD_H

#include <QThread>
#include <QSerialPort>

class DTRThread:public QThread
{
    Q_OBJECT
public:
    DTRThread(QObject *parent);
    void stop();
protected:
    void run();//线程入口函数（工作线程的主函数）
private:
    volatile bool stopped;
};

#endif // THREAD_H
