#ifndef SIMPLEITEM_H
#define SIMPLEITEM_H

#include <QGraphicsItem>

class SimpleItem : public QGraphicsItem
{
private:
	enum {nPenWidth = 3};

public:
	SimpleItem();
	virtual QRectF boundingRect() const
	{
		QPointF ptPosition (-10 - nPenWidth, -10 - nPenWidth);
		QSizeF size (20+ nPenWidth *2, 20+ nPenWidth *2);
		return QRectF (ptPosition, size);
	}

	virtual void paint(QPainter* ppainter,
					   const QStyleOptionGraphicsItem*,
					   QWidget*);
	virtual void mousePressEvent(QGraphicsSceneMouseEvent *pe);
	virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent *pe);
};



#endif // SIMPLEITEM_H
