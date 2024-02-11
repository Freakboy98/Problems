#include <stdio.h>

int main(void)
{
	//initailize
	int x,y,w,h,d1,d2,min;
	scanf("%d %d %d %d",&x,&y,&w,&h);
	//initial condition
	if((1<=w && w<=1000) && (1<=h && h<=1000))
	{
		if((1<=x && x<=w-1) && (1<=y && y<=h-1))	
		{
			if(x > w-x)
			{
	 			d1 = w-x;
			}
			else
			{
				d1 = x;
			}		

			if(y > h-y)
			{
				d2 = h-y;
			}
			else
			{
				d2 = y;
			}
		}
		else
		{
			printf("Error!");
		}	
		if(d1 > d2)
		{
			min=d2;
		}
		else
		{
			min = d1;
		}	
		printf("%d",min);
	}
	else
	{
		printf("Error!");
	}
	return 0;
}
