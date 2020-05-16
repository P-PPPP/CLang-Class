#include <stdio.h>


int main(){
	int a[3][3]={1,2,3,4,5,6,7,8,9};
	int b[3][3];

	for(int x=0;x<=2;x++)
	{

		for(int y=0;y<=2;y++)
		{
			b[x][y]=a[y][x];
			printf(" %d",b[x][y]);
		}
		
	}
	return 0;
}
