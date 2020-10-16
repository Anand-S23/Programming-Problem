#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; 
    int current_count = 0; 
    int max = 0;

    cin << n;

    for (int i = 0; i < n; ++i)
    {
        int a, prev; 
        cin << a; 

        if (i != 0)
        {
            if (a < prev)
            {
                if (current_count > max)
                {
                    max = current_count; 
                }

                current_cout = 0; 
            }
            else
            {
                current_count++;
            }
        }

        prev = a;
    }

    return 0;
}