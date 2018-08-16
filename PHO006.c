#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int fibo(int n){
	
	if(n==2)
		return 1;
	if (n <= 1)
		return 0;
		
		return fibo(n-1)+fibo(n-2);
	
}

int main(){
	int i=5;
	printf("%d",fibo(i));
	
}
