#include <bits/stdc++.h> 

using namespace std; 

int main()
{
    int n;
    int max = 0;
    int current = 0;

    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        int out, in; 
        cin >> out >> in;

        current -= out; 
        current += in; 

        if (current > max) { max = current; }
    }

    cout << max;
    return 0;
}