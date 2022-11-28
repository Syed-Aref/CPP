#include <bits/stdc++.h>
using namespace std;


int element = 44 , any_value = 23, key = 131, value = 1312, int_key = 28;
string string_value = "name";
pair<int, string> pair_element = {1313,"fine"};


int main() {
    vector<int> v{11,12,34,67,89,45,23,12,45,78};
    /**
    Other ways to initialize:
    1) vector<int> v;
    2) vector<int> v(10):
       /// Now vector v will be of 10 length(All 10 slots) initialized by zero
    **/

    set<int> s{11,12,134,156,190};
    /**
    Other ways to initialize:
    set<int> s;
    **/

    map<int, string> m;
    ///map<key,value>
    ///To insert <key,value> pair
    m[1] = "cat", m[12] = "dog", m[4] = "34", m[7] = "you", m[15] = "we", m[11] = "adjective"; ///m[key] = pair


    /*** vector ***/
    ///push_back(void, O(1))
    v.push_back(22);

    ///sort(void, O(N*LOG(N)))
    sort(v.begin() , v.end());
    for(auto ele : v) cout << ele << " ";
    cout << endl;

    ///Lower bound(iterator, LOG(N))
    auto vector_lb_it = lower_bound(v.begin(),v.end(),44);
    if(vector_lb_it != v.end()) cout << "*vector_lb_it = " << *vector_lb_it << endl;
    cout << "Lower bound index: " << vector_lb_it - v.begin() << endl;


    ///Upper bound(iterator, LOG(N))
    auto vector_ub_it = upper_bound(v.begin(),v.end(),44); ///iterator
    if(vector_ub_it != v.end()) cout << "*vector_ub_it = " << *vector_ub_it << endl;
    cout << "Upper bound index: " << vector_ub_it - v.begin() << endl;

    ///First element(element, O(1))
    cout << v.front() << endl;

    ///Last element(element, O(1))
    cout << v.back() << endl;

    ///Removing last element(void, O(1))
    v.pop_back();
    for(auto ele : v) cout << ele << " ";
    cout << endl;

    ///Clearing(void, O(1))
    v.clear();




    /*** set ***/
    ///Inerting(void, O(LOG(N)))
    s.insert(element);

    ///Lower bound(iterator, LOG(N))
    auto set_lb_it = s.lower_bound(element);
    if(set_lb_it != s.end()) cout << "*set_lb_it = " << *set_lb_it << endl;

    ///Upper bound(iterator, LOG(N))
    auto set_ub_it = s.upper_bound(element);
    if(set_ub_it != s.end()) cout << "*set_ub_it = " << *set_ub_it << endl;


    ///Searching exsitence(void, O(log(N)))
    s.count(element); ///int; 1 if present , else 0

    ///Finding(iterator, O(log(N)))
    s.find(element);

    ///Erasing element(void, O(log(N)))
    s.erase(any_value);
    ///[any value(int,char or others based on the set , that may present or not present in that array) can be given in parameter]

    ///Clearing(void, O(1))
    s.clear();

    /*** map ***/

    ///Inserting((void, O(log(N)))
    /**1)**/ m.insert( make_pair(int_key,string_value) );
    /**2)**/ m[key] = string_value;


    ///Lower bound(iterator, LOG(N))
    auto map_lb_it = m.lower_bound(key);
    if(map_lb_it!=m.end()) cout << "(" << (*map_lb_it).first << " , " << (*map_lb_it).second << ")" << endl;

    ///Upper bound(iterator, LOG(N))
    auto map_ub_it = m.upper_bound(key);

    ///Searching exsitence(void, O(log(N)))
    m.count(key);

    ///Findig(iterator, O(log(N)))
    m.find(key);

    ///Clearing(void, O(1))
    m.clear();


    /// ============================================================================================================ ///

    /**List**/
    list<int> l = {1,44,1,3,1};
    for(auto i : l) cout << i << " ";
    cout << endl;

    ///All methods are same as vector, with one additional method.
    ///Removing first element
    l.pop_front();
    for(auto i : l) cout << i << " ";
    cout << endl;

    /**Stack**/
    stack<int> stk;

    ///pushing(void, O(1))
    stk.push(21);
    stk.push(3);
    stk.push(4);
    stk.push(7);

    ///size(int, O(1))
    ///last element(element, O(1))
    ///removing last element(void, O(1))
    while(stk.size()!=0){
        cout << stk.top() << " ";
        stk.pop();
    }
    cout << endl;

    /**Queue**/
    queue<int> q;

    ///push(void, O(1))
    q.push(10);
    q.push(20);
    q.push(40);
    q.push(36);

    ///first element(element, O(1))
    cout << q.front() << endl;

    ///last element(element, O(1))
    cout << q.back() << endl;

    ///size(int, O(1))
    ///removing first element(void, O(1))
    while(q.size()!=0){
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

}
