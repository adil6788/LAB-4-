#include<stdio.h>
main()
{
int hsc,test,h2,t2,f_s;
printf("ENTER YOUR ENTRY TEST SCORE PERCENTAGE : ");
scanf("%d",&test);
printf("ENTER YOUR HSC PERCENTAGE : ");
scanf("%d",&hsc);
h2=hsc*0.50;
	t2=test*0.50;
	f_s=h2+t2;
if(f_s>=80){printf("You have sucessfully secured admission in CS DEPARTMENT");}
else if(f_s>=65){printf("You have sucessfully secured admission in SE DEPARTMENT");}
else if(f_s>=50){printf("You have sucessfully secured admission in IT DEPARTMENT");}
else printf("rejected(beta mehnat kro");
}
