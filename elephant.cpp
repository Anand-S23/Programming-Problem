#include <bits/stdc++.h> 

using namespace std; 

int main()
{
    int n; 
    int total = 0; 

    cin >> n; 

    while (n != 0)
    {
        if (n >= 5)
        {
            n -= 5;
            total++;
        }
        else if (n >= 4)
        {
            n -= 4; 
            total++;
        }
        else if (n >= 3)
        {
            n -= 3;
            total++; 
        }
        else if (n >= 2)
        {
            n -= 2; 
            total++;
        }
        else if (n >= 1)
        {
            n -= 1; 
            total++;
        }
    }

    cout << total;
    return 0; 
}