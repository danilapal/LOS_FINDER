#ifndef HEX_H
#define HEX_H

#include <QPoint>
#include <QPointF>
#include <QVector>
class Hex
{
public:
    Hex();
private:
    QVector <QPointF> points;
    QPointF *center;
    double rad;
    double sideSize;
};

#endif // HEX_H
