/* Author Name : Senith Kuruvitage
   Date        : June 15, 2026
   Program     : Determining the length and width of a rectangular fence 
                 given its perimeter.                                       */

#include<stdio.h>
int main()
{
	float width, length, perimeter;

	printf("Enter the  perimeter of the rectangular fence (m) : ");
	scanf("%f",&perimeter);

	/*   perimeter = 2( width + length )
	               = 2( 3/4 + 1 )length     */

	length = 2*perimeter/7.0;
	width  = 3*perimeter/14.0;

	printf("Length of the fence : %.2f\n",length);
        printf("width of the fence : %.2f\n",width);

	return 0;
}// End of main function
