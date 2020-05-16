#include <stdio.h>


int main(){
	double f[50];
	int n;
	f[0]=f[1]=1.0;
	for(n=2;n<=50;n++)
		{
			f[n]=f[n-1]+f[n-2];	
			printf("%.1f\n",f[n]);
		}
	return 0;
}
