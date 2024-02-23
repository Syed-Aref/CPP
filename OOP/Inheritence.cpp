#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;

#define mpr make_pair
#define pbk push_back
#define psh push
#define fir first
#define sec second
#define line "\n"

class Chef {
    public:
        void makeChicken() {
          cout<<"Chef is making chicken"<<endl;
        }

        void serveDrinks() {
          cout<<"Chef is serving drinks"<<endl;
        }
};

class ItalianChef : public Chef {
  public:
      void cookPasta() {
         cout<<"Italian Chef is cooking pasta"<<endl;
      }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    Chef chef1;
    ItalianChef ic1;

    chef1.makeChicken();
    chef1.serveDrinks();
    /// chef1.cookPasta();--> wrong

    ic1.makeChicken();
    ic1.serveDrinks();
    ic1.cookPasta();

    return 0;
}
/** **************************************
Output:
Chef is making chicken
Chef is serving drinks
Chef is making chicken
Chef is serving drinks
Italian Chef is cooking pasta
************************************** **/


/// --------------------------**--------------------------
/// OVER-RIDE Example
typedef long long int lli;

#define mpr make_pair
#define pbk push_back
#define psh push
#define fir first
#define sec second
#define line "\n"

class Chef {
    public:
        void makeChicken() {
          cout<<"Chef is making chicken"<<endl;
        }

        void serveDrinks() {
          cout<<"Chef is serving drinks"<<endl;
        }

        void cookSpecialDish() {
          cout<<"Chef is cooking special dish"<<endl;
        }
};

class ItalianChef : public Chef {
  public:
      void cookPasta() {
         cout<<"Italian Chef is cooking pasta"<<endl;
      }

      void cookSpecialDish() {
          cout<<"Italian Chef is cooking special dish.The dish is pizza"<<endl;
      }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    Chef chef1;
    ItalianChef ic1;

    chef1.cookSpecialDish();
    ic1.cookSpecialDish();

    return 0;
}
/** **************************************
Output:
Chef is cooking special dish
Italian Chef is cooking special dish.The dish is pizza
************************************** **/
