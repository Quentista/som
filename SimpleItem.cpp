#include "SimpleItem.h"

#include <QPainter>
#include <QApplication>

SimpleItem::SimpleItem()
{
}

void SimpleItem::paint(QPainter *ppainter,
					   const QStyleOptionGraphicsItem *, QWidget *)
{
	ppainter->save();
	ppainter->setPen(QPen(Qt::blue, nPenWidth));
	ppainter->drawEllipse(-10, -10, 20, 20);
	ppainter->restore();
}

void SimpleItem::mousePressEvent(QGraphicsSceneMouseEvent *pe)
{
	QApplication::setOverrideCursor(Qt::PointingHandCursor);
	QGraphicsItem::mousePressEvent(pe);
}

void SimpleItem::mouseReleaseEvent(QGraphicsSceneMouseEvent *pe)
{
	QApplication::restoreOverrideCursor();
	QGraphicsItem::mouseReleaseEvent(pe);
}
