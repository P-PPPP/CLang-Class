#include <stdio.h>
double cal(int r1,int r2);//identify

int main(){
	int r1=0,r2=0;//r1>r2
	double result;
	scanf("%d %d",&r1,&r2);
	result = cal(r1,r2);
	printf("squre is %.2f\n",result);
	return 0;
}



double cal(int r1,int r2){
	int trans=0;
	if(r1<r2)
	{
		trans = r1;
		r1 = r2;
		r2 = trans;
	}
//exchange
	double squre;
	squre = (3.14*r1*r1)-(3.14*r2*r2);
	return	squre;
}
