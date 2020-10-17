#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; 
    int current_count = 0; 
    int max = 0;
    int a, prev; 

    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        cin >> a; 

        if (i != 0)
        {
            if (a < prev)
            {
                current_count = 0; 
            }
            else
            {
                current_count++;
            }

            if (current_count > max)
            {
                max = current_count; 
            }
        }

        prev = a;
    }

    cout << ++max;

    return 0;
}