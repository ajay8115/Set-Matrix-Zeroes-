// CODE BY :- AJAY PAL IIT (BHU) VARANASI
#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define kk '\n'
using namespace std;

class Solution
{
public:
    void setZeroes(vector<vector<int>> &a)
    {
        int n = a.size();
        int m = a[0].size();

        vector<int> x;
        vector<int> y;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (a[i][j] == 0)
                {
                    x.push_back(i); // store the xth index whose value is zero
                    y.push_back(j); // store the yth index whose value is zero
                }
            }
        }

        x.erase(unique(x.begin(), x.end()), x.end()); // remove duplicates
        y.erase(unique(y.begin(), y.end()), y.end());
        

        // convert all the row to zero
        for (int k = 0; k < x.size(); k++)
        {
            for (int j = 0; j < m; j++)
            {
                a[x[k]][j] = 0;
            }
        }

        // convert all the column to zero
        for (int k = 0; k < y.size(); k++)
        {
            for (int i = 0; i < n; i++)
            {
                a[i][y[k]] = 0;
            }
        }
    }
};