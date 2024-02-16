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
    
    /**Min priority queue**/
    priority_queue<int , vector<int> , greater<int>> q;

    ///push(void, O(log(n)))
    q.push(10);
    q.push(20);
    q.push(40);
    q.push(36);
    q.push(36);
    ///Note: priority queue allows duplicate elements to be inserted

    ///maximum element(element, O(log(n)))
    cout << q.top() << endl;


    ///size(int, O(1))
    ///removing first element(void, O(log(n)))
    while(q.size()!=0){
        cout << q.top() << " ";
        q.pop();
    }
    cout << endl;
}
