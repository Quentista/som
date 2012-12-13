#include "MyView.h"

//MyView::MyView(QGraphicsScene *pScene, QWidget *pwgt) :
//	QGraphicsView(parent)
//{
//}

void MyView::slotZoomIn()
{
	scale(1.1, 1.1);
}

void MyView::slotZoomOut()
{
	scale(1/1.1, 1/1.1);
}

void MyView::slotRotateLeft()
{
	rotate(-5);
}

void MyView::slotRotateRight()
{
	rotate(5);
}
