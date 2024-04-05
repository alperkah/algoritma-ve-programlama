#include <stdio.h>
#include <locale.h>

// Dizinin elemanlarýný sýralayan fonksiyon (küçükten büyüðe)
void sirala(int dizi[], int boyut) {
    int i, j, k, gecici;
    for (i = 0; i < boyut - 1; ++i) {
        for (j = 0; j < boyut - i - 1; ++j) {
            if (dizi[j] > dizi[j + 1]) {
                // Elemanlarý yer deðiþtir
                gecici = dizi[j];
                dizi[j] = dizi[j + 1];
                dizi[j + 1] = gecici;
                //Diziyi yaz-------------
                printf("Dizinin yeni hali:\n");
    			for (k = 0; k < boyut; ++k) {
        			printf("%d ", dizi[k]);
    			}
    			printf("\n");
                //------------------------------
            }
        }
    }
}

int main() {
	setlocale(LC_ALL, "Turkish");
    int dizi[] = {7, 3, 11, 2, 8}, i; // Örnek bir dizi
    int boyut = sizeof(dizi) / sizeof(dizi[0]); // Dizinin boyutu

    // Dizinin orijinal hali
    printf("Dizinin orijinal hali:\n");
    for (i = 0; i < boyut; ++i) {
        printf("%d ", dizi[i]);
    }
    printf("\n");

    // Diziyi sýrala
    sirala(dizi, boyut);

    // Sýralanmýþ dizi
    printf("Dizinin siralanmis hali:\n");
    for (i = 0; i < boyut; ++i) {
        printf("%d ", dizi[i]);
    }
    printf("\n");

    return 0;
}

