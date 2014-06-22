/*
Name:Qiao ma
CIN:302599315
*/

#ifndef HW1_H
#define HW1_H

#define PI 3.1415

struct Ball{
	GLfloat tx, ty;	
	GLint radius;
	GLfloat centerx, centery;
	int dx, dy;
	float rColor, gColor, bColor;
	bool stop;
};

//Global Variables
const int screenWidth = 500;	   // width of screen window in pixels
const int screenHeight = 500;	   // height of screen window in pixels

const float worldWidth = 500.0;
const float worldHeight = 500.0; 

const int maxBallSize = 4;
GLdouble lineLength;

Ball balls[maxBallSize];

int numBall, selectBallNum, ballCenterX, ballCenterY;
bool fillColor, overlap;
void setWindow(float left, float right, float bottom, float top);
float getRandom();
float computeLineLength(Ball ball1, Ball ball2);
float computeLineLength(Ball ball1, int x, int y);

#endif