#include <stdio.h>

int main(){
char a='A';
int roll = 0, half = 3, blank=0;
	for(roll=1;roll<5;roll++)
	{
		for(blank=half;0<blank;blank--)
		{
			printf(" ");
		}
		for(blank=1;blank<=(roll*2-1);blank++)
		{
			printf("%c",a);
			a+=1;		
		}
		printf("\n");
		a='A';
		half--;
	}
	return 0;
}
