#include <bits/stdc++.h>

using namespace std;

#define flip(bit) bit == '1' ? '0' : '1'

int main()
{
    int t; 
    cin >> t;

    for (int i = 0; i < t; ++i)
    {
        int n;
        string a, b;

        cin >> n >> a >> b;

        while (a != b)
        {
            int diff_pos = n;
            for (int j = n; j > 0; --j)
            {
                if (a[j] != b[j])
                {
                    break;
                }

                --diff_pos;
            }

            int one_count = 0, zero_count = 0;
            for (int j = 0; j < diff_pos; ++j)
            {
                if (a[j] == '1')
                {
                    ++one_count;
                }
                else
                {
                    ++zero_count;
                }
            }

            if (one_count != zero_count)
            {
                cout << "NO";
                break;
            }
            else
            {
                for (int j = 0; j < diff_pos; ++j)
                {
                    flip(a[j]);
                }
            }
        }

        if (a == b)
        {
            cout << "YES";
        }
    }

    return 0;
}
