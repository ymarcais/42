#include <string.h>
#include <stdio.h>

int  main()
{
char dest[] = "122ab";
char src[] = "123cde";
char	*a;
int 	n = 5;

a = strncat(dest, src, n);
printf("%s", a);
}


