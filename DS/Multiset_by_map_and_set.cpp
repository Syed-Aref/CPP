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

    set<int> st;
    map<int, int> cnt;

    for(int i = 0; i<n; i++){
        cin>>key;
        st.insert(key);
        cnt[key]++;
    }

    for(auto ele : st){
        cout << ele;
        for(int i = 1;i<cnt[ele];i++) cout << ", " << ele;
        cout << endl;
    }


    cout << "==========================" << endl;

    while (1) {
        cin >> target;

        if(st.size() == 0) {
            cout << "Empty map" << endl;
            cout << "==========================" << endl;
            continue;
        }

        if( st.count(target) == 1 ) {
            cnt[target]--;
            if( cnt[target] == 0 ) st.erase(target);

            for(auto ele : st){
                cout << ele;
                for(int i = 1;i<cnt[ele];i++) cout << ", " << ele;
                cout << endl;
            }
            cout << "==========================" << endl;
        }
        else {
                cout << target << " doesn't exist" << endl;
                cout << "==========================" << endl;
        }
    }

}
