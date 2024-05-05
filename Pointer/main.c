#include <stdio.h>
#include <locale.h>

int main()
{
   setlocale(LC_ALL, "Turkish"); 
   int dortIslem;             // dortIslem bir tamsayý deðiþkenidir
   int *dortIslemPtr;         // dortIslemPtr bir tamsayý göstericisidir

   dortIslem = 42;            // dortIslem deðiþkenine 42 deðeri atandý

   dortIslemPtr = &dortIslem; // dortIslemPtr deðiþkenine dortIslem'in adresi atandý

   printf("dortIslem deðiþkeninin adresi: %p\n", &dortIslem);
   printf("dortIslemPtr deðiþkeninin deðeri: %p\n", dortIslemPtr);

   printf("\ndortIslem deðiþkeninin deðeri: %d\n", dortIslem);
   printf("dortIslemPtr gösterdiði deðer: %d\n", *dortIslemPtr);

   printf("\n* ve & operatörleri birbirlerinin tersidir.\n");
   printf("&*dortIslemPtr = %p\n", &*dortIslemPtr);
   printf("*&dortIslem = %d\n", *&dortIslem);

   return 0;
}
