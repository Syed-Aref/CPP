#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;

#define mpr make_pair
#define pbk push_back
#define psh push
#define fir first
#define sec second
#define line "\n"

///For ordered set of integers
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;


typedef tree<int , null_type , less<int> , rb_tree_tag , tree_order_statistics_node_update> ordered_set;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ordered_set p;

    p.insert(22);
    p.insert(1);
    p.insert(20);
    p.insert(22);

    /// No duplicate elements
    cout << p.size() << endl;

    cout << "========================================" << endl;

    /// find_by_order(i): i-th element in the set(logn).
    for(int i = 0;i<p.size();i++){
        cout << *( p.find_by_order(i) ) << endl;
    }

    cout << "========================================" << endl;

    /// order_of_key(x) : Number of items strictly smaller than x(logn).
    cout << p.order_of_key(22) << endl;
    cout << p.order_of_key(23) << endl;

    cout << "========================================" << endl;

    /// Clearing entire list
    p.clear();
    cout << p.size() << endl;

    return 0;
}
