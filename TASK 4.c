#include<stdio.h>
int main()
{
int m_type,t_slot;
float f_fee,f;
printf("ENTER YOUR MEMBERSHIP TYPE(1 = Student, 2 = Regular, 3 = Senior Citizen) : ");
scanf("%d",&m_type);
printf("ENTER YOUR TIME SLOT(1 = Morning, 2 = Evening) :  ");
scanf("%d",&t_slot);
switch(m_type)
{
	case 1:
		f=2000;
		if(t_slot==1)
	{f_fee=f*0.85;
	{printf("YOUR FEE IS : %f",f_fee);}}
		else
		{t_slot==2;
		printf("YOUR FEE IS : %f",f);}
		break;
		
		case 2:
		f=3500;
		if(t_slot==1)
		{f_fee=f*0.85;{printf("YOUR FEE IS : %f",f_fee);}}
		else
		{t_slot==2;
		printf("YOUR FEE IS : %f",f);}
		break;
		case 3:
		f=2500;
		if(t_slot==1)
		{f_fee=f*0.85;{printf("YOUR FEE IS : %f",f_fee);}}
		else
		{t_slot==2;
		printf("YOUR FEE IS : %f",f);}
		break;
		defualt:
		printf("INVALID INPUT");
		}
}
