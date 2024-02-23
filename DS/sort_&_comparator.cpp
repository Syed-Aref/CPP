#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;

#define mpr make_pair
#define pbk push_back
#define psh push
#define fir first
#define sec second
#define line "\n"

bool sort_func1(int x, int y){ /// a1,a2
    return x > y; ///a1 > a2
}

bool sort_func2(int x, int y){ /// a1,a2
    return x < y; /// a1 < a2
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // Built-in sort function that sorts in non-decreasing order
    vector< int > v = { 23,67,56,89,67,34 };
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++) cout << v[i] << "\n";
    cout << "---------------------" << "\n";

    // Sort in non-increasing order using comparator
    vector< int > v1 = { 23,67,56,89,67,34 };
    sort(v1.begin(), v1.end(), sort_func1);
    for (int i = 0; i < v1.size(); i++) cout << v1[i] << "\n";
    cout << "---------------------" << "\n";

    // Sort in non-decreasing order using comparator
    vector< int > v2 = { 23,67,56,89,67,34 };
    sort(v2.begin(), v2.end(), sort_func2);
    for (int i = 0; i < v2.size(); i++)
        cout << v2[i] << "\n";
    cout << "---------------------" << "\n";

    /**
    Non-decreasing:
    func1(a1,a2) {
        returns a1 < a2;
    }

    Non-increasing:
    func2(a1,a2) {
        returns a1 > a2;
    }
    **/

    /// Built-in method for non-increasing ordered sort
    /// greater< any_accepted_data_type >()
    sort( v2.begin() , v2.end() , greater<int>() );

    return 0;
}

