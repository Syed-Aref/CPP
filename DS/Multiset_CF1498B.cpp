#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;

#define mpr make_pair
#define pbk push_back
#define psh push
#define fir first
#define sec second
#define line "\n"


struct multi_set{
    set<lli> st;
    map<lli, lli> cnt;
    int total = 0;

    void add(int key){
        st.insert(key);
        cnt[key]++;
        total++;
    }

    void remove_element(lli target){
        if( st.count(target) == 1 ) {
            cnt[target]--;
            total--;
            if( cnt[target] == 0 ) st.erase(target);
        }
    }

    set<lli>::iterator lowerbound(lli target){
        return st.lower_bound(target);
    }

    set<lli>::iterator upperbound(lli target){
        return st.upper_bound(target);
    }

    set<lli>::iterator begining_iterator(){
        return st.begin();
    }

    set<lli>::iterator ending_iterator(){
        return st.end();
    }

    void print(){
        for(auto ele : st){
            for(int i = 0;i<cnt[ele];i++) cout << ele << " ";
        }
        cout << endl;
    }

    int total_elements(){
        return total;
    }

    void clear_all(){
        st.clear();
        cnt.clear();
        total = 0;
    }

};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;

    multi_set ms;

    while(t-->0){
        int n;
        lli W, w;

        cin >> n >>W;
        ms.clear_all();
        for(int i = 0;i<n;i++){
                cin >> w;
                ms.add(w);
        }

        lli level = 1;
        lli available = 0;
        auto it = ms.lowerbound(0);
        while(ms.total_elements() != 0){
            available = W;
            while(1){
                if(ms.total_elements() == 0) break;
                it = ms.lowerbound(available);
                if(it == ms.ending_iterator()){
                    it--;
                }
                if(*it <= available){
                    available -= *it;
                    ///cout << *it << " at level: " << level << endl;
                    ms.remove_element(*it);
                }
                else if( it == ms.begining_iterator() ){
                    level++;
                    available = W;
                } else{
                    it--;
                    available -= *it;
                    ///cout << *it << " at level: " << level << endl;
                    ms.remove_element(*it);
                }
            }
        }

        cout << level << endl;
    }
}
