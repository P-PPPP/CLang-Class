#include <stdio.h>
#include <math.h>

int main(){
int i =1 ,s = 0;
	for(int z = 1;z<6;z++){
		s = s + i;
		i = i*10 + z + 1;
}
	printf("%d\n",s);
	return 0;
}
