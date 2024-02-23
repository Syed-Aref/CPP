#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;

#define mpr make_pair
#define pbk push_back
#define psh push
#define fir first
#define sec second
#define line "\n"

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    bitset<10> bs;

    for(int i = 0;i<bs.size();i++) {
        cout << "#"<< i << ": "<< bs[i] << endl;
    }

    cout << "-------------------" << endl;

    bs[2] = bs[3] = bs[9] = 1;
    for(int i = 0;i<bs.size();i++) {
        cout << "#"<< i << ": "<< bs[i] << endl;
    }

    return 0;
}
