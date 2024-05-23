#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

main() {
	setlocale(LC_ALL, "Turkish");
	char cumle[80];
	char dosyaSonu = '\0';
	int sayac;
	
	printf( "Metin giriþi yapýnýz:\n" );
	gets(cumle);
	
	while(cumle[sayac] != dosyaSonu){
		putchar(cumle[sayac]);
		sayac ++;	
	}
	
	printf("\n");
	
	while(sayac >0 ){
		putchar(cumle[sayac - 1]);
		sayac --;
	}
	
	
}
