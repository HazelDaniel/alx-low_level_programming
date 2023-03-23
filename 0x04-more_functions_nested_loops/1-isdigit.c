/**
 * _isdigit - a function that checks for a digit (0 through 9).
 * @c: a character parameter read as int
 * Return: 1 if digit, otherwise 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
