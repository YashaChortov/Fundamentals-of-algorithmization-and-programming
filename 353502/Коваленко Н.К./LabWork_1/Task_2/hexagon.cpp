#include "hexagon.h"

Hexagon::Hexagon()
{

}

void Hexagon::paint(QPainter *painter, const QStyleOptionGraphicsItem *, QWidget *)
{
    QPolygon polygon;
    painter->setBrush(QBrush(QColor(0,255,255)));
    polygon << QPoint(-radius,0) << QPoint(-radius / 2, radius * sqrt(3) / 2) << QPoint(radius / 2,radius * sqrt(3) / 2) << QPoint(radius,0) << QPoint(radius / 2,-radius * sqrt(3) / 2) << QPoint(-radius/2,-radius * sqrt(3)/2);
    painter->drawPolygon(polygon);
}

float Hexagon::area()
{
    return this->getScale() * this->getScale() * 3 * radius * radius * sqrt(3) / 2;
}

float Hexagon::perimeter()
{
    return 6 * radius * this->getScale();
}
//getScale() для изменения периметра и площади с увеличением/уменьшением размера фигуры
