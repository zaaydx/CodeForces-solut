#include <iostream>

using namespace std;
long long counter(long long x, const int m)
{
	if (x == 1)
		return (1);
	if (x == 2)
		return (2);
	if (x ==3)
		return (4);
	return (counter(x - 1, m) + counter(x - 2, m) + counter(x - 3, m)) % m;

}
int main()
{
	const int m = 1e9 + 7;

    long long n;
    cin >> n;
	long long xx;
	xx = counter (n, m);
   	cout << xx << endl;
}
