#include "mytimer.h"

MyTimer::MyTimer(QObject *parent) : QObject(parent)
{
    QTimer *timer = new QTimer() ;

    connect(timer , SIGNAL(timeout()) , this , SLOT(update()));
    timer->start(1000);
}

QString MyTimer::time() const
{
    return m_time ;
}

void MyTimer::setTime(const QString time)
{
    if(m_time != time){

        m_time = time ;

    };
}

void MyTimer::update()
{
    m_time = QTime :: currentTime().toString();
    emit timeChanged();
}
