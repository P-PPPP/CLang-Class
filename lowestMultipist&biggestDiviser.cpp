#include <stdio.h>
int biggestDiviser(int a,int b);//identify
int lowestMultipist(int a,int b);

int main(){
	int a=0,b=0,lowest;
	scanf("%d %d",&a,&b);
	lowest =lowestMultipist(a,b);
	printf("lowestMultipist is%d\n",lowest);
	return 0;
}

int biggestDiviser(int a,int b)
{	
	int compare=0,result;//manually def a>b

	if(a<b)
	{
		compare = a;
		a=b;
		b= compare;
	}

	for(int i =1;i<=b;i++)
	{
		if (a%i==0 && b%i==0)
			{
				result = i;
			}
	}
	return result;
}


int lowestMultipist(int a,int b){
//两个自然数的乘积等于这两个自然数的最大公约数和最小公倍数的乘积

	int result,biggest;
	biggest = biggestDiviser(a,b);
	result = (a*b)/biggest;
	printf("biggestDiviser is%d\n",biggest);
	return result;

}



