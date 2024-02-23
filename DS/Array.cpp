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

    int n[] = {4,5,6,12};
    int size = *(&n + 1) - n; /// size = 4
    cout<< size << endl;;

    int arr1[4] = {4,6,1,2};
    cout << endl;
    cout << arr1[0] << endl;

    cout << endl;
    for(int i = 1;i<*(&arr1 + 1) - arr1;i++) cout << " " << arr1[i];
    cout << endl;

    int arr2[5] = {1,5,6};
    /// arr2[3] = arr2[4] = 0
    cout << endl;
    cout << arr2[0] << endl;

    cout << endl;
    for(int i = 1;i<*(&arr2 + 1) - arr2;i++) cout<<" "<<arr2[i];
    cout << endl;

    arr2[3] = 10;
    arr2[4] = 12;
    cout << endl;
    cout<<arr2[0];
    for(int i = 1;i<*(&arr2 + 1) - arr2;i++) cout<<" "<<arr2[i];
    cout << endl;

    /// Only Declare a new Array
    int newArr[10];

    /// Dynamic Array
    int* a = NULL;
    int length;
    cin >> length;
    a = new int[length];
    cout << endl;
    for (int i=1; i<length; i++) {
        cout<<" "<<a[i];
    }
    cout << endl;
    ///  all values of a[] is 0 //

    /// When done, free memory pointed to by a
    delete [] a;
    a = NULL;

    ///-->2D Array:
    /// int dynArr[row][col]
    int dynArr[5][3] = {
        /// Col:1(0)  Col:2(1)   Col:3(2)
        {       12,       19,        9}, /// Row no:1(0)
        {        2,       22,       -2}, /// Row no:2(1)
        {       56,       89,        0}, /// Row no:3(2)
        {       47,       89,       67}, /// Row no:4(3)
        {       10,       30,       50}  /// Row no:5(4)
    };

    return 0;

};



/// Declaring array outside main-method and inside main method assigns different value
#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;

#define mpr make_pair
#define pbk push_back
#define psh push
#define fir first
#define sec second
#define line "\n"

int arr1[20];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int arr2[20];

    for(int i = 0;i<20;i++) cout << arr1[i] << " ";
    cout << endl;
    /// 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0(20 zeros)

    for(int i = 0;i<20;i++) cout << arr2[i] << " ";
    cout << endl;
    /// 2008498972 7208668 2008180049 8 ... 4354272(random values)

    return 0;
}
