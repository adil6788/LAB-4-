
#include<stdio.h>
main()
{
	int yo,ca,fca;
	char ps;
	printf("is your policy active yes or no(1,0)  : ");
	scanf("%c",&ps);
	printf("enter your claim amount : ");
	scanf("%d",&ca);
	printf("how much year old is your vehical : ");
	scanf("%d",&yo);
	switch (ps)
	{
		case '1':
			if(yo<=10 && ca<=500000)
		{printf("your approved claim amount is : %d",ca);}
			else if((yo>=10 && yo<=15) && (ca<=500000))
			{fca=ca*0.50;
			printf("your approved claim amount is : %d ",fca);}
			else
			printf("claim not approved");
		
			break;
		case '0':
			printf("claim disapproved");
			break;
		
	}
}
