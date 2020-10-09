#include <bits/stdc++.h> 

using namespace std; 

int main()
{
    int n; 
    int p, v, t;

    int solve = 0;

    cin >> n; 

    for (int i = 0; i < n; ++i) 
    {
        cin >> p >> v >> t;

        if (v && (p || t) ||
            p && (v || t) ||
            t && (p || v) )
        {
            solve += 1;
        }
    }

    cout << solve;
    return 0; 
}