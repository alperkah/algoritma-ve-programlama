#include <stdio.h>
#include <stdlib.h>

#define BOYUT 9

void ortalama(const int dizi[]);
void diziYazdir(const int dizi[]);



main() {
	const int incelenecekDizi[BOYUT] = {5,4,9,7,4,1,1,2,5};
	
	diziYazdir(incelenecekDizi);
	ortalama(incelenecekDizi);
	
	

}

void ortalama(const int dizi[]){
	int toplam = 0;
	int i;
	double ortalama;
	
	for(i = 0; i < BOYUT; i ++){
		toplam += dizi[i];
	}
	
	ortalama = (double)toplam / BOYUT;
	printf("Ortalama = %f\n", ortalama);
}

void diziYazdir(const int dizi[]){
	int i;
	for(i = 0; i < BOYUT; i++){
		printf("%5d", dizi[i]);
	}
	printf("\n");
}







