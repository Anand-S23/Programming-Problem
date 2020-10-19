#include <bits/stdc++.h> 

using namespace std; 

int main()
{
    int n, k;
    int current = 0; 
    int result;
    cin >> n >> k; 

    for (int i = 1; i < n; i+=2)
    {
        if (++current == k)
        {
            result = i;
        }
    }

    for (int i = 2; i < n; i+=2)
    {
        if (++current == k)
        {
            result = i;
        }
    }

    cout << result; 

    return 0; 
}