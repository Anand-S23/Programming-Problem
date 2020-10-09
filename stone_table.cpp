#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    int n; 
    string s; 
    int result = 0; 

    cin >> n >> s;

    for (int i = 0; i < n - 1; ++i)
    {
        if (s.at(i) == s.at(i + 1)) { result++; }
    }

    cout << result;

    return 0; 
}