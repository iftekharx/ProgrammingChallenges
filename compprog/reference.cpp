#include <bits/stdc++.h>
using namespace std;

// always declare array as global and
// size will be given just declare it 
// globally also
// for competitive programming

void increment(int &n)
{
    n++;
}

// arrays always pass by reference
void changeArr(int arr[])
{
    arr[0] = 10;
}

// 2d array must have second size given
void changeArr2d(int a[][20])
{
    a[0][0] = 10;
}
int main()
{
    int a = 3;

    increment(a);
    cout << a << endl;

    int b = 5;

    swap(b, a);

    cout << b << ' '  << a << endl;


    int arr[] = {1, 2, 3};

    changeArr(arr);
    cout << arr[0] << endl;


    
}