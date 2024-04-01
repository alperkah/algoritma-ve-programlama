#include <stdio.h>
#include <stdlib.h>

void diziyeIsimGir(char[], int);

main() {

	char kelime[50] = "HASAN";
	printf("%s\n", kelime);
	diziyeIsimGir(kelime, 50);
	printf("%s\n", kelime);
	
		
}

void diziyeIsimGir(char dizi[], int boyut){
	
	dizi[0] = 'a';
	dizi[1] = 'l';
	dizi[2] = 'p';
	dizi[3] = 'e';
	dizi[4] = 'r';
	
}
