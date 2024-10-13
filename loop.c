// code by KingofGamer619
// oct-13-2024
#include <stdio.h>
int main (void)
{
int i = 0; //declare value  of i is 0
printf("Loop Start\n ");  // Display Loop Start in new line

while  (i < 10)  //while when i is less than 10  so print 9 times
{ 
  i++; //increment by one numbber 
printf("i: %d\n", i); //Diaplay that variable i : 0  and loop  in while using
 if (i == 5) break;  //It break or stop in five position 
}
printf("Loop End\n");
//Display Loop End in new line
return 0;
}
