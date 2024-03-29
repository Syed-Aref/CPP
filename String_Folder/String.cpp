string s = "Aref";
cout<<s[2]<<endl; /// will print the third character( 0 based index )which is 'e'//
s[0] = 'a';
cout<< s <<endl; /// output: aref //

Length: string_var.length(); /// size_t variable(Also works as int)
string_var.push_back(character);


Input:
string s;
/// only word
cin >> s;
/// a line
getline(cin,s);

/** ************************************ **/
/// string to int or long

string sn = "1235";

/// int
stringstream ss(sn);
int x = 0;
ss >> x;
cout << x << endl;
cout << x * 10 << endl;

/// long long int
long long int dx = 0;
/// ss >> dx; --> Wrong
/**
stringstream ss(sn);
ss >> dx;
This would also be wrong.ss can not be initialized again
**/
stringstream ss1(sn);
ss1 >> dx;
cout << dx << endl;
cout << dx / 5 << endl;

/** ************************************ **/
/// int or long to string

int a = 12;

ostringstream str1;
str1 << a;
string sa = str1.str();
cout << sa <<"\n";
int b = 20;

ostringstream str2;
str2 << b;
string sb = str2.str();
cout << sb <<"\n";

/****************************************/
Other method :
string s = "iooc";
s = s + "op"; /// Time complexity : O(M) where M is the length of new string
Bad practice : s = '1' + s; /// Time complexity : O(N) where M is the length of s

string s1 = "45a";
string s2 = "33a";
cout << (s1==s2) << endl; /// 0

s2 = "45a";
cout << (s1==s2) << endl; ///1


cout << char(65) << endl; /// Prints the character at 65 index ('A')
int ind = 'A' + 0;
cout << ind << endl; ///ind = index of 'A'

/// char digit('0' , '1' , ... ,'8') to digit
cout << '0' - 48 << endl; /// 0
cout << '1' - 48 << endl; /// 1

/// digit to char
cout << char(0+48) << endl; /// 0
cout << char(2+48) << endl; /// 2
