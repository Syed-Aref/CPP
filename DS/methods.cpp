/// https://alyssaq.github.io/stl-complexities/
#include <bits/stdc++.h>
using namespace std;


int element = 44 , any_value = 23, key = 131, value = 1312, int_key = 28, any_key_value = 12;
string string_value = "name";
pair<int, string> pair_element = {1313,"fine"};


int main() {
    vector<int> v{11,12,34,67,89,45,23,12,45,78};
    /**
    Other ways to initialize:
    1) vector<int> v;
    2) vector<int> v(10): /// (Now vector v will be of 10 length(All 10 slots) initialized by zero)
    Time complexity to initialize a vector with n slots/elements: O(n)
    **/

    set<int> s{11,12,134,156,190};
    /**
    Other ways to initialize:
    set<int> s;
    Time complexity to initialize a set with n elements: O(n*log(n))
    **/

    map<int, string> m = { {1, "cat"}, {12, "dog"}, {4, "34"}, {7, "you"}, {15,"we"}, make_pair(11,"adjective") };
    /**
    Other ways to initialize:
    map<int, string> m;
    Time complexity to initialize a set with n elements: O(n*log(n))
    **/

    /*** vector ***/
    ///Random access(element, O(1))
    cout << v[4] << endl;
    
    ///First element(element, O(1))
    cout << v.front() << endl;

    ///Last element(element, O(1))
    cout << v.back() << endl;
    
    ///Adding element in the end(void, O(1))
    v.push_back(22);
    for(auto ele : v) cout << ele << " ";
    cout << endl;
    
    ///Removing last element(void, O(1))
    v.pop_back();
    for(auto ele : v) cout << ele << " ";
    cout << endl;

    ///Sorting(void, O(N*LOG(N)))
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

    ///Clearing(void, O(N))
    v.clear();


    /*** set ***/
    ///Adding element(void, O(LOG(N)))
    s.insert(element);
    
    ///Searching exsitence(void, O(log(N)))
    s.count(element); ///int; 1 if present , else 0
    
    ///Finding element(iterator, O(log(N)))
    auto it = s.find(element);
    if(it == s.end()) cout << "No element" << endl;
    else cout << *it << endl;
    
    ///Lower bound(iterator, LOG(N))
    auto set_lb_it = s.lower_bound(element);
    if(set_lb_it != s.end()) cout << "*set_lb_it = " << *set_lb_it << endl;

    ///Upper bound(iterator, LOG(N))
    auto set_ub_it = s.upper_bound(element);
    if(set_ub_it != s.end()) cout << "*set_ub_it = " << *set_ub_it << endl;

    ///Erasing element(void, O(log(N)))
    s.erase(any_value);
    ///[any value(int,char or others based on the set) , that may present or not present in that array) can be given in parameter]

    ///Clearing(void, O(N))
    s.clear();

    /*** map ***/
    ///Inserting((void, O(log(N)))
    m.insert( make_pair(int_key,string_value) );
    
    ///Mapping((void, O(log(N)))
    m[key] = string_value;

    ///Searching exsitence(void, O(log(N)))
    m.count(key);

    ///Findig(iterator, O(log(N)))
    m.find(key);
    
    ///Erasing element(void, O(log(N)))
    m.erase(any_key_value);
    ///[any key value(int,char or others based on the set) , that may present or not present in that map) can be given in parameter]
    cout << "======================" << endl;
    for(auto p : m) cout << "(" << p.first << ", " << p.second << ")" << endl;
    
    ///Lower bound(iterator, LOG(N))
    auto map_lb_it = m.lower_bound(key);
    if(map_lb_it!=m.end()) cout << "(" << (*map_lb_it).first << " , " << (*map_lb_it).second << ")" << endl;

    ///Upper bound(iterator, LOG(N))
    auto map_ub_it = m.upper_bound(key);

    ///Clearing(void, O(N))
    m.clear();


    /// ============================================================================================================ ///

    /**List**/
    list<int> l = {1,44,1,3,10};
    for(auto i : l) cout << i << " ";
    cout << endl;
    
    ///First element(element, O(1))
    cout << l.front() << endl;
    
    ///Last element(element, O(1))
    cout << l.back() << endl;
    
    ///Adding element in the begining(void, O(1))
    l.push_front(element);
    for(auto i : l) cout << i << " ";
    cout << endl;
    
    ///Removing first element(void, O(1))
    l.pop_front();
    for(auto i : l) cout << i << " ";
    cout << endl;
    
    ///Adding element in the end(void, O(1))
    l.push_back(element);
    for(auto ele : l) cout << ele << " ";
    cout << endl;

    ///Removing last element(void, O(1))
    l.pop_back();
    for(auto ele : l) cout << ele << " ";
    cout << endl;
    
    /**Stack**/
    stack<int> stk;

    ///Adding element at the top(void, O(1))
    stk.push(21);
    stk.push(3);
    stk.push(4);
    stk.push(7);

    ///Size(int, O(1))
    while(stk.size()!=0){
        ///Top(latest) element(element, O(1))
        cout << stk.top() << " ";
        ///Removing top/latest last element(void, O(1))
        stk.pop();
    }
    cout << endl;

    /**Queue**/
    queue<int> q;

    ///Adding element at the end(void, O(1))
    q.push(10);
    q.push(20);
    q.push(40);
    q.push(36);

    ///First/oldest element(element, O(1))
    cout << q.front() << endl;

    ///Last/newest element(element, O(1))
    cout << q.back() << endl;

    ///Size(int, O(1))
    while(q.size()!=0){
        cout << q.front() << " ";
        ///Removing first element(void, O(1))
        q.pop();
    }
    cout << endl;

}
