#include <bits/stdc++.h> 

using namespace std; 

int main()
{
    int n; 
    int sum = 0; 
    int result = 0; 
    int result_val = 0; 
    vector<int> coins; 

    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        int val; 
        cin >> val; 
        coins.push_back(val);
        sum += val; 
    }

    sort(coins.begin(), coins.end(), greater <>());

    for (int i = 0; i < n; ++i)
    {
        result++; 
        result_val += coins.at(i); 

        if (result_val > (sum / 2))
        {
            cout << result; 
            return 0; 
        }
    }

    return 0;
}