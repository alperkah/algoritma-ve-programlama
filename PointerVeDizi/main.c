#include <stdio.h>
#include <locale.h>

int main()
{
   setlocale(LC_ALL, "Turkish");
   int notlar[] = {85, 92, 76, 88};
   int *notlarPtr = notlar;  // notlarPtr, notlar dizisini gösterir

   int i, offset;

   printf("Dizi elemanlarýna eriþmenin dört farklý yolu:\n\n");

   printf("1. Dizi belirteçi yöntemi:\n");
   for (i = 0; i < 4; i++)
       printf("notlar[%d] = %d\n", i, notlar[i]);

   printf("\n2. Gösterici/offset yöntemi (gösterici dizinin ismidir):\n");
   for (offset = 0; offset < 4; offset++)
       printf("*(notlar + %d) = %d\n", offset, *(notlar + offset));

   printf("\n3. Gösterici belirteç yöntemi:\n");
   for (i = 0; i < 4; i++)
       printf("notlarPtr[%d] = %d\n", i, notlarPtr[i]);

   printf("\n4. Gösterici/offset yöntemi:\n");
   for (offset = 0; offset < 4; offset++)
       printf("*(notlarPtr + %d) = %d\n", offset, *(notlarPtr + offset));

   return 0;
}
