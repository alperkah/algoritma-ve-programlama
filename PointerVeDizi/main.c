#include <stdio.h>
#include <locale.h>

int main()
{
   setlocale(LC_ALL, "Turkish");
   int notlar[] = {85, 92, 76, 88};
   int *notlarPtr = notlar;  // notlarPtr, notlar dizisini g�sterir

   int i, offset;

   printf("Dizi elemanlar�na eri�menin d�rt farkl� yolu:\n\n");

   printf("1. Dizi belirte�i y�ntemi:\n");
   for (i = 0; i < 4; i++)
       printf("notlar[%d] = %d\n", i, notlar[i]);

   printf("\n2. G�sterici/offset y�ntemi (g�sterici dizinin ismidir):\n");
   for (offset = 0; offset < 4; offset++)
       printf("*(notlar + %d) = %d\n", offset, *(notlar + offset));

   printf("\n3. G�sterici belirte� y�ntemi:\n");
   for (i = 0; i < 4; i++)
       printf("notlarPtr[%d] = %d\n", i, notlarPtr[i]);

   printf("\n4. G�sterici/offset y�ntemi:\n");
   for (offset = 0; offset < 4; offset++)
       printf("*(notlarPtr + %d) = %d\n", offset, *(notlarPtr + offset));

   return 0;
}
