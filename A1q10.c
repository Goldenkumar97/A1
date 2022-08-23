/*WAP to take daate as an input in beloww given fformat and convert the time format and display the result as given below.*/
#include"stdio.h"

int main()
{
int DD,MM,YYYY;
printf( "Enter current date DD/MM/YYYY:");
scanf("%d %d %d",&DD,&MM,&YYYY);
printf("DAY -%d,MONTH -%d,YEAR -%d",DD,MM,YYYY);

    return 0;
}