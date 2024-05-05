#include <stdio.h>
#include <locale.h>

int main()
{
   setlocale(LC_ALL, "Turkish"); 
   int dortIslem;             // dortIslem bir tamsay� de�i�kenidir
   int *dortIslemPtr;         // dortIslemPtr bir tamsay� g�stericisidir

   dortIslem = 42;            // dortIslem de�i�kenine 42 de�eri atand�

   dortIslemPtr = &dortIslem; // dortIslemPtr de�i�kenine dortIslem'in adresi atand�

   printf("dortIslem de�i�keninin adresi: %p\n", &dortIslem);
   printf("dortIslemPtr de�i�keninin de�eri: %p\n", dortIslemPtr);

   printf("\ndortIslem de�i�keninin de�eri: %d\n", dortIslem);
   printf("dortIslemPtr g�sterdi�i de�er: %d\n", *dortIslemPtr);

   printf("\n* ve & operat�rleri birbirlerinin tersidir.\n");
   printf("&*dortIslemPtr = %p\n", &*dortIslemPtr);
   printf("*&dortIslem = %d\n", *&dortIslem);

   return 0;
}
