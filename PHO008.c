#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int f(int a, int b){
	
	if(b == 0)
		return a;
		
		return f(b,a%b);
	
	
}

int main(){

	printf("%d",f(1000,500));
	
}
