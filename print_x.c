int print_x(long n, int base)
{
	int div_count = 0;
	/*Here, this variable is declared to hold a portion*/
	/*of division that will occur if the figure is > the base*/
	/*just like 18 > 16 as the base so 1 will be saved in div_count*/
	/*as 18 divided by 16 is 1 then we have remainder*/
	char *converter;

	converter = "0123456789abcdef";

	if (n < 0)
	{
		write(1, "-", 1);
		return print_x(-n, base) + 1;
	}

	else if (n < base)
	{
		return print_x(converter[n]);
	}

	else
	{
		div_count = print_x((n / base), base);
		return (div_count + print_x((n % base), base));
	}
}
