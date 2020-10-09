#include <bits/stdc++.h> 

using namespace std; 

int main() 
{
    int n; 
    int result = 0;

    cin >> n; 

    for (int i = 0; i < n; ++i)
    {
        int p, q; 

        cin >> p >> q;

        result += (q - p >= 2) ? 1 : 0; 
    }

    cout << result; 
    return 0;
}