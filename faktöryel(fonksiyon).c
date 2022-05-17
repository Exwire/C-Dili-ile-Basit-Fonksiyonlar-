#include <stdio.h>

int faktoryel(int);

int main(){
	
	int sayi;
	printf("Faktoryelini istediðiniz sayiyi giriniz,\n");
	scanf("%d",&sayi);
	printf("%d",faktoryel(sayi));
	
	return 0;

}

int faktoryel(int x){
	
	int sum=1,a;
	for(a=1;a<=x;a++){
		sum*=a;
	}
	
	return sum;
}
