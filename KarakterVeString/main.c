#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Turkish");
    double d;
    d = atof("99.0");
    printf(" \"99.0\"stringi double' tipine dönüþtürüldü %.3f\n", d);
    return 0;
}
