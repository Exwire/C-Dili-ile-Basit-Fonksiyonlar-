#include <stdio.h>

//kombinasyon = n! / r! * (n-r)!
int faktoryel(int);
int comb(int,int);
int main(){
	
	int sayi1,sayi2;
	printf("Kombinasyonunu istediðiniz n sayisini giriniz.(n,r)\n");
	scanf("%d",&sayi1);
	printf("Kombinasyonunu istediðiniz r sayisini giriniz.(n,r)\n");
	scanf("%d",&sayi2);
	printf("%d",comb(sayi1,sayi2));
	
	return 0;

}

int faktoryel(int x){
	
	int sum=1,a;
	for(a=1;a<=x;a++){
		sum*=a;
	}
	
	return sum;
}
int comb(int k, int y){
	
	int sonuc;
	sonuc = faktoryel(k) / (faktoryel(y) * faktoryel(k-y));
	
	return sonuc;
	
}
