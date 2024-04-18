#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define BOYUT 99

void ortalama(const int dizi[]);
void mod(const int dizi[]);
void medyan(const int dizi[]);
void diziYazdir(const int dizi[]);
void diziyiSirala(int dizi[]);

int main() {
    int incelenecekDizi[BOYUT], i;
    srand(time(NULL)); // Rastgele sayý üreteci için tohum deðeri

    // Diziyi rastgele sayýlarla doldur (1-9 arasýnda)
    for (i = 0; i < BOYUT; i++) {
        incelenecekDizi[i] = rand() % 9 + 1;
    }

    diziYazdir(incelenecekDizi);
    ortalama(incelenecekDizi);
    mod(incelenecekDizi);
    medyan(incelenecekDizi);

    return 0;
}

void ortalama(const int dizi[]) {
    int toplam = 0;
    int i;
    double ortalama;

    for (i = 0; i < BOYUT; i++) {
        toplam += dizi[i];
    }

    ortalama = (double)toplam / BOYUT;
    printf("Ortalama = %.2f\n", ortalama);
}

void mod(const int dizi[]) {
    int i, j, mod, modSayisi = 0, maksimumTekrar = 0;
    int tekrarSayilari[9] = {0}; // Her deðerin tekrar sayýsýný tutacak dizi

    for (i = 0; i < BOYUT; i++) {
        tekrarSayilari[dizi[i] - 1]++; // Dizideki elemanlarýn tekrar sayýlarýný hesapla
    }

    for (i = 0; i < 9; i++) {
        if (tekrarSayilari[i] > maksimumTekrar) {
            maksimumTekrar = tekrarSayilari[i];
            mod = i + 1; // Mod, indeks + 1 olarak hesaplanýr
            modSayisi = 1;
        } else if (tekrarSayilari[i] == maksimumTekrar) {
            modSayisi++;
        }
    }

    if (modSayisi == 1) {
        printf("Mod = %d\n", mod);
    } else {
        printf("Birden fazla mod var\n");
    }
}

void medyan(const int dizi[]) {
    int temp[BOYUT];
    int i;

    for (i = 0; i < BOYUT; i++) {
        temp[i] = dizi[i];
    }

    diziyiSirala(temp);

    int ortanca = BOYUT / 2;
    if (BOYUT % 2 == 0) {
        printf("Medyan = %.2f\n", (temp[ortanca - 1] + temp[ortanca]) / 2.0);
    } else {
        printf("Medyan = %d\n", temp[ortanca]);
    }
}

void diziYazdir(const int dizi[]) {
    int i;
    for (i = 0; i < BOYUT; i++) {
        printf("%d ", dizi[i]);
    }
    printf("\n");
}

void diziyiSirala(int dizi[]) {
    int i, j, temp;
    for (i = 0; i < BOYUT - 1; i++) {
        for (j = 0; j < BOYUT - i - 1; j++) {
            if (dizi[j] > dizi[j + 1]) {
                temp = dizi[j];
                dizi[j] = dizi[j + 1];
                dizi[j + 1] = temp;
            }
        }
    }
    diziYazdir(dizi);
    
}
