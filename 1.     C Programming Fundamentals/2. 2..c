/* Author Name : Senith Kuruvitage
   Date        : June 24, 2026
   Program     : Calculating the acceleration of a jet fighter launched from an aircraft-carrier catapul  */

#include<stdio.h>
int main()
{
	float takeoff_speed_kmh, takeoff_speed_ms, distance, velocity, acceleration, time;

	printf("Enter the jet's takeoff speed in km/hr : ");
	scanf("%f",&takeoff_speed_kmh);

	printf("Enter the jet's takeoff distance in meters : ");
	scanf("%f",&distance);

	// Convert km/hr to m/s
        takeoff_speed_ms = takeoff_speed_kmh * 5.0 / 18.0;

	/*    v = at -> 1
	      s = 1/2 at^2 -> 2
	      t = 2*s/v    a = v^2/2*s   */

	time = distance*2 / takeoff_speed_ms;
	acceleration = (takeoff_speed_ms*takeoff_speed_ms) / distance*2;

	printf("Takeoff acceleration : %.2f (m/s^2)\n",acceleration);
	printf("Time for the fighter to be accelerated to takeoff speed : %.2f (s)\n",time);

	return 0;

} // End of main function.
