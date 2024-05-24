/* Þekil 11.7: fig11_07.c
Sýralý eriþimli bir dosyadan okuma ve dosyaya yazma yapmak.*/

#include <stdio.h>

int main( )
{ 
   int hesap;
   char ad[ 30 ];
   double bakiye;
   FILE *cfPtr;   /* cfPtr = musteri.dat dosya göstericisi */

   if ( ( cfPtr = fopen( "musteri.txt", "r" ) ) == NULL )
      printf( "Dosya açýlamadý\n" );
   else { 
      printf( "%-10s%-13s%s\n", "Hesap", "Ýsim", "Bakiye" );

      // fscanf'nin dönüþ deðerini kontrol edin
      while (1) {
         int result = fscanf(cfPtr, "%d%s%lf", &hesap, ad, &bakiye);
         
         if (result == 3) {
            printf( "%-10d%-13s%7.2f\n", hesap, ad, bakiye);
         } else if (result == EOF) {
            break; // Dosya sonuna ulaþýldý
         } else {
            printf("Veri okuma hatasý\n");
            break;
         }
      }

      fclose( cfPtr );
   }

   return 0;
}

