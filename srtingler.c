#include <stdio.h>
#include <unistd.h> // usleep fonksiyonu i�in
#include <string.h>

void yazdirEfektli(char *metin) {
    int i, uzunluk = strlen(metin);//Metnin uzunlugu bulunuyor
    
	for (i = 0; i < uzunluk; i++) {
        printf("%c ", metin[i]);
        fflush(stdout); // Ekran� hemen g�ncelle
        usleep(100000); // 100 ms gecikme (100000 mikrosaniye)
    }
    printf("\n");
}

int main() {
    char isim1[20], isim2[20];

    printf("1. Oyuncunun adini giriniz: ");
    scanf("%s", isim1);

    printf("2. Oyuncunun adini giriniz: ");
    scanf("%s", isim2);

    yazdirEfektli(isim1);
    yazdirEfektli(isim2);

    return 0;
}

