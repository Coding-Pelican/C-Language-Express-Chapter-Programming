#include <stdio.h>

int getLineParameter(int x1, int y1, int x2, int y2, float* slope, float* yintercept);
int main(void) {
	float s, y;
	getLineParameter(3, 3, 6, 6, &s, &y) == -1 ? puts("Error") : printf("기울기 = %f,  y절편 = %f\n", s, y); 
}
int getLineParameter(int x1, int y1, int x2, int y2, float* slope, float* yintercept) {
	if (x1 == x2) {
		return -1;
	} else {
		*slope = (float)(y2 - y1)/(float)(x2 - x1);
		*yintercept = y1 - (*slope) * x1;
		return 0;
	}
}
