#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;

#define mpr make_pair
#define pbk push_back
#define psh push
#define fir first
#define sec second
#define line "\n"

class General {
    public :
    void gen() {
        cout << "This is general" << endl;
    }

    void hi() {
        cout << "hi" << endl;
    }

    void bye() {
        cout << "bye" << endl;
    }
};

class General1 : public General {
    public :
    void gen1() {
        cout << "This is general1" << endl;
    }

    void hi() {
        cout << "hi.this is general1" << endl;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    General g;
    g.gen();
    g.hi();
    g.bye();

    General1 g1;
    g1.gen1();
    g1.hi();
    g1.bye();

    return 0;
}
/** **************************************
Output :
This is general
hi
bye
This is general1
hi.this is general1
bye
************************************** **/

/// ---------------------------------------------------
/// However
#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;

#define mpr make_pair
#define pbk push_back
#define psh push
#define fir first
#define sec second
#define line "\n"

class General {
    public :
    void gen() {
        cout << "This is general" << endl;
    }

    void hi() {
        cout << "hi" << endl;
    }

    void bye() {
        cout << "bye" << endl;
    }
};

class General1 : public General {
    public :
    void gen1() {
        cout << "This is general1" << endl;
    }

    void hi() {
        cout << "hi.this is general1" << endl;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<General*> g;
    g.push_back( new General() );
    g.push_back(new General1());
    g[0]->gen();
    g[0]->hi();
    g[0]->bye();

    /// g[1]->gen1(); -> Error
    g[1]->gen();
    g[1]->hi();
    g[1]->bye();

    return 0;

}
/** **************************************
Output :
This is general
hi
bye
This is general
hi
bye
************************************** **/

/// ---------------------------------------------------
/// To solve this we have polymorphism
/// Before that we should understand reference class
/**
    SEG : 3(From SEG : 1)
    General& and_g_1 = g;
    General& and_g_2 = g1;
    //General1& and_g1_1 = g; --> Error beacause general1 is the sub-class of super-class
    General1& and_g1_2 = g1;

    //NOTE:
    // (*) &super_class -->  super_class  : OK
    // (*) &super_class -->  sub_class    : OK
    // (*) &sub_class -->  super_class    : WRONG
    // (*) &sub_class -->  sub_class       : OK
**/

/// Polymorphism exemples :
/// Ex:1
#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;

#define mpr make_pair
#define pbk push_back
#define psh push
#define fir first
#define sec second
#define line "\n"

class Base {
public:
    string name;
    Base(string n) {
        name = n;
    }

    virtual void show() {
        cout << name << " In Base \n";
    }
};

class Derived : public Base {
public:
    Derived(string n) : Base(n) {

    }

    void show() {
        cout << name << " In Derived \n";
    }
};

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    Base* base = new Base("x");

    base->show(); //x In Base

    Base* dreived_from_base = new Derived("aref");
    dreived_from_base->show(); //aref In Derived

    return 0;
}

/// Ex 2 :
#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;

#define mpr make_pair
#define pbk push_back
#define psh push
#define fir first
#define sec second
#define line "\n"

class Name {
public:
    string nm; // string nm = "0";--> can be given value at the begining as well
    Name(string n) {
        nm = n;
    }

    Name() {
        nm = "null";
    }

    virtual void display() {
        cout << nm << endl;
    }
};

class SmartName : public Name {
public:
    SmartName() : Name() {

    }

    SmartName(string x) : Name(x) {

    }

    void input(string s) {
        nm = s;
    }

    void display() {
        cout << "His name is " << nm << endl;
    }
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    SmartName snm;
    snm.display(); ///His name is null
    snm.Name::display(); ///null
    snm.input("Aref");
    snm.display(); ///His name is Aref
    snm.Name::display(); ///Aref

    SmartName snm1("Ahmed");
    snm1.Name::display(); ///Ahmed
    snm1.display(); ///His name is Ahmed

    return 0;
}
