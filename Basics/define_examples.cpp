#include <bits/stdc++.h>
using namespace std;

/**
Macro: Piece of code in program that is replaced by value of the
macro. It is defined by #define directive/ pre-processor.


#define: Use to give an alternate name to a value.

Structure: #define macro_name macro_value
**/

///Naming integer/double values
#define ten 10
#define pi 3.1416

///Naming character/string values
#define a 'a'
#define imf "Iamfine"

///Naming reserved keywords
#define character char

///Naming data types
#define pii pair<int , int>

///Naming variables/methods of pre-defined STL data structure
#define fir first
#define cnt count

///Naming for loops
#define fr(n) for(int i = 0;i<n;i++)

///Naming return type functions
#define AREA(L,B) (L*B)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cout << ten << endl;
    cout << pi << endl;

    cout << a << endl;
    cout << imf << endl;

    character c = 'v';
    cout << c << endl;

    pii p = {4,5};

    cout << p.fir << " " << p.second << endl;
    set<int> s = {3,4,5};
    cout << s.cnt(4) << endl;

    fr(5){
        cout << i << endl;
    }

    cout << AREA(5,6) << endl;
}
