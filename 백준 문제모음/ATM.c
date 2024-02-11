#include <stdio.h>
int main(void)
{
	int persons,i,j,temp,sum=0; //persons <- Danymic variable
	scanf("%d",&persons);
	int times[persons],res[persons];
	for(i=0;i<persons;i++)
	{
		scanf("%d",&times[i]);
	}
	//sort array
	for(i=0;i<persons-1;i++)
	{
		for(j=i+1;j<persons;j++)
		{
			if(times[i] > times[j])
			{
				temp = times[j];
				times[j] = times[i];
				times[i] = temp;
			}
		}
	}
	//sorted array times[persons]
	//each person total time
	//res[i] = times[0] + times[1] + ...times[i]
	for(i=0;i<persons;i++)
	{
		sum += times[i];
		res[i] = sum;
		//printf("No.%d person watinig about %dminutes.\n", i+1,res[i]);
	} 
	//sum initialize
	sum=0;
	//all people total times
	for(i=0;i<persons;i++)
	{
		sum+=res[i];
		//printf("%d\n", sum);
	} 
	printf("%d",sum);
	return 0;
}
