#include "Som.h"

#include <QGraphicsScene>
#include <QVBoxLayout>
#include <QPushButton>
#include <QPixmap>
#include <QGraphicsPixmapItem>

#include <MyView.h>
#include <SimpleItem.h>

Som::Som(QWidget *parent) :
	QWidget(parent)
  , m_scene(new QGraphicsScene(QRectF(-100, -100, 640, 480)))

  , m_butZoomIn(new QPushButton("&Zoom In"))
  , m_butZoomOut(new QPushButton("&Zoom Out"))
  , m_butRotateLeft(new QPushButton("&Rotate Left"))
  , m_butRotateRight(new QPushButton("&Rotate Right"))
  , m_SimpleItem(new SimpleItem)
{
	MyView* m_View = new MyView( m_scene,  parent);
	m_View->setRenderHint(QPainter::Antialiasing, true);
	
	m_scene->addItem(m_SimpleItem);
	m_SimpleItem->setPos(0, 0);
	m_SimpleItem->setFlags(QGraphicsItem::ItemIsMovable);
	
	m_PixmapItem = new QGraphicsPixmapItem;
	m_PixmapItem = m_scene->addPixmap(
				QPixmap("home/sebastian/projects/Qt/something/cat.jpg"));
	m_PixmapItem->setParentItem(m_SimpleItem);
	m_PixmapItem->setFlags(QGraphicsItem::ItemIsMovable);
	
	QObject::connect(m_butZoomIn, SIGNAL(clicked()),
					 m_View, SLOT(slotZoomIn()));
	QObject::connect(m_butZoomOut, SIGNAL(clicked()),
					 m_View, SLOT(slotZoomOut()));
	QObject::connect(m_butRotateLeft, SIGNAL(clicked()),
					 m_View, SLOT(slotRotateLeft()));
	QObject::connect(m_butRotateRight, SIGNAL(clicked()),
					 m_View, SLOT(slotRotateRight()));
	
	//Layout setup
	
	QVBoxLayout* mainLayout = new QVBoxLayout;
	mainLayout->addWidget(m_View);
	mainLayout->addWidget(m_butZoomIn);
	mainLayout->addWidget(m_butZoomOut);
	mainLayout->addWidget(m_butRotateLeft);
	mainLayout->addWidget(m_butRotateRight);
	setLayout(mainLayout);
}
