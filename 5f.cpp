#include <bits/stdc++.h>
using namespace std;

int main()
{
 string s;
 cin >> s;
 cout << s[s.size()-1] << endl; //last digit is printed as string

 int d = (int) s[s.size()-1] ;
 cout << d << endl; //here ASCII is printed

 int e = (int) s[s.size()-1] - '0';
 cout << e << endl; // Now int is printed
 

}

//dealing with very very large nos in c++
// this can be done only with help of strings
