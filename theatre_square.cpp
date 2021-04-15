#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n, m, a; 
    cin >> n >> m >> a;

    long long int min_n, min_m;
    if (n % a == 0)
    {
        min_n = n / a;
    }
    else
    {
        min_n = (n / a) + 1;
    }

    if (m % a == 0)
    {
        min_m = m / a;
    }
    else
    {
        min_m = (m / a) + 1;
    }

    cout << min_n * min_m;

    return 0;
}
