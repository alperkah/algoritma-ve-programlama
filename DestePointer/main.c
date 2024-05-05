#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

void karistir(int deste[][13]);
void dagitkartlari(const int deste[][13], const char *tarafismi[], const char *takimismi[]);

int main()
{
	setlocale(LC_ALL, "Turkish");
   const char *takimismi[] = {"Kupa", "Karo", "Sinek", "Ma�a"};
   const char *tarafismi[] = {"As", "Iki", "Uc", "Dort", "Bes", "Alti", "Yedi", "Sekiz", "Dokuz", "On", "Vale", "Kiz", "Papaz"};
   int deste[4][13] = {0};

   srand(time(NULL)); // Rastgele say� �reteci ba�lat�l�yor

   karistir(deste); // Deste kar��t�r�l�yor
   dagitkartlari(deste, tarafismi, takimismi); // Kartlar da��t�l�yor

   return 0;
}

void karistir(int deste[][13])
{
   int satir, sutun, kart;

   // Deste kar��t�r�l�yor
   for (kart = 1; kart <= 52; kart++)
   {
       // Bo� bir yer bulmak i�in rastgele sat�r ve s�tun se�iliyor
       do
       {
           satir = rand() % 4;
           sutun = rand() % 13;
       } while (deste[satir][sutun] != 0);

       deste[satir][sutun] = kart; // Se�ilen bo� yere kart yerle�tiriliyor
   }
}

void dagitkartlari(const int deste[][13], const char *tarafismi[], const char *takimismi[])
{
   int kart, satir, sutun;

   // Kartlar da��t�l�yor
   for (kart = 1; kart <= 52; kart++)
   {
       // Kart�n yeri bulunuyor
       for (satir = 0; satir < 4; satir++)
       {
           for (sutun = 0; sutun < 13; sutun++)
           {
               if (deste[satir][sutun] == kart)
               {
                   printf("%5s of %-8s", takimismi[satir], tarafismi[sutun]);

                   // Her iki kartta bir yeni sat�ra ge�iliyor
                   if (kart % 2 == 0)
                       printf("\n");
                   else
                       printf("\t");
               }
           }
       }
   }
}
