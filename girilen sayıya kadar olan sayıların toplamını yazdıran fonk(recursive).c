#include<stdio.h>

int toplam(int);
int main(){
	
	int sayi,a;
	printf("Sayiyi giriniz.\n");
	scanf("%d",&sayi);
	a = toplam(sayi);
	printf("Girilen sayiya kadar olan sayilarin toplami = %d",a);
	return 0;
}

int toplam(int sayi){
	
	if(sayi==0)
		return 0;
	else	
		return sayi+toplam(sayi-1);
}
