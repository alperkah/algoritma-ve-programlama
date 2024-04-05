/* Program: dizi_ve_eleman_ayarla.c */
/* Dizileri ve dizi elemanlar�n� fonksiyonlara ge�irme */
#include <stdio.h>
#include <locale.h>
#define DIZI_BOYUTU 5

void dizi_ayarla(/*const*/int [], int);  /* Diziyi ayarla */
void eleman_ayarla(int);         /* Eleman� ayarla */

int main()
{
   setlocale(LC_ALL, "Turkish");
   int dizi[DIZI_BOYUTU] = { 0, 1, 2, 3, 4 };
   int i; 

   printf("B�t�n dizinin referansa g�re �a�r�larak ge�mesinin "
          "etkileri:\n\nOrijinal dizinin "
          "de�erleri:\n");

   for (i = 0; i < DIZI_BOYUTU; i++) 
      printf("%3d", dizi[i]);

   printf("\n");
   dizi_ayarla(dizi, DIZI_BOYUTU);  /* Referansa g�re �a�r�larak ge�ti */
   printf("Ayarlanan dizinin de�erleri:\n");

   for (i = 0; i < DIZI_BOYUTU; i++)
      printf("%3d", dizi[i]);

   printf("\n\n\nDizi eleman�n�n de�ere g�re �a�r�larak "
          "ge�mesinin etkileri:\n\na[3] de�eri %d\n", dizi[3]);
   eleman_ayarla(dizi[3]);
   printf("dizi[3] de�eri %d\n", dizi[3]);
   return 0;
}

void dizi_ayarla(/*const*/int dizi[], int boyut)
{
   int j;

   for (j = 0; j < boyut; j++)
      dizi[j] *= 2;
}

void eleman_ayarla(int eleman)
{
   printf("eleman_ayarla fonksiyonunda ki de�er %d\n", eleman *= 2);
}

