void	letter1(char c)
{
	if (c >= 97 && c <= 122)
	{
		c = c - 32;
	}
	else if (c >= 65 && c <= 90)
	{
		c += 32;
	}
	else
	{
		c = "0";
	}
	put_char(c);
}  
