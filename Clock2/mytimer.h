#ifndef MYTIMER_H
#define MYTIMER_H

#include <QObject>
#include <QTime>
#include <QQmlContext>
#include <QTimer>
class MyTimer : public QObject
{
    Q_OBJECT

    Q_PROPERTY(QString time READ time WRITE setTime NOTIFY timeChanged)

public:
    explicit MyTimer(QObject *parent = nullptr);

    QString time () const ;
    void setTime (const QString time ) ;

signals:

    void timeChanged() ;

public slots :

    void update();

private:

    QString m_time ;

};

#endif // MYTIMER_H
