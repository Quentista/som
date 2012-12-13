#ifndef MYVIEW_H
#define MYVIEW_H

#include <QGraphicsView>

class MyView : public QGraphicsView
{
	Q_OBJECT
public:
	explicit MyView(QGraphicsScene* pScene, QWidget *pwgt = 0)
		: QGraphicsView(pScene, pwgt)
	{
	}
	
	
signals:
	
public slots:
	void slotZoomIn();
	void slotZoomOut();
	void slotRotateLeft();
	void slotRotateRight();
	
};

#endif // MYVIEW_H
