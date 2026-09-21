/*Author: Meet yadav
DDU IT SEM 1
Roll no: 094
*/
#include<stdio.h>
#define MAXVAL 50 
#define COUNTER 11
int main ()
{
  float Value[MAXVAL];
  int i,low,high;
  int group[COUNTER]= {0,0,0,0,0,0,0,0,0,0,0};
  /*. . . . . PEADING AND COUNTING. . . . .*/

  for(i=0;i<MAXVAL;i++)
  {
    /*. . . . .RIDING OF VALUE . . . . .*/
    scanf("%f",&Value[i]) ;
    /*. . . .COUTING FREQUENCY OF GROUPS. . . . .*/
      ++ group[ (int) (Value[i]/ 10)];
  }
  /*. . . . . PRINTING OF FREQUENCY TABLE. . . . .*/
  printf("\n");
  printf(" GROUP RANGE FREQUENCY\n\n");
  for(i=0;i<COUNTER ; i++)
  { 
     low = i * 10;
     if(i==10)

      high = 100;

    else 
      high = low + 9;
    
      printf("%2d %3d to %3d %3d \n", i+1,low,high, group[i]);

  }  
}




