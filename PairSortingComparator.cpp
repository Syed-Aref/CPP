#include <bits/stdc++.h>
using namespace std;

bool sort_func2(pair<int,int> p1, pair<int,int> p2)
{
    if( p1.first!=p2.first )
        return p1.first<p2.first;
    else
        return p2.second < p2.second;

}

bool sort_func3(pair<int,int> p1, pair<int,int> p2)
{
    if( p1.first!=p2.first )
        return p1.first<p2.first;
    else
        return true;

}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<pair<int,int>> pairs;

    pairs.push_back( make_pair(3,76) );
    pairs.push_back( make_pair(2,67) );
    pairs.push_back( make_pair(1,68) );
    pairs.push_back( make_pair(4,81) );
    pairs.push_back( make_pair(4,89) );
    pairs.push_back( make_pair(3,67) );
    pairs.push_back( make_pair(4,81) );

    int sz = pairs.size();
    vector<pair<int,int>> pairs_alt(sz);
    for(int i = 0;i<sz;i++)
        pairs_alt[i] = pairs[i];

    sort(pairs.begin(),pairs.end());

    for(auto i : pairs)
        cout << i.first << " : " << i.second << endl;
    sort(pairs.begin(),pairs.end(),sort_func2);

    cout << "================" << endl;

    for(auto i : pairs)
        cout << i.first << " : " << i.second << endl;

    cout << "================" << endl;

    sort(pairs_alt.begin(),pairs_alt.end(),sort_func2);
    for(auto i : pairs_alt)
        cout << i.first << " : " << i.second << endl;


}
