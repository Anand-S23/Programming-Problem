#include <bits/stdc++.h> 

using namespace std; 

int main() 
{
    int n; 
    int result = 0; 

    cin >> n; 
    vector<int> stewards; 

    for (int i = 0; i < n; ++i)
    {
        int s; 
        cin >> s;
        stewards.push_back(s); 
    }

    sort(stewards.begin(), stewards.end());

    for (int i = 0; i < n; ++i)
    {
        if (i != 0 && i != n-1) 
        {
            //cout << stewards.at(i - 1) << " " << stewards.at(i) << " " << stewards.at(i + 1) << "\n";
            if (stewards.at(0) < stewards.at(i) && stewards.at(n - 1) > stewards.at(i))
            {
                result++; 
            }
        }
    }

    cout << result; 
    return 0; 
}