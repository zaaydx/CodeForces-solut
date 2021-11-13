#include <iostream>
using namespace std;

int main()
{
    long long int n, a, b;
    cin >> n;
    while (n --)
    {
        cin >> a >> b;
        if(b != 1)
			cout << "YES\n" << a * b << " " << a << " " << (a * b) + a << endl;
        else
        	cout << "NO\n";
	}
	return (0);
}
