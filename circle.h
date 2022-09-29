#pragma once
#include <stdbool.h>

typedef struct point {
	int x;
	int y;
} point;

typedef struct {
	int r; /* radius of circle */
	point p; /* center point of circle */
} circle;

/*add your definition of circle here. You need top call it "circle"*/

void fiveCircles(circle c[]);
bool circleIsValid(const circle* c);
void translate(circle* c, const point* p);