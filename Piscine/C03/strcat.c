#include <string.h>
#include <stdio.h>

int  main()
{
char dest[] = "122";
char src[] = "164";
char	*a;
//int 	n = 2;

a = strcat(dest, src);
printf("%s", a);
}


