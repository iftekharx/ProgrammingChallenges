#include <bits/stdc++.h>

using namespace std;


int main()
{
    // arrays are like pointers in c++
    // *array will return a[0]
    // *(a+1) = a[1]


     // int *p
     // int **pp
    // **pp means integer pointer to pointer
    // int x = 4;
    // p = &x;
    // pp = &p; address of p starting mem addr will be stored in pp
    // *pp will print address of x
    // **pp will print value of x
    // these are called double pointers


    int x = 4;

    int *p_x = &x;

    cout << "Addr of x " << &x << endl;

    cout << "Val of p_x " << *p_x << endl;


    *p_x = 5;
    cout << "x " << x << endl;

    cout << p_x + 1 << endl;


    int **p_p_x = &p_x;

    cout << &p_p_x << endl;
    cout << *p_p_x << endl;
    cout << **p_p_x << endl;



    return 0;







}