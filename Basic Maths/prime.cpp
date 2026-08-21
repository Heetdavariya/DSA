#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n, c = 0;
    cout << "Enter the Number : ";
    cin >> n;

    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            c++;
            if (n / i != i)
            {
                c++;
            }
        }
    }
    if (c == 2)
        cout << "Inputted number is PRIME";
    else
        cout << "Inputted number is NOT PRIME";

    return 0;
}