#include <iostream>

using namespace std;

template<typename T, typename U> // if more that one type are used
void get_in(T &a, U b)
{
    cout << b;
    cin >> a;
}

int main()
{
    int x;
    get_in(x, "enter a number: ");
    string s;
    get_in(s, "what is your name? ");
    cout << s << x;
    
    return 0;
}