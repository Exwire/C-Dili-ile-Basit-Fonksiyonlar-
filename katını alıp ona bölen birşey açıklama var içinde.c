#include <stdio.h>

int kat(int,int);
int faktoryel(int);
int main(){
	
	int a,sum=1,pow,i,j;
	
	printf("Sayiyi giriniz.\n");
	scanf("%d",&a);
	printf("Sayiyi almak istediðiniz katini giriniz.\n");
	scanf("%d",&pow);
	
	for(i=1;i<=pow;i++)
	{
		j = (kat(a,i)/i);
		sum=sum+faktoryel(j);
		
	}
	printf("%d",sum);
	return 0;
}


int kat(int num,int pow){
	
	int i = 1,res = 1;
	while (i<= pow)
	{
 		res *= num;
 	    i++;
	}
	return res;
}
int faktoryel(int x){
	
	int sum=1,a;
	for(a=1;a<=x;a++){
		sum*=a;
	}
	
	return sum;
}
