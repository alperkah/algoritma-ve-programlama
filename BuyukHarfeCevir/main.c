#include <stdio.h>
#include <ctype.h>
#include <locale.h>

void buyukHarfeCevir(char *);

int main()
{
   setlocale(LC_ALL,"Turkish");
   char string[] = "karakterler ve $32.98 ldksjflksj lsjdf sdf ";

   printf("�evrilmeden �nceki string: %s", string);
   buyukHarfeCevir(string);
   printf("\n�evrildikten sonraki string: %s\n", string);

   return 0;
}

void buyukHarfeCevir(char *sPtr)
{
   while (*sPtr != '\0') {
       if (islower(*sPtr))
           *sPtr = toupper(*sPtr); // K���k harfi b�y�k harfe �evir

       ++sPtr; // Bir sonraki karaktere ge�
   }
}
