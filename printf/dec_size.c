int	dec_size(args(va_list, long long int))
{
	int	cur;
	long long int	tmp;

	cur = 1;
	tmp = args;
	while (tmp > 10 || tmp < -10)
	{
		tmp /= 10;
		cur++;
	}
	return (cur);
}
