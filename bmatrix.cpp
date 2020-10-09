#include <bits/stdc++.h>

using namespace std; 

int main()
{
    int x, y; 

    for (int i = 0; i < 5; ++i)
    {
        for (int j = 0; j < 5; ++j)
        {
            int n;
            cin >> n; 
            if (n == 1)
            {
                x = j; 
                y = i;
                break;
            }
        }
    }

    // 0 2 
    cout << abs(2-x) + abs(2-y); 
    return 0;
}