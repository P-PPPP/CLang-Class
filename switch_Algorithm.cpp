#include <stdio.h>

int main(){
int op;
float data1 , data2 , ans;
scanf("%f%f%d",&data1,&data2,&op);
switch	(op){
case 0 :
	ans = data1 + data2 ;
	break;
case 1:
	ans = data1 - data2 ;
	break;
case 2:
	ans = data1 * data2 ;
	break;
case 3:
	ans = data1 / data2;
	break;

}

printf("%f\n",ans);
return 0;
}