#include <bits/stdc++.h>

using namespace std;

// PROBLEM NAME: CAPITAL BAAZI

char upper(char c)
{
    return c - 'a' + 'A';
}

int main()
{

    while(true){
        string s;
        cin >> s;
        if(s.size() == 0){
            break;
        }

        for(int i = 0; i < s.size() ; ++i)
        {
            s[i] = upper(s[i]);
        }

        cout << s << endl;
    }

    




}