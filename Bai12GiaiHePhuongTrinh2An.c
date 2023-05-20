#include<stdio.h>
#include<stdlib.h>

int main()
{
	float a1,a2,b1,b2,c1,c2,d,dx,dy;
	printf("Nhap he so a1 b1 c1: ");
	scanf("%f %f %f", &a1,&b1,&c1);
	printf("Nhap he so a2 b2 c2: ");
	scanf("%f %f %f", &a2,&b2,&c2);
	
	d = (a1*c2-a2*c1);
	dx = (a1*b2-a2*b1);
	dy = (c1*b2-c2*b1);
	
	if (!d)               //neu d = 0
	printf((! dx && !dy)?("Vo so nghiem\n"):("Vo nghiem\n"));
	else
	printf("nghiem cua pt la x = %.02f, y = %.02f", dx/d,dy/d);
	return 0;
}
