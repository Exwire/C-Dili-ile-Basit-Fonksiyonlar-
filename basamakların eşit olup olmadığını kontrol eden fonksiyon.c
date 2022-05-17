#include <stdio.h>
//basamakların eşit olup olmadığını kontrol eden fonksiyon
int sayiKontrol(int);
int main(){
	
	int a[]={233,45,777,81,999999,36,90,88,11,61},i,ab;
	
	for(i=0;i<10;i++)
	{
		ab=sayiKontrol(a[i]);
		if(ab==1)
		printf("%d ==> Basamaklari esittir.\n",a[i]);
		else if(ab==0)
		printf("%d ==> Basamaklari esit degildir.\n",a[i]);
	}
	return 0;
}

int sayiKontrol(int sayi){
	
	int bas,bas2;
	bas = sayi % 10;
	sayi/=10;
	while(sayi != 0)
	{
		bas2=sayi%10;
		
		if(bas!=bas2)
		return 0;
		
		bas = bas2;
		sayi/=10;
	}
	return 1;
}
