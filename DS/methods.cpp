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
    ///Lower bound:
    auto vector_lb_it = lower_bound(v.begin(),v.end(),44); ///iterator
    ///O(log(N))

    ///Upper bound:
    auto vector_ub_it = upper_bound(v.begin(),v.end(),44); ///iterator
    ///O(log(N))

    ///Clearing:
    v.clear(); ///void
    ///O(1)



    /*** set ***/
    ///Inerting:
    s.insert(element); //void
    ///O(log(N)

    ///Lower bound:
    auto set_lb_it = s.lower_bound(element); ///iterartor
    ///O(log(N))

    ///Upper bound:
    auto set_ub_it = s.upper_bound(element); ///iterator
    ///O(log(N))

    ///Clearing:
    s.clear(); ///void
    ///O(1)

    ///Searching exsitence:
    s.count(element); ///int; 1 if present , else 0
    ///O(log(N))

    ///Finding:
    s.find(element); ///iterator
    ///O(log(N))

    ///Erasing element:
    s.erase(any_value); ///void
    ///[any value(int,char or others based on the set , that may present or not present in that array) can be given in parameter]
    ///O(log(N)) ?

    /*** map ***/
    ///Inerting:
    ///1)
    m.insert( make_pair(int_key,string_value) );///void
    ///O(log(N)
    ///2)
    m[key] = value;///void
    ///O(log(N)


    ///Lower bound:
    auto map_lb_it = m.lower_bound(key); ///iterartor(*iterator = pair)
    ///O(log(N))

    ///Upper bound:
    auto map_ub_it = m.upper_bound(key); ///iterator
    ///O(log(N))

    ///Clearing:
    m.clear(); ///void
    ///O(1)

    ///Searching exsitence:
    m.count(key); ///int; 1 if present , else 0
    ///O(log(N))

    ///Findig:
    m.find(key); ///iterator
    ///O(log(N))


    /// ============================================================================================================ ///

    /**
    Also,
    /// Vector
    back(): last element // O(1)
    front(): last element // O(1)
    pop_back(): void(removes last elem) // O(1)
    push_back(element): void(inserts at the end of vector) // O(1)


    /// List
    Same methods in vector,in addition
    pop_front( ) : void(removes first elem) // O(1)

    /// Stack
    push(element): same as vector
    pop(): returns last element and removes as well // O(1)
    top(): returns last element // O(1)
    empty(): bool(checks if empty) ///O(1).
    size(): returns the size of stack ///O(1).

    /// Queue
    push(element): inserts a new element at the last
    pop(): removes front element
    front() : returns front element
    back(): returns last element
    empty(): bool(checks if empty)
    size(): returns the size of queue


    /// Priority Queue
    push(element): inserts a new element /// O(logN)
    pop(): removes biggest element /// O(logN)
    top(): returns biggest element // O(1)
    empty(): bool(checks if empty) ///O(1).
    size(): returns the size of queue ///O(1).
    //Note: Priority Queue in cpp is by default max priority queue
    //Min priority queue: priority_queue<int , vector<int> , greater<int> > pq2;


    /// deque
    void : push_back(element) , push_front(element) , pop_back() , pop_front()
    // O(1)
    back() : returns last element
    // O(1)
    front() : returns front element
    // O(1)
    size( ): returns the size of deque
    // O(1).
    **/
}
