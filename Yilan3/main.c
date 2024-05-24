#include <stdio.h>
#include <conio.h>
#include <windows.h>

#define BOYUT 20

void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void setCursorVisibility(int visible) {
    CONSOLE_CURSOR_INFO cursorInfo;
    cursorInfo.bVisible = visible; // Ýmlecin görünürlüðünü ayarlayýn
    cursorInfo.dwSize = 1; // Ýmlecin boyutunu ayarlayýn
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);
}

int main() {
    // Ýmleci gizle
    setCursorVisibility(0);

    int yatayPozisyon = 10; // Ekran koordinatlarý 0'dan baþlýyor
    int dikeyPozisyon = 10; // Ekran koordinatlarý 0'dan baþlýyor
    char basilanTus;

    // Ýlk yýldýz karakterini baþlangýç konumuna yerleþtir
    gotoxy(yatayPozisyon, dikeyPozisyon);
    printf("*");

    while (1) {
        // Kullanýcýdan tuþ giriþi al
        basilanTus = getch();

        // ESC tuþuna basýlýrsa döngüden çýk
        if (basilanTus == 27) {
            break;
        }

        // Önce mevcut pozisyonu sil (boþluk karakteri ile)
        gotoxy(yatayPozisyon, dikeyPozisyon);
        printf(" ");

        // Tuþa basýldýktan sonra hareketi kontrol et
        if (basilanTus == 77 && yatayPozisyon < BOYUT) { // Sað ok tuþu
            yatayPozisyon++;
        }
        if (basilanTus == 75 && yatayPozisyon > 0) { // Sol ok tuþu
            yatayPozisyon--;
        }
        if (basilanTus == 72 && dikeyPozisyon > 0) { // Yukarý ok tuþu
            dikeyPozisyon--;
        }
        if (basilanTus == 80 && dikeyPozisyon < BOYUT) { // Aþaðý ok tuþu
            dikeyPozisyon++;
        }

        // Yeni pozisyonda yýldýz karakterini çiz
        gotoxy(yatayPozisyon, dikeyPozisyon);
        printf("*");
    }

    // Program sonlandýðýnda imleci tekrar görünür yap
    setCursorVisibility(1);

    return 0;
}

