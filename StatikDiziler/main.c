#include <stdio.h>
#include <locale.h>

// Fonksiyon prototipleri
void statikDiziFonk(void);


int main() {
	setlocale(LC_ALL, "Turkish");
	
	statikDiziFonk();
	statikDiziFonk();
	statikDiziFonk();
	statikDiziFonk();
	statikDiziFonk();
   
    return 0;
}

// Statik yerel diziyi kullanan fonksiyon
void statikDiziFonk(void) {
    int static a[3]; // Statik dizi
    
    a[0] += 5;
    a[1] += 5;
    a[2] += 5;
    
    printf("a[0] = %d a[1] = %d a[2] = %d\n", a[0], a[1], a[2]);
    
}

