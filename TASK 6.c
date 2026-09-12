#include<stdio.h>
 main()
{
	int p,m,price,exm,ec,sum;
	printf("ENTER THE PLANPlan 1 (Rs. 500 for 1000 minutes), Plan 2 (Rs.800 for 2000 minutes), Plan 3 (Rs. 1200 for unlimited minutes), Plan 4 (custom plan billed at Rs.1/minute) : ");
	scanf("%d",&p);
	printf("ENTER THE MINUTES USED : ");
	scanf("%d",&m);
	switch(p)
{	
	case (1):
	price=500;
	if(m>1000)
	{ exm=m-1000;    
	ec=exm*2;    
	sum=price+ec;
	printf("YOUR TOTAL BILL IS : %d",sum);       }
	else 
	printf("YOUR BILL IS : %d",price);   
	break ;
	
	case 2:
	price=800;
	if(m>2000)
	{ exm=m-2000;
	ec=exm*2;
	sum=price+ec;
	printf("YOUR TOTAL BILL IS : %d",sum);
	}
	else printf("YOUR BILL IS : %d",price);
	break;
	case 3:
	price=1200;
	printf("YOUR TOTAL BILL IS : %d",price);
	break;
	case 4:
	price=m;
	printf("YOUR TOTAL BILL IS : %d ",price);
	break;
	default:
	printf("INVALID PLAN NUMBER");
}
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	

