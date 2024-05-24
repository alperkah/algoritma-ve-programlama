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
    cursorInfo.bVisible = visible; // �mlecin g�r�n�rl���n� ayarlay�n
    cursorInfo.dwSize = 1; // �mlecin boyutunu ayarlay�n
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);
}

int main() {
    // �mleci gizle
    setCursorVisibility(0);

    int yatayPozisyon = 10; // Ekran koordinatlar� 0'dan ba�l�yor
    int dikeyPozisyon = 10; // Ekran koordinatlar� 0'dan ba�l�yor
    char basilanTus;

    // �lk y�ld�z karakterini ba�lang�� konumuna yerle�tir
    gotoxy(yatayPozisyon, dikeyPozisyon);
    printf("*");

    while (1) {
        // Kullan�c�dan tu� giri�i al
        basilanTus = getch();

        // ESC tu�una bas�l�rsa d�ng�den ��k
        if (basilanTus == 27) {
            break;
        }

        // �nce mevcut pozisyonu sil (bo�luk karakteri ile)
        gotoxy(yatayPozisyon, dikeyPozisyon);
        printf(" ");

        // Tu�a bas�ld�ktan sonra hareketi kontrol et
        if (basilanTus == 77 && yatayPozisyon < BOYUT) { // Sa� ok tu�u
            yatayPozisyon++;
        }
        if (basilanTus == 75 && yatayPozisyon > 0) { // Sol ok tu�u
            yatayPozisyon--;
        }
        if (basilanTus == 72 && dikeyPozisyon > 0) { // Yukar� ok tu�u
            dikeyPozisyon--;
        }
        if (basilanTus == 80 && dikeyPozisyon < BOYUT) { // A�a�� ok tu�u
            dikeyPozisyon++;
        }

        // Yeni pozisyonda y�ld�z karakterini �iz
        gotoxy(yatayPozisyon, dikeyPozisyon);
        printf("*");
    }

    // Program sonland���nda imleci tekrar g�r�n�r yap
    setCursorVisibility(1);

    return 0;
}

