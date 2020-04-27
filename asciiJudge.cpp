#include <stdio.h>

int main(){
char b;
scanf("%c",&b);
if(48<=b && b <= 57){
printf("number\n");
}
else if (65<=b && b<=90 || 97<=b <=122){
printf("alphabet\n");
}
else{
printf("else");
}

	return 0;
}