#include <stdio.h>

int main(){
char input;
int alphabet=0 , space=0 ,num =0,other=0;
while((input = getchar())!='\n'){
	if(input==' '){
	space++;
	}

	else if('A'<=input && input<= 'Z' || 'a'<=input && input<='z'){
	alphabet++;
	}

	else if (48<=input && input<=57){
	num++;
	}

	else{
	other++;
	}
}
	printf("total%dalphabet,%dspace,%dnums,%dother\n",alphabet,space,num,other);
	return 0;
}
