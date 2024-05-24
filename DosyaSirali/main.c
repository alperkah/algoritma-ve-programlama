/* Þekil 11.3: fig11_03.c
   Sýralý bir dosya yaratmak */
#include <stdio.h>
#include <locale.h>

int main( )
{	 
   setlocale(LC_ALL, "Turkish");
   int hesap;
   char isim[30];
   double bakiye;
   FILE *cfPtr;   /* cfPtr = musteri.dat dosya göstericisi */

   if((cfPtr = fopen("musteri.txt", "a+")) == NULL)
      printf( "Dosya açýlamadý\n" );
   else { 
      printf( "Hesap Numarasýný, ismi ve bakiyeyi giriniz.\n" );
      printf( "EOF girerek veri giriþini sonlandýrýn.\n" );
      printf( "? " );

      while ( scanf( "%d%s%lf", &hesap, isim, &bakiye) == 3 ) { 
         fprintf( cfPtr, "%d %s %.2f\n", hesap, isim, bakiye );
         printf( "? " );
      }
      
      fclose( cfPtr );
   }

   return 0;
}

