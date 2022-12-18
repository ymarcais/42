#include <string.h>
#include <stdio.h>

int main()
{
char s1[] = "1239";
char s2[] = "1237";
int a;
unsigned int n = 6;

a = strncmp(s1, s2, n);
printf("%d", a);
}


