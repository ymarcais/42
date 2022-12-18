#include <bsd/string.h>
#include <string.h>
#include <stdio.h>


int  main()
{
char dest[] = "Hello toto";
char  src[] = "toto";
unsigned int	i;
unsigned int	size = 2;

i = strlcat(dest, src, size);
printf("%u",i );
}


