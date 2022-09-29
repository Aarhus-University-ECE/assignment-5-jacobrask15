#include <malloc.h>
#include "circle.h"


typedef struct {
	int x; /* x coordinate of center point */
	int y; /* y coordinate of center point */
} point; 

typedef struct {
	int r; /* radius of circle */
	struct point p; /* center point of circle */
} circle;


void fiveCircles(circle c[]) {
	for (int i = 0; i < 5; i++) {
		c[i].r = i;
		c[i].p.x = i;
		c[i].p.y = i;
	}
/*post: returns an array with five circles - solution to 6.b*/
}

/* pre: r > 0 */
int circleIsValid(const circle * c) {
	if ((*c).r <= 0)
		printf("false");
	else
		printf("True");
/*post: answer to exercise 6.c*/
	return 0;
}

void translate(circle* c, const point* p) {
	(*c).p.x += (*p).x;
	(*c).p.y += (*p).y;
/*ansver to exercise 6.d */
}



