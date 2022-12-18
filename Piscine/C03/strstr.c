#include <string.h>
#include <stdio.h>

int  main()
{
const char haystack[] = "Hello toto vas tu a la plage aujourdhui?";
const char needle[] = "toto";
char	*ret;

ret = strstr(haystack, needle);
printf("%s", ret);
}


