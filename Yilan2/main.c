#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define BOYUT 20

int main() {
    int yatayPozisyon = 0, i, j;
    int dikeyPozisyon = 0;
    char basilanTus;

    while (basilanTus != 27) { // 27 is the ASCII code for ESC key
        // Tuþa basýldýktan sonra hareketi kontrol et
        if (basilanTus == 77) { // Right arrow key
            yatayPozisyon++;
        }
        if (basilanTus == 75) { // Left arrow key
            yatayPozisyon--;
        }
        if (basilanTus == 72) { // Up arrow key
            dikeyPozisyon--;
        }
        if (basilanTus == 80) { // Down arrow key
            dikeyPozisyon++;
        }

        // Pozisyonlarý sýnýrla
        if (yatayPozisyon < 0) yatayPozisyon = 0;
        if (yatayPozisyon >= BOYUT) yatayPozisyon = BOYUT - 1;
        if (dikeyPozisyon < 0) dikeyPozisyon = 0;
        if (dikeyPozisyon >= BOYUT) dikeyPozisyon = BOYUT - 1;

        // Ekraný temizle
        system("cls");

        // Yeni pozisyonda yýldýz karakterini çiz
        for (i = 0; i < dikeyPozisyon; i++) {
            printf("\n");
        }
        for (j = 0; j < yatayPozisyon; j++) {
            printf(" ");
        }
        printf("*\n");

        // Kullanýcýdan yeni tuþ giriþi al
        basilanTus = getch();
    }

    return 0;
}

