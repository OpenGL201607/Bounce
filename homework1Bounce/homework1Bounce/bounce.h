#ifndef BOUNCE_H
#define BOUNCE_H

#include <QtWidgets/QWidget>
#include "ui_bounce.h"
#include <QtGui>
#include <QtCore>
#include <QtOpenGL>
class Bounce : public QGLWidget
{
	Q_OBJECT

public:
	Bounce(QGLWidget *parent = 0);
	~Bounce();
	void initializeGL();
	void paintGL();
	void resizeGL(int w,int h);
	void timerEvent(QTimerEvent *);
	//void keyPressEvent(QKeyEvent *e);
private:
	Ui::BounceClass ui;
	GLfloat x,y,xs,ys;
};

#endif // BOUNCE_H
