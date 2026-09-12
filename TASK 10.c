#include<stdio.h>
main()
{
    int hr;
	float bt;
	printf("ENTER YOUR HEART RATE : ");
	scanf("%d",&hr);
	printf("ENTER YOUR BODY TEMPERATURE : ");
	scanf("%f",&bt);
	if(hr>=120 || bt>=39)
	printf("CRITICAL PATIENT - immediate attention");
	else if((hr>=100 && hr<=120) && (bt>37.5 && bt<39))
	printf("URGENT");
	else printf("NORMAL");
}
