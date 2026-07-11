/*
--------------------------------  Variables  -----------------------------------

   variable = A reusable container for a value.
   Behaves as if it were the value it contains.
 
# int    =  whole numbers (4 bytes in modern systems)
# float  =  single-precision decimal number (4 bytes)
# double =  double-precision decimal number (8 bytes)
# char   =  single character (1 byte)
# char[] =  array of characters (size varies)
# bool   =  true, false or 1, 2 (1 byte, requires <stdbool.h>)                */


#include<stdio.h>
#include<stdbool.h>

int main()

{     
      int age = 25;               // Ex: 296 , 3 , - 296
      
      float price = 19.99;        // Ex: 0.123456 , -24.165
      
      double pi = 3.1415926535;   // long float
      
      char currency = '$';
      //                 --  Any Singal Character  --
      // Ex: 'any Capital letter' , 'any simple latter' , 'any symbol'
      //     'any number'
      
      char food[] = "Bro Code";   // inside the " " senith12345@gmail.com


      printf("%d\n", age);
      printf("%f\n", price);
      printf("%lf\n", pi);
      printf("%c\n", currency);
      printf("%s\n\n", food);

      // -----------------------------------------------------------------------
      // -----------------------------------------------------------------------

      int Age = 20;
      int year = 2026;

      float semi = 19.99;

      double se = 3.0123456789001234567890012345;


      printf("You are %d years old\n", Age);
      printf("The year :  %d\n\n", year);

      printf("The semi %f\n", semi);
      printf("The semi %.8f\n", semi);
      printf("The semi %lf\n\n", semi);

      printf("The value of se is %f\n", se);
      printf("The value of se is %.8f\n", se);
      printf("The value of se is %lf\n", se);
      printf("The value of se is %.8lf\n", se);
      printf("The value of se is %.10lf\n", se);
      printf("The value of se is %.16lf\n\n", se);


      // ----------------------------------------------------------------------
      // ----------------------------------------------------------------------

     
     /* bool isOnline = true;
      printf("%d", isOnline);  output 1  */

      bool isonline = false;
      
      if(isonline){
	      printf("You are ONLINE\n");
      }
      else{
	      printf("You are OFFLINE\n");
      } 


      bool isStudent = 1;

      if(isStudent){
	      printf("You are a student\n");
      }
      else{
	      printf("You are a not student\n");
      }
     
     
      return 0;
} 
