#include <stdio.h>


int main(){
	int n,m;
	int a[10] = {1,2,3,4,5,6,7,8,9,10};
	for(n=0;n<=9;n++)
		{
			if (a[n]<a[n+1])
			{
				m = a[n+1];
			}
		
		}
	printf("biggest num = %d,at %d\n",m,n);
	return 0;
}
