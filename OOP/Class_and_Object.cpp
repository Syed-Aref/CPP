#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;

#define mpr make_pair
#define pbk push_back
#define psh push
#define fir first
#define sec second
#define line "\n"

class Book {
    public:
        string author;
        string bookName;
        Book() {
          cout << "Please intitalize Author and Book-name" << "\n";
        }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    Book book1;

    return 0;
}

/** *********************************
Inside console:
Please intitalize Author and Book-name
********************************* **/

/// -------------------------------------***-------------------------------------


#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;

#define mpr make_pair
#define pbk push_back
#define psh push
#define fir first
#define sec second
#define line "\n"

class Book {
    public:
        string author;
        string bookName;
        Book(string aAuthor,string aBookName) {
          author = aAuthor;
          bookName = aBookName;
        }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    Book book1("Mario Pujo", "The godfather");
    cout << book1.bookName << " is written by " << book1.author << endl;

    return 0;
}

/** *********************************
Inside console:
The godfather is written by Mario Pujo
********************************* **/


/// -------------------------------------***-------------------------------------


#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;

#define mpr make_pair
#define pbk push_back
#define psh push
#define fir first
#define sec second
#define line "\n"

class Book {
    private:
        int rating;

    public:
        string author;
        string bookName;

        Book(string aAuthor, string aBookName, int num) {
          author = aAuthor;
          bookName = aBookName;
          rating = num;
        }

        int getRating() {
          return rating;
        }

        void setRating(int n) {
          rating = n;
        }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    Book book1("Mario Pujo", "The godfather",8);
    cout << book1.bookName << " is written by " << book1.author << endl;

    /// cout<<"Rating is: "<<book1.rating<<"\n";-->Error,can not access private field in any other class except the main body class//
    cout << "Rating is: " << book1.getRating() << "\n";

    /// Changing the information about book//
    book1.bookName = "Lilaboti";
    book1.author = "Humayun Ahmed";
    /// book1.rating = 9;-->Error
    book1.setRating(9);
    cout<<"New Book"<<"\n";
    cout<<book1.bookName<<" is written by "<<book1.author<<endl;
    cout<<"Rating is: "<<book1.getRating()<<"\n";

    return 0;
}
/** *********************************
Inside console:
The godfather is written by Mario Pujo
Rating is: 8
New Book
Lilaboti is written by Humayun Ahmed
Rating is: 9
**********************************/


/// -------------------------------------***-------------------------------------


#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;

#define mpr make_pair
#define pbk push_back
#define psh push
#define fir first
#define sec second
#define line "\n"

class classA {
    public :
        int s;

        classA(int s_) {
            s = s_;
        }
};

class classB {
    public :
        int s;
        classB(int s_) {
            s = s_;
        }

        classB() {
            s = -1;
        }
};


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    classA a1(56);
    classA* a_pointer = new classA(34);

    vector<classA> vec_a;
    vec_a.push_back( a1 );
    vec_a.push_back( classA(55) );

    vector<classA*> vec_a_pointer;
    vec_a_pointer.push_back( a_pointer );
    vec_a_pointer.push_back( new classA(45) );

    for(auto i : vec_a) cout << i.s << " ";
    cout << endl;
    cout << "------------" << endl;

    for(auto i : vec_a_pointer) cout << i->s << " ";
    cout << endl;
    cout << "------------" << endl;

    classA* array_a_pointer[6];
    for(int i = 0;i<6;i++) array_a_pointer[i] = new classA(i);
    /// before using array_a_pointer[i] we must initialize it

    classA array_a[6];

    classB array_b[6];

    classB* array_b_pointer[6];

    return 0;
}
