#include <iostream>
#include <cmath>


using namespace std;

int main()
{
    // reversing a number

    int n ;
    
    cin >> n;
    int result = n;
    // arm strong number
    // if you cube all the digits then those cubes sum up to the number given
    // 1 5 3
    // 1 + 125 + 27 (cube) = 153

    int number = 0;

    while( n > 0){
        int lastdigit = n % 10;
        number = number + pow(lastdigit, 3);
        n = n / 10;
    }
    
    if(result == number){
        cout << "Armstrong number" << endl;
    }else{
        cout << "Not Armstrong number" << endl;
    }

    return 0;





}