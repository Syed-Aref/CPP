#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;

#define mpr make_pair
#define pbk push_back
#define psh push
#define fir first
#define sec second
#define line "\n"

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    fstream myFile;
    myFile.open("input.txt",ios::in);
    if(myFile.is_open()){
        string line1;
        cout << "File opened" << endl;
        cout << "==========================================" << endl;
        while( getline(myFile,line1) ){
            cout << line1 << endl;
        }
        cout << "==========================================" << endl;
        cout << "File closed" << endl;
    }
    else{
        cout << "File failed to open" << endl;
        return 0;
    }
}
