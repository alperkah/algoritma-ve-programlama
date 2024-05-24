/* �ekil 11.3: fig11_03.c
   S�ral� bir dosya yaratmak */
#include <stdio.h>
#include <locale.h>

int main( )
{	 
   setlocale(LC_ALL, "Turkish");
   int hesap;
   char isim[30];
   double bakiye;
   FILE *cfPtr;   /* cfPtr = musteri.dat dosya g�stericisi */

   if((cfPtr = fopen("musteri.txt", "a+")) == NULL)
      printf( "Dosya a��lamad�\n" );
   else { 
      printf( "Hesap Numaras�n�, ismi ve bakiyeyi giriniz.\n" );
      printf( "EOF girerek veri giri�ini sonland�r�n.\n" );
      printf( "? " );

      while ( scanf( "%d%s%lf", &hesap, isim, &bakiye) == 3 ) { 
         fprintf( cfPtr, "%d %s %.2f\n", hesap, isim, bakiye );
         printf( "? " );
      }
      
      fclose( cfPtr );
   }

   return 0;
}

