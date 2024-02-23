#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;

#define mpr make_pair
#define pbk push_back
#define psh push
#define fir first
#define sec second
#define line "\n"

void f1(int x) {
    cout << "Memory address of x = " << &x << endl;
    x = x + 2;
}

void f2(int* x) {
    cout << "Memory address of x = " << x << endl;
    *x = *x + 4;
}

void f3(int& x) {
    cout << "Memory address of x = " << &x << endl;
    x = x + 8;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ///Pointer: memory address of a variable
    ///Pointer referencing: assigning memory address to a pointer variable
    int a = 34;
    int *pA = &a;
    cout << "Value : " << a << endl;
    cout << "Memory : " << pA << endl;

    double d = 69.69;
    double *pD = &d;
    cout << "Value : " << d << endl;
    cout << "Memory : " << pD << endl;


    ///Pointer de-referencing: extracting value from memory address
    cout << "a = "<<*pA << endl;
    cout << "d = " << *pD << endl;

    cout << "========================================================================================" << endl;

    ///Reference: a variable(new) that refers to another existing variable.
    ///So, new variable will refer to the same object that existing variable refers.
    ///Both variables will have same memory address.
    string str1 = "Wew";
    string& str2 = str1;
    cout << str1 << endl;
    cout << str2 << endl;

    str1 = "eqeq";
    cout << str1 << endl;
    cout << str2 << endl;

    str1 = "whfhiihfiw";
    cout << str1 << endl;
    cout << str2 << endl;

    cout << "========================================================================================" << endl;

    ///Passing copy of the value of a variable as a parameter(pass by value)
    int a1 = 10;
    cout << "Memory address of a1 = " << &a1 << endl;
    cout << "a1 = " << a1 << endl;
    f1(a);
    cout << "a1 = " << a1 << endl;

    cout << "========================================================================================" << endl;

    ///Passing memory address of a variable as a paramter
    int a2 = 10;
    cout << "Memory address of a2 = " << &a2 << endl;
    cout << "a2 = " << a2 << endl;
    f2(&a2);
    cout << "a2 = " << a2 << endl;

    cout << "========================================================================================" << endl;

    ///Passing reference of a variable as a parameter(pass by reference)
    int a3 = 10;
    cout << "Memory address of a3 = " << &a3 << endl;
    cout << "a3 = " << a3 << endl;
    f3(a3);
    cout << "a3 = " << a3 << endl;

    return 0;
}
