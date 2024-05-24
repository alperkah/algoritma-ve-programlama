#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define BOYUT 20

main(){
	
	int sayac = 0;
	int boslukSayisi = 0;
	char basilanTus;
	
	while(basilanTus!= 27){
		
		if(basilanTus == 77){
			boslukSayisi++;
		}
		if(basilanTus == 75){
			boslukSayisi--;
		}
		
		for(sayac = 0; sayac < boslukSayisi; sayac ++){
			printf(" ");
		}//for
		printf("*");
		basilanTus = getch();
		system("cls");//Ekraný temizler
			
		
	}//while
	
	
	
}


