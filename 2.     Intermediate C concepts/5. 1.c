/* Author Name : Senith Kuruvitage
   Date        : July 16, 2026
   Program     : calculating the area of a rectangle and a square using a function   */

#include<stdio.h>

float getLength();
float getWidth();
float calculateArea(float length, float width);

float getLength() {    float len;
		       printf("Enter length : ");
		       scanf("%f",&len);
		       return len; }
	               
float getWidth() {     float wid;
		       printf("Enter width : ");
		       scanf("%f",&wid);
		       return wid; } 

float calculateArea(float length, float width) {  return length * width;  }

int main() {
	float length, width, area;

	printf("Enter dimensions for Rectangle\n");
	length = getLength();
	width = getWidth();
	area = calculateArea(length, width);
	printf("Area of Rectangle : %.2f\n\n",area);

	printf("Enter dimensions for Square\n");
	length = getLength();
	width = getWidth();
	area = calculateArea(length, width);
	printf("Area of Square : %.2f\n\n",area);

	return 0; }
