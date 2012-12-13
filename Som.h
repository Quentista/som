#ifndef SOM_H
#define SOM_H

#include <QWidget>

class QGraphicsScene;
class MyView;
class QPushButton;
class SimpleItem;
class QGraphicsPixmapItem;

class Som : public QWidget
{
	Q_OBJECT
public:
	explicit Som(QWidget *parent = 0);
	
signals:
	
public slots:
	
private:
	QGraphicsScene* m_scene;
	MyView* m_View;
	SimpleItem* m_SimpleItem;
	QGraphicsPixmapItem* m_PixmapItem;
	
	QPushButton* m_butZoomIn;
	QPushButton* m_butZoomOut;
	QPushButton* m_butRotateLeft;
	QPushButton* m_butRotateRight;
	
};

#endif // SOM_H
