#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
int main()
{
	long long  num;
	while (scanf("%lld", &num) != EOF)
 	{
	 	int t = num;
		int len = (int)log10(t);
		for (int i = 0; i < len; i++)
		{
			t /= 10;
		}
		t++;
		for (int i = 0; i < len; i++)
		{
			t *= 10;
		}
		cout << t  - num << endl;
	}
    return 0;
}
