#include <stdio.h>

int main(void)

{

//printf ("True is %d \n" , (4 == 4));
//printf ("False is %d \n" , (4 == 5));

/*==== Conditional OP. =====*/

/* define integers*/
int num1 =0 , num2 =0 ;
/* print message to user */
printf ("Please insert two int number...\n");
/*scan the integers*/
scanf("%d\n%d", &num1, &num2);
/* compute the largest */
/* print the biggest*/
printf("The Largest is %d" , ( (num1 > num2) ? num1 : num2 ) );

return 0 ;

}

