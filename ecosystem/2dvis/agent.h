#ifndef AGENT_H
#define AGENT_H

#include <QGraphicsItem>

class Agent : public QGraphicsItem {

public:
    Agent();

    QRectF boundingRect() const;
    QPainterPath shape() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

protected:
    void advance(int step);

private:
    qreal angle;
    qreal speed;
    qreal agentEyeDirection;
    QColor color;
};

#endif