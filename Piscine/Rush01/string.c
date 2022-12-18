char	string(char *str, char *res)
{
	int i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= '0' && str[i] <= '9'))
			 res[i] = str[i];
		i++;
	}
	
	return(*res);
}

#include <stdio.h>

char	main(void)
{
	char	*res;	
	char	a[]= "1 23  45 dxdfhelloworld7";
	char	*b = string(a, res);
	printf("%s",b);
}
