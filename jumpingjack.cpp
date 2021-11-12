#include <iostream>
using namespace std;

int main()
{
	long long x;
	long long n;

	cin >> x;
	x = x < 0? -x : x;
	n = 0;
	while (1)
	{
		int result = n * (n + 1) / 2;
		if (result == x)
			break;
		else if (result > x)
		{
			if ((result - x) % 2 == 0)
				break;
		}
		n++;
	}
	cout << n << endl;

}
