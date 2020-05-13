#include <stdio.h>


int main(){
	int factory, num, roll=0;//factory因子,num因数,roll循环
	for(num=0;num<=100;num++)
	{
		for(factory=1;factory<=num;factory++)
		{
				if(num%factory==0)
					roll++;
				if(roll>9)
				{
					printf("\n%d的因子有:",num);
					for(factory=1;factory<=num;factory++)
					{
						if(num%factory==0)
							printf("%d   ",factory);
					}
				}
		}
		roll = 0;
	}
	printf("\n");
	return 0;
}
