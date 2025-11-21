//practical 13
#include<stdio.h>
int main()
{
printf(
"Smart Water System automatic tank refill\n ");

int Waterlevel;
for(Waterlevel=10 ; Waterlevel <= 100 ;
Waterlevel+=10)
{
if(Waterlevel<100)
{
printf("\nCurrent water level: %d",
Waterlevel);
}
else
{


printf("\nTank is Full!");

}
}
printf("maitry chapadia_25ce013");
return 0;
}
