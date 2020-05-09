#include <stdio.h>
#include <math.h>

int main(){
	char alphabet = 'a';
	for(int i = 97; i<=122;i++){
		printf("%c ascii is %d\n",alphabet,i);
		alphabet++;
	}
	return 0;
}
