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
    cin.tie(0); cout.tie(0);

    /**
    Multi-set is a variation of set, where multiple elements of same value can exist(as opposed to set where only values exist in a set).
    Examle: Both {2,3,4} and {2,2,3,4} can be multi-set. But only {2,3,4} can be set, {2,2,3,4} can not.
    **/

    int n, key, target;
    cin>>n;

    map<int, int> multi_set;

    for(int i = 0; i<n; i++){
        cin>>key;
        multi_set[key]++;
    }

    for(auto p : multi_set){
        cout << p.first;
        for(int i = 1;i<p.second;i++) cout << ", " << p.first;
        cout << endl;
    }


    cout << "==========================" << endl;

    while (1) {
        cin >> target;

        if(multi_set.size() == 0) {
            cout << "Empty map" << endl;
            cout << "==========================" << endl;
            continue;
        }

        if( multi_set.count(target) == 1 ) {
            multi_set[target]--;
            if( multi_set[target] == 0 ) multi_set.erase(target);

            for(auto p : multi_set){
                cout << p.first;
                for(int i = 1;i<p.second;i++) cout << ", " << p.first;
                cout << endl;
            }
            cout << "==========================" << endl;
        }
        else {
                cout << target << " doesn't exist" << endl;
                cout << "==========================" << endl;
        }
    }

    return 0;
}
