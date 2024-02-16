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
    
    //initialize:
    vector< std::pair< int, string > > pv;
    
    //1.
    pv.push_back(make_pair(9, "Higuain"));
    
    //2.
    pv.push_back(std::pair< int, string >(10, "Messi"));
    
    //Traversing
    for ( auto p : pv) {
        cout << p.second<<" will wear "<< p.first<<"\n";
    }
}

/**
Output:
Higuain will wear 9
Messi will wear 10
**/
