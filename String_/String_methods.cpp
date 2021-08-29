#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;

#define mpr make_pair
#define pbk push_back
#define psh push
#define fir first
#define sec second
#define line_ "\n"



vector<string> stringBreaker(string& line,char& c) {


    vector <string> tokens;
    stringstream check(line);
    string intermediate;
    while(getline(check, intermediate, c))
    {
        tokens.push_back(intermediate);
    }
    return tokens;

}


int stringToInt(string sn) {
    stringstream ss(sn);
    int x = 0;
    ss >> x;
    return x;
}

string charToString(char c){
    string s;
    stringstream ss;
    ss << c;
    ss >> s;
    return s;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int on;
    cout << "press 0 to exit" << endl;
    cin >> on;
    while(on) {

        string s;
        getline(cin , s);
        char c = ' ';
        auto tokens = stringBreaker(s,c);
        for(auto i : tokens) {
            cout << i << endl;
        }
        cout << "press 0 to exit" << endl;
        cin >> on;
    }

    cout << "press 0 to exit" << endl;
    cin >> on;
    while(on){
        string sn;
        cin >> sn;
        auto x = stringToInt(sn);
        cout << x << endl;
        cout << x*10 << endl;
        cout << "press 0 to exit" << endl;
        cin >> on;
    }
}
