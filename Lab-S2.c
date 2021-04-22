#include <stdio.h>   /* standard I/O routines */

int main (void)

{

float orange= 0 , apple = 0 , banana = 0 , totalprice = 0; 

printf("Hello Custmer Enter No. of LB you have  Orange, Apple, Banana, separated with comma\n");

scanf(" %f, %f , %f" , &orange ,&apple , &banana);

//totalprice = ((2.0f * orange) + (3.0 * apple) + (5.0 * banana));

//printf("\nThe total price is %f", totalprice);

printf("\nThe total price is $ %f" , ((2.0f * orange) + (3.0* apple) + (5.0 * banana)));

/*
printf("Enter How many Apple : ");

scanf(" Amount of Apple = $ %d " , &Apple);

printf("Enter How many Orange : \n" );
scanf(" Amount of Orange = $ %d /n" , &Orange);

printf("Enter How many Banana : ");

scanf(" Amount of Banana = $ %d" , &Banana);

printf(" Total Amount = %d + %d + %d ", Apple, &Orange , &Banana );

*/

return 0 ;

}