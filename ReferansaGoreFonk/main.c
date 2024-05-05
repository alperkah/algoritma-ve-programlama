#include <stdio.h>
#include <stdlib.h>

void referansaGoreKup(int *);

main() {
	
	int sayi = 5;
	
	printf("Sayi degeri = %d\n", sayi);
	referansaGoreKup(&sayi);
	printf("Sayi degeri = %d\n", sayi);


}

void referansaGoreKup(int *sayiPtr){
	
	*sayiPtr = *sayiPtr * *sayiPtr * *sayiPtr;
}
