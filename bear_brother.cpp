#include <bits/stdc++.h>

using namespace std; 

int main()
{
    int a, b;
    cin >> a >> b; 
    int time = 0;

    while (a <= b)
    {
        a *= 3; 
        b *= 2; 
        time++;
    }

    cout << time;
    return 0;
}