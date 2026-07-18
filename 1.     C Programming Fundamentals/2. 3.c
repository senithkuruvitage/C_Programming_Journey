/* Author Name : Senith Kuruvitage
   Date        : June 24, 2026
   Program     : Calculating the base and the height of a sail.     */

#include<stdio.h>
#include<math.h>

int main()
{
	float  base, height, area;

	printf("Enter the Area of the sail (m^2) : ");
	scanf("%f",&area);

	/*  Area = 1/2 * base * height
	         = 1/2 * height*2/3 * height   */
	
	height = sqrt(area * 3);
	base = (2.0 / 3.0) * height;

	printf("Height of the sail : %.2f meters\n",height);
	printf("Base of the sail : %.2f meters\n",base);

	return 0;

} // End of main function.
