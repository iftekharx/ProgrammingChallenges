#include <bits/stdc++.h>

using namespace std;

// PROBLEM NAME: Jiyas Sequence



int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;
        long long product = 1;
        for(int i = 0; i < n; ++i)
        {
            int x;
            cin >> x;
            product = product * x;
        }

        int lsd = product % 10;
        if(lsd == 2 || lsd == 3 || lsd == 5)
        {
            cout << "YES" << endl;
        }else
        {
            cout << "NO" << endl;
            // 
        }
    }


}