#include <bits/stdc++.h>
using namespace std;

int main()
{

    ///Initialize a pair
    pair<int, int> p(10, 20);
    pair<char, int> ci = make_pair('a', 1);
    pair <int, int> p1 = { 90,70 };

    ///Printing
    cout << p1.first << " , " << p1.second << endl;

    /// Changing pair's first or second element or both
    p1.first = 34;
    cout << p1.first << " , " << p1.second << endl;

    p1.second = 100;
    cout << p1.first << " , " << p1.second << endl;

    p1 = {12,67};
    cout << p1.first << " , " << p1.second << endl;

    p1 = make_pair(20,20);
    cout << p1.first << " , " << p1.second << endl;

    ///pair follow lexical ordering when comparing
    p1 = make_pair(10,10);
   cout << (p1 < make_pair(11,8)) << " , " << (p1 == make_pair(11,8)) << " , " << (p1 > make_pair(11,8)) << endl;
   cout << (p1 < make_pair(10,10)) << " , " << (p1 == make_pair(10,10)) << " , " << (p1 > make_pair(10,10)) << endl;
   cout << (p1 < make_pair(7,10)) << " , " << (p1 == make_pair(7,10)) << " , " << (p1 > make_pair(7,10)) << endl;

}

