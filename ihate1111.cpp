#include <iostream>

using namespace std;

struct Solution
{
	void solut()
	{
		long long x;

		cin >> x;
		for (int i = 0; i < 11; i++)
		{
			if (i * 111 > x)
				break;
			if ((x - 111 * i) % 11 == 0)
			{
				cout << "YES"<< endl;
				return;
			}
		}
		cout << "NO" << endl;
	}
};

int main()
{
	Solution solution = Solution();

	int t;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		solution.solut();
	}
	return (0);
}
