#include <bits/stdc++.h> 

using namespace std; 

int main()
{
    int n; 
    cin >> n; 

    int cubes[n];

    for (int i = 0; i < n; ++i)
    {
        cin >> cubes[i];
    }

    for (int i = 0; i < n; ++i) 
    {
        int smallest = i;

        for (int j = i; j < n; ++j) 
        {
            if (cubes[j] < cubes[smallest])
            {
                smallest = j;
            }
        }

        int temp = cubes[i];
        cubes[i] = cubes[smallest];
        cubes[smallest] = temp;
    }

    for (int i = 0; i < n; ++i) 
    {
        cout << cubes[i] << " ";
    }

    return 0; 
}
