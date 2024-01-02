#include <iostream>
#include <vector>
using namespace std;
int main() {
    //initialize:
    vector< std::pair< int, string > > pv;
    
    //1.
    pv.push_back(make_pair(9, "Higuain"));
    
    //2.
    pv.push_back(std::pair< int, string >(10, "Messi"));
    
    //Traversing
    for ( auto p : pv)
    {
        cout << p.second<<" will wear "<< p.first<<"\n";
    }
}

/**
Output:
Higuain will wear 9
Messi will wear 10
**/
