
#include<stdio.h>
main()
{
	int ac_type;
	float b,i;
	printf("ENTER YOUT ACCOUNT TYPE(1 = Savings, 2 = Current, 3 =Fixed Deposit): ");
	scanf("%d",&ac_type);
     printf("ENTER YOUR BALANCE : ");
	scanf("%f",&b);
	switch(ac_type)
	{ case 1:
		if(b>=100000)
		i=b*0.04;
		else
		i=b*0.02;
		{printf("your interest is : %f",i);}
		break;
	case 2:
		i=b*0;
		printf("your interest is 0");
		break;
	case 3:
		i=b*0.08;
		printf("your interest is : %f",i);
		break;
	default:
		printf("INVALID ACCOUNT TYPE");
	}
		
}

