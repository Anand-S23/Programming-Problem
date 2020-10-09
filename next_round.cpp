#include <bits/stdc++.h> 

using namespace std; 

int main()
{
    int n, k; 
    cin >> n >> k;
    int arr[n];
    int sum = 0;

    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; ++i)
    {
        if(arr[i] >= arr[k-1] && arr[i] > 0)
        {
            sum++;
        }
        else
        {
            break;
        }
    }

    cout << sum;
    return 0;
}