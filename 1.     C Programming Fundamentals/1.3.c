/* Author Name : Senith Kuruvitage
   Date        : June 15, 2026
   Program for Find missing heights of two people.  */

#include<stdio.h>
int main()
{
	float h1, h2, h3;
	float Avg, mh;     // mh = missing height   

	printf("Enter Person-1 height (cm) = ");
	scanf("%f", &h1);

	printf("Enter Person-2 height (cm) = ");
	scanf("%f", &h2);

	printf("Enter Person-3 height (cm) = ");
	scanf("%f", &h3);
		
	printf("Enter the calculated Average (cm) = ");
	scanf("%f", &Avg);

	mh = (5*Avg-(h1+h2+h3))/2;

		printf("Missing Height is %f cm\n",mh);
	      
	return 0;
} // End of main function
