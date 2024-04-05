#include <stdio.h>
#include <locale.h>

// Dizinin elemanlarýný toplayan fonksiyon
int dizi_toplam(const int dizi[], int boyut) {
    int toplam = 0;
    int i;
    for (i = 0; i < boyut; ++i) {
        toplam += dizi[i];
    }
    return toplam;
}

// Dizinin elemanlarýný ekrana yazdýran fonksiyon
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

    // Ýki dizi oluþturuldu ve elemanlarý ekrana yazdýrýldý
    printf("Dizi 1:\n");
    dizi_yazdir(dizi1, 5);

    printf("Dizi 2:\n");
    dizi_yazdir(dizi2, 5);

    // Ýki dizinin toplamlarý hesaplandý ve ekrana yazdýrýldý
    printf("Dizi 1'in toplami: %d\n", dizi_toplam(dizi1, 5));
    printf("Dizi 2'nin toplami: %d\n", dizi_toplam(dizi2, 5));

    return 0;
}

