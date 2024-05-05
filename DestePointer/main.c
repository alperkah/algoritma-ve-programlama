#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

void karistir(int deste[][13]);
void dagitkartlari(const int deste[][13], const char *tarafismi[], const char *takimismi[]);

int main()
{
	setlocale(LC_ALL, "Turkish");
   const char *takimismi[] = {"Kupa", "Karo", "Sinek", "Maça"};
   const char *tarafismi[] = {"As", "Iki", "Uc", "Dort", "Bes", "Alti", "Yedi", "Sekiz", "Dokuz", "On", "Vale", "Kiz", "Papaz"};
   int deste[4][13] = {0};

   srand(time(NULL)); // Rastgele sayý üreteci baþlatýlýyor

   karistir(deste); // Deste karýþtýrýlýyor
   dagitkartlari(deste, tarafismi, takimismi); // Kartlar daðýtýlýyor

   return 0;
}

void karistir(int deste[][13])
{
   int satir, sutun, kart;

   // Deste karýþtýrýlýyor
   for (kart = 1; kart <= 52; kart++)
   {
       // Boþ bir yer bulmak için rastgele satýr ve sütun seçiliyor
       do
       {
           satir = rand() % 4;
           sutun = rand() % 13;
       } while (deste[satir][sutun] != 0);

       deste[satir][sutun] = kart; // Seçilen boþ yere kart yerleþtiriliyor
   }
}

void dagitkartlari(const int deste[][13], const char *tarafismi[], const char *takimismi[])
{
   int kart, satir, sutun;

   // Kartlar daðýtýlýyor
   for (kart = 1; kart <= 52; kart++)
   {
       // Kartýn yeri bulunuyor
       for (satir = 0; satir < 4; satir++)
       {
           for (sutun = 0; sutun < 13; sutun++)
           {
               if (deste[satir][sutun] == kart)
               {
                   printf("%5s of %-8s", takimismi[satir], tarafismi[sutun]);

                   // Her iki kartta bir yeni satýra geçiliyor
                   if (kart % 2 == 0)
                       printf("\n");
                   else
                       printf("\t");
               }
           }
       }
   }
}
