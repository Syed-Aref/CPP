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

    deque<int> deq;

    ///Inserting at the back(void, O(1) )
    deq.push_back(10);
    deq.push_back(2);
    deq.push_back(22);
    deq.push_back(16);

    ///accessing random element(element, O(1))
    cout << deq[0] << endl;
    cout << deq[1] << endl;
    cout << deq[3] << endl;

    ///size(int, O(1))
    ///accessing last element(element, O(1))
    ///removing last element(void, O(1))
    while(deq.size() != 0){
        cout << deq.back() << " ";
        deq.pop_back();
    }
    cout << endl;

    ///Inserting at the front( O(1) )
    deq.push_front(11);
    deq.push_front(33);
    deq.push_front(2);
    deq.push_front(65);

    ///accessing front element(element, O(1))
    ///removing front element(void, O(1))
    while(deq.size() != 0){
        cout << deq.front() << " ";
        deq.pop_front();
    }
    cout << endl;

    return 0;
}
