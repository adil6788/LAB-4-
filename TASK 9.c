
#include<stdio.h>
int main()
{
	int vh,m,tb,fb;
	printf("ENTER YOUR VISITING HOURS(1-24) : ");
	scanf("%d",&vh);
	printf("ARE YOU A MEMBER(1,0) : ");
	scanf("%d",&m);
	printf("\nENTER YOUR TOTAL BILL : ");
	scanf("%d",&tb);
	
	if((vh>=15 && vh<=17) && (m==1))
	{
	  fb=tb*0.75;
	printf("your final bill : %d",fb);
	}
	else if((vh>=15 && vh<=17) && (m==0))
	{
	fb=tb*0.80;
	printf("your final bill : %d",fb);
	}
	else if((vh<15 || vh>17) && (m==1))
    {	
     fb=tb*0.90;
	printf("your final bill : %d",fb);
	}
	else printf("your final bill is : %d",tb);
}

