#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m; 
    cin >> n >> m; 

    int puzzles[m]; 

    for (int i = 0; i < m; ++i) 
    {
        cin >> puzzles[i];
    }

    for (int i = 0; i < m; ++i) 
    {
        int smallest = i; 

        for (int j = i; j < m; ++j) 
        {
            if (puzzles[j] < puzzles[smallest])
            {
                smallest = j;
            }
        }

        int temp = puzzles[i];
        puzzles[i] = puzzles[smallest];
        puzzles[smallest] = temp;
    }

    if (n < m) 
    {
        int smallest = puzzles[m-1] - puzzles[0];

        for (int i = 0; i < m - n + 1; ++i) 
        {
            int current_diff = puzzles[i+n-1] - puzzles[i];

            if (current_diff < smallest) 
            {
                smallest = current_diff;
            }
        }

        cout << smallest; 
    }
    else 
    {
        cout << puzzles[m-1] - puzzles[0];
    }

    return 0; 
}
