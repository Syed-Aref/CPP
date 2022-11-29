#include <bits/stdc++.h>
using namespace std;

int main()
{

    /**Max priority queue**/
    priority_queue<int> q;

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
