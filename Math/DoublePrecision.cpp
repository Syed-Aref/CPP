#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;

#define mpr make_pair
#define pbk push_back
#define psh push
#define fir first
#define sec second
#define line "\n"

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    double out = (1.0*2)/(1.0*4);
    cout << fixed;
    cout << setprecision(12) << out << endl;
    /// Output : 0.500000000000 

    /// Precision without rounding:
    out = 16.27777;
    out = floor(out*10000) / 10000.0;
    cout << out << endl; 
    /// Output : 16.2777
}
