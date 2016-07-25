#include "bounce.h"

Bounce::Bounce(QGLWidget *parent)
	: QGLWidget(parent)
{
	ui.setupUi(this);
	startTimer(500);
	xs = ys = 0.1;
}

Bounce::~Bounce()
{

}

void Bounce::initializeGL()
{
	setGeometry(200,100,600,600);
	glClearColor(0.0,0.0,0.8,0.0);
	glClearDepth(1.0);
	glEnable(GL_DEPTH_TEST);
	glDepthFunc(GL_LEQUAL);
	glHint(GL_PERSPECTIVE_CORRECTION_HINT,GL_NICEST);
}

void Bounce::paintGL()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glPushMatrix();
	glColor3f(0.8,0.0,0.0);
	if(x>0.9 || x<-1.0)
		xs = -xs;
	if(y>1.0 || y<-0.9)
		ys = -ys;
	x += xs;
	y += ys;

	glRectf(x, y, x + 0.1, y - 0.1);
}

void Bounce::resizeGL(int w, int h)
{
	if(0 == h)
		h = 1;
	glViewport(0,0,w,h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
}

void Bounce::timerEvent(QTimerEvent *)
{
	updateGL();
}