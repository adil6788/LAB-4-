#include<stdio.h>
int main()
{ 
 int cw,np;
printf("ENTER YOUR COMBINED WEIGHT : ");
scanf("%d",&cw);
printf("ENTER THE NUMBER OF PEOPLE : ");
scanf("%d",&np);
if(np>10 || cw>1000)
{printf("SORRY LIFT CANNOT OPERATE AS IT IS OWERCROWDED AND OVWEWIGHT");}
else 
printf("ENTERY GRANTED");

}
