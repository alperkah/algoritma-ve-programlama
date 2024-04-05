/* Program: dizi_ve_eleman_ayarla.c */
/* Dizileri ve dizi elemanlarýný fonksiyonlara geçirme */
#include <stdio.h>
#include <locale.h>
#define DIZI_BOYUTU 5

void dizi_ayarla(/*const*/int [], int);  /* Diziyi ayarla */
void eleman_ayarla(int);         /* Elemaný ayarla */

int main()
{
   setlocale(LC_ALL, "Turkish");
   int dizi[DIZI_BOYUTU] = { 0, 1, 2, 3, 4 };
   int i; 

   printf("Bütün dizinin referansa göre çaðrýlarak geçmesinin "
          "etkileri:\n\nOrijinal dizinin "
          "deðerleri:\n");

   for (i = 0; i < DIZI_BOYUTU; i++) 
      printf("%3d", dizi[i]);

   printf("\n");
   dizi_ayarla(dizi, DIZI_BOYUTU);  /* Referansa göre çaðrýlarak geçti */
   printf("Ayarlanan dizinin deðerleri:\n");

   for (i = 0; i < DIZI_BOYUTU; i++)
      printf("%3d", dizi[i]);

   printf("\n\n\nDizi elemanýnýn deðere göre çaðrýlarak "
          "geçmesinin etkileri:\n\na[3] deðeri %d\n", dizi[3]);
   eleman_ayarla(dizi[3]);
   printf("dizi[3] deðeri %d\n", dizi[3]);
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
   printf("eleman_ayarla fonksiyonunda ki deðer %d\n", eleman *= 2);
}

