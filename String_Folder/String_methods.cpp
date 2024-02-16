#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;

#define mpr make_pair
#define pbk push_back
#define psh push
#define fir first
#define sec second
#define line_ "\n"

/// string breaking
vector<string> splitString(string str,char breaker) {
    vector<string> ret;
    string s = "";
    for (auto x : str) {
        if (x == breaker) {
            if(s.length() > 0)ret.push_back(s);
            s = "";
        }
        else {
            s = s + x;
        }
    }
    
    if(s.length() > 0)ret.push_back(s);

    return ret;
}

/// string to int
int stringToInt(string sn) {
    stringstream ss(sn);
    int x = 0;
    ss >> x;
    return x;
}

/// int to string
string intToString(int a) {
    stringstream ss;
    ss << a;
    string str = ss.str();
    return str;
}

/// char to string
string charToString(char c) {
    string s;
    stringstream ss;
    ss << c;
    ss >> s;
    return s;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
