#include <iostream>

using namespace std;

int main()
{
    int n, x, y, z, sumofx = 0, sumofy = 0, sumofz = 0;
    cin >> n;

    while (n--)
    {
        cin >> x >> y >> z;
        sumofx += x;
        sumofy += y;
        sumofz += z;
    }
    if (sumofx == 0 && sumofy == 0 && sumofz == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
