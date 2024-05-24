#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

main() {
	setlocale(LC_ALL, "Turkish");
	
	char basilanTus;
	
	
	while(basilanTus != 27){
			basilanTus = getch();
			system("cls");
			printf("%c - %d", basilanTus, basilanTus);	
	}
}
