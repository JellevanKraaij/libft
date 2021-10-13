double	ft_pow(double x, double y)
{
	double	ret;

	ret = 1;
	while (y > 0)
	{
		ret *= x;
		y--;
	}
	while (y < 0)
	{
		ret /= x;
		y++;
	}
	return (ret);
}
