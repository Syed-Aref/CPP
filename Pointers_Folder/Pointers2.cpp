#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;

#define mpr make_pair
#define pbk push_back
#define psh push
#define fir first
#define sec second
#define line "\n"

void f1(int *p) {
    *p = *p + 2;
}

void f2(int &p) {
    p = p + 2;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int x = 10;
    cout << x << endl;
    //10

    /// f1(x); --> Wrong
    f1(&x);
    cout << x << endl;
    //12

    f2(x);
    /// f2(&x); --> Wrong
    cout << x <<endl;
  //14

}
