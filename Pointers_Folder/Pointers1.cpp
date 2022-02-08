#include <iostream>
using namespace std;
int main()
{
    /// BASIC:
    int a = 34;
    int *pA = &a;    //int* pA = &a; is same 

    cout << "Value : " << a << " Memory : " << pA<<"\n";
    ///Value : 34 Memory : 0135FAEC
    
    double d = 69.69;
    double *pD = &d;
    cout << "Value : " << d << " Memory : " << pD << "\n";
    ///Value : 69.69 Memory : 0135FAD0
    
    //De-referencing
    cout << "a = "<<*pA<<"\n";
    ///a = 34
    cout << "d = " << *pD << "\n";
    ///d = 69.69

}






    
    
    
