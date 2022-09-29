#include <malloc.h>
#include "circle.h"
#include <stdio.h>
#include <stdbool.h>


/* Sets value of the components of circle to i */
void fiveCircles(circle c[]) {
	for (int i = 0; i < 5; i++) {
		c[i].r = i;
		c[i].p.x = i;
		c[i].p.y = i;
	}
/*post: returns an array with five circles - solution to 6.b*/
}

/* checks if radius of circle is bigger than 0 */
/* pre: r > 0 */
bool circleIsValid(const circle * c) {
	if ((*c).r <= 0)
		return false;
	else
		return true;
/*post: answer to exercise 6.c*/
}

/* adds a point p to x and y of circle d*/
void translate(circle* c, const point* p) {
	c->p.x += p->x;
	c->p.y += p->y;
/*answer to exercise 6.d */
}



