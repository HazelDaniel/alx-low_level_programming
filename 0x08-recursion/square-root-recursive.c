#include <stdio.h>

int square_root_bin_search(int n, int start, int end);
int square_root_recursive (int n);

int main (void)
{
	int n1 = 50;
	int n2 = 400;
	int n3 = 81;
	int n4 = -1;

	printf("the root of n1 is : \t %d\n", square_root_recursive(n1));
	printf("the root of n2 is : \t %d\n", square_root_recursive(n2));
	printf("the root of n3 is : \t %d\n", square_root_recursive(n3));
	printf("the root of n4 is : \t %d\n", square_root_recursive(n4));

	return 0;
}

int square_root_recursive (int n)
{
	if (n < 0)
		return -1;
	if (n == 1 || n == 0)
		return n;
	return square_root_bin_search(n, 1, n/2);
}

int square_root_bin_search(int n, int start, int end)
{
	int mid, mid_square;
	int square_root;
	if (start > end)
		return -1;
	
	mid = (start + end) / 2;
	mid_square = mid * mid;

	if(mid_square == n)
	{
		square_root = mid;
	}
	else if (mid_square > n)
	{
		square_root = square_root_bin_search(n, start, mid - 1);
	}
	else
	{
		square_root = square_root_bin_search(n, mid + 1, end);
	}
	return square_root;
}
