#include <bits/stdc++.h>
using namespace std;

int main() {
  int n[] = {4,5,6,12};
  int size = *(&n + 1) - n; // size = 4 //
  cout<< size <<"\n";

  int arr1[4] = {4,6,1,2}; // not more than 4 elements
  cout<<"\n";
  cout<<arr1[0];
  for(int i = 1;i<*(&arr1 + 1) - arr1;i++)
    cout<<" "<<arr1[i];
  cout<<"\n";
  int arr2[5] = {1,5,6};
  //arr2[3]=arr2[4]=0
  cout<<"\n";
  cout<<arr2[0];
  for(int i = 1;i<*(&arr2 + 1) - arr2;i++)
    cout<<" "<<arr2[i];
  cout<<"\n";
  arr2[3] = 10;
  arr2[4] = 12;
  cout<<"\n";
  cout<<arr2[0];
  for(int i = 1;i<*(&arr2 + 1) - arr2;i++)
    cout<<" "<<arr2[i];
  cout<<"\n";
  //Only Declare a new Array
  int newArr[10];
  /// newArr = {1,2,3,4,5,6,7,8,9,10}; -->Impossible operation
  /*
  newArr[0] = 12;
  newArr[1] = 18;

  ...............
  ...............

  */

///Dynamic Array
int* a = NULL;   // Pointer to int, initialize to nothing.
int length;           // Size needed for array
cin >> length;        // Read in the size
a = new int[length];
cout<<a[0];
for (int i=1; i<length; i++) {
    cout<<" "<<a[i];
}
cout<<"\n";
//  all values of a[] is 0 //
delete [] a;  // When done, free memory pointed to by a.
a = NULL;


///-->2D Array:
//int dynArr[row][col]
int dynArr[5][3] = {
  //            COLUMNS:  Col:1(0)  Col:2(1)   Col:3(2)            ROWS:   //
                        {       12,       19,        9},          //Row no:1(0)
                        {        2,       22,       -2},          //Row no:2(1)
                        {       56,       89,        0},          //Row no:3(2)
                        {       47,       89,       67},          //Row no:4(3)
                        {       10,       30,       50}           //Row no:5(4)
                      };
}



/// Declaring array outside main-method and inside main method assigns different value

int arr1[20];

int main()
{
    int arr2[20];
    
    for(int i = 0;i<20;i++) cout << arr1[i] << " ";
    cout << endl;
    /// 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0(20 zeros)

    for(int i = 0;i<20;i++) cout << arr2[i] << " ";
    cout << endl;
    /// 2008498972 7208668 2008180049 8 ... 4354272(random values)
}
