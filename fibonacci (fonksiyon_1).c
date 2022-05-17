#include <stdio.h>

int fibo(int);

int main(){
	
	int terim;
	
	printf("Kacinci terimi istiyorsunuz.\n");
	scanf("%d",&terim);
	
	printf("%d",fibo(terim));
	
	return 0;
}

int fibo(int x){
	
	int n,a=1,b=1,c;
	
	for(n=3; n<=x; n++){
	
		c=a+b;
		a=b;
		b=c;
	}
	
	return c;
}
