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

    string s = "";
    string line;
    vector<string> vstr;

    /// Inputting lines until eof and string them in s
    while (getline(cin, line)) {
    	s = s + " " + line;
    	/// storing all inputed characters in s with an addition ' '
    	/// before every inputs

    	vstr.push_back(line);
    	///storing all line inputs in vstr

    }

    /// printing all line inputs
    cout << "All line inputs:" << endl;
    for(auto strv : vstr) cout << strv << endl;
    cout << "============================================" << endl;

    /// string s to char[] str
    char *str = new char[s.length()];
    int sz = s.length();
    for (int i = 0; i < sz; i++) {
        str[i] = s[i];
    }

    /// printing all single string elements
    cout << "All single elements" << endl;
    char* token = strtok(str, " ");
    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, " ");
    }
    cout << "============================================" << endl;

    return 0;
}
