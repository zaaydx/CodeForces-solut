#include <iostream>
#include <string>
using namespace std;

int main()
{
	int x = 1E5;
	string a;
	long long int p[x];
	int q;
	int count = 0;
 
	cin >> a>> q;
	for (int i = 1; i < a.size(); i++)
	{
		if(a[i] == a[i - 1])
			count++;
		p[i] = count;
	}
 
	while (q--)
	{
		int s;
		int f;
		cin >> s>> f;
		long long sum = p[f - 1] - p[s - 1];
		cout << sum<< endl;
	}
}
