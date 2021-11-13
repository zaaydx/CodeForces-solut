#include<iostream>
using namespace std;

int removenumber0(int n)
{
    int temp, result = 0, k = 1;
    while(n)
    {
        temp = n % 10;
        if(temp)
        {
            result += temp * k;
            k *= 10;
        }
        n /= 10;
    }
    return result;
}

int main()
{
    int a, b, somme;
    cin >> a >> b;
    somme = a + b;
    if(removenumber0(a) + removenumber0(b) == removenumber0(somme))
    {
        cout <<"YES" << endl;
    }
    else
        cout << "NO" << endl;
}