#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	string s;

	cin >> s;
	char n;
	cin >> n;
	for (int i = 0;i < s.size(); i++)
	{
		if (n == s[i])
		{
			cout << "NO" <<endl;
			return 0;
		}
	}
	cout << "YES"<<endl;
	return 0;
}
