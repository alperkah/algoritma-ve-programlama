#include <stdio.h>
#include <locale.h>

// Dizinin elemanlar�n� toplayan fonksiyon
int dizi_toplam(const int dizi[], int boyut) {
    int toplam = 0;
    int i;
    for (i = 0; i < boyut; ++i) {
        toplam += dizi[i];
    }
    return toplam;
}

// Dizinin elemanlar�n� ekrana yazd�ran fonksiyon
void dizi_yazdir(const int dizi[], int boyut) {
	int i;
    printf("Dizi elemanlari:");
    for (i = 0; i < boyut; ++i) {
        printf(" %d", dizi[i]);
    }
    printf("\n");
}

int main() {
	setlocale(LC_ALL, "Turkish");
    const int dizi1[] = {1, 2, 3, 4, 5};
    const int dizi2[] = {10, 20, 30, 40, 50};

    // �ki dizi olu�turuldu ve elemanlar� ekrana yazd�r�ld�
    printf("Dizi 1:\n");
    dizi_yazdir(dizi1, 5);

    printf("Dizi 2:\n");
    dizi_yazdir(dizi2, 5);

    // �ki dizinin toplamlar� hesapland� ve ekrana yazd�r�ld�
    printf("Dizi 1'in toplami: %d\n", dizi_toplam(dizi1, 5));
    printf("Dizi 2'nin toplami: %d\n", dizi_toplam(dizi2, 5));

    return 0;
}

