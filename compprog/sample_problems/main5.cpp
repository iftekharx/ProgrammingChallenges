#include <bits/stdc++.h>

using namespace std;

// PROBLEM: too lazy to name the question

int main()
{

    int a,b,c;

    cin >> a >> b >> c;
    int cth_num;

    for(int i = 2; c > 0; i++)
    {
        if(i % a == 0 || i % b == 0)
        {
            c--;
            cth_num = i;

        }
    }

    // LCM of a and b
    int lcm = 0;
    for(int i = 1; i <= a * b; ++i)
    {
        if(i % a == 0 && i % b == 0)
        {
            lcm = i;
            break;
        }
    }

    int step;
    if(cth_num % a == 0 && cth_num % b == 0)
    {
        step = lcm;
    }else if(cth_num % a == 0)
    {
        step = a;
    }else
    {
        step = b;
    }

    for(int i = cth_num; i >= 0; i = i - step)
    {
        cout << i << " ";
    }


    

    

}