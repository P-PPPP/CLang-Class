#include <stdio.h>


int main(){
	int i=1,input,sum=0,roll=0;
	scanf("%d",&input);
	for(roll=1;roll<=input;roll++)
	{
		for(i = 1;i<=roll;i++)
		{
			sum = sum+i;
		}
	}
	printf("%d\n",sum);
	return 0;
}
