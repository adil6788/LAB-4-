//A traffic police system fines drivers based on a zone type entered as a number (1 = School Zone, 2 =
//Highway, 3 = Residential Area) where each zone has a different speed limit (School = 30 km/h, Highway =
//100 km/h, Residential = 50 km/h). If the driver's speed exceeds the zone's limit by more than 20 km/h,
//the fine is doubled. Take zone type and driver's speed as input, and use switch combined with if-else to
//calculate the final fine amount, given a base fine of Rs. 1000 for any violation.
#include<stdio.h>
main()
{
	int zone,limit,fine,speed,f_fine;
	printf("ENTER THE ZONE(1 = School Zone, 2 =Highway, 3 = Residential Area) : ");
	scanf("%d",&zone);
	printf("ENTER THE SPEED : ");
	scanf("%d",&speed);
	switch(zone)
	{
		case 1:
		limit=30;
		fine=1000;
		if(speed>limit && speed<50)
	 {
		{
			printf("YOUR FINE IS : %d",fine);
		}
		if(speed>70)
		f_fine=fine*2;
		printf("YOUR FINE IS : %d",f_fine);
     }
       else printf(" NO FINE");
       break;
       	case 2:
		limit=100;
		fine=1000;
		if(speed>limit && speed<120)
	 {
		{
			printf("YOUR FINE IS : %d",fine);
		}
		if(speed>120)
		f_fine=fine*2;
		printf("YOUR FINE IS : %d",f_fine);
     }
       else printf(" NO FINE");
       break;
       case 3:
		limit=50;
		fine=1000;
		if(speed>limit && speed<70)
	 {
		{
			printf("YOUR FINE IS : %d",fine);
		}
		if(speed>70)
		f_fine=fine*2;
		printf("YOUR FINE IS : %d",f_fine);
     }
       else printf(" NO FINE");
       break;
       default:
       printf("INVALID INPUT");
}}
