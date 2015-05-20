#include "quicksort.h"
#include <iostream>

using namespace std;

int main()
{
    cout << " - Testing median_of_three - " << endl;
    int a = 1;
    int b = 2;
    int c = 3;
    median_of_three(a, b, c);
    cout << a << ' ' << b << ' ' << c << endl;
    
    a = 3;
    b = 2;
    c = 1;
    median_of_three(a, b, c);
    cout << a << ' ' << b << ' ' << c << endl;
    
    a = 1;
    b = 3;
    c = 2;
    median_of_three(a, b, c);
    cout << a << ' ' << b << ' ' << c << endl;
    
    a = 2;
    b = 1;
    c = 3;
    median_of_three(a, b, c);
    cout << a << ' ' << b << ' ' << c << endl;
    
    a = 3;
    b = 1;
    c = 2;
    median_of_three(a, b, c);
    cout << a << ' ' << b << ' ' << c << endl;
    
    cout << " - Testing partition - " << endl;
    
    return 0;
}