#include <stdio.h>
#include <ctype.h>
#include <locale.h>

void buyukHarfeCevir(char *);

int main()
{
   setlocale(LC_ALL,"Turkish");
   char string[] = "karakterler ve $32.98 ldksjflksj lsjdf sdf ";

   printf("Çevrilmeden önceki string: %s", string);
   buyukHarfeCevir(string);
   printf("\nÇevrildikten sonraki string: %s\n", string);

   return 0;
}

void buyukHarfeCevir(char *sPtr)
{
   while (*sPtr != '\0') {
       if (islower(*sPtr))
           *sPtr = toupper(*sPtr); // Küçük harfi büyük harfe çevir

       ++sPtr; // Bir sonraki karaktere geç
   }
}
