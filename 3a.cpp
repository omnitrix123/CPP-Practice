
#include<bits/stdc++.h>
using namespace std;

int main()
{
   // overflow and ranges
	// -10^9 < int < 10^9  (rough ranges while doing cp)
	// -10^12 < long int < 10^12
	// -10^18 < long long int < 10^18
	int a = 100000;
	int b = 100000;

	int c = a*b;
	cout << c << endl;

	int mx= INT_MAX; // INT_MAX is internal variable

	cout << "This is the max value of int = "<< mx << endl;
	cout << "if we overflow this value by adding one it cycles back "<< mx+1<< endl;
    
    long int d = a*b;
    cout << d << endl;

    long int e = 100000;
    long int f = 100000;
    long int g= e*f;

    cout << g <<endl; //Here we get the right answer

    long int mxx= LONG_MAX;
    cout << mxx << endl;
    
    cout << sqrt(-34) << endl;

    cout << 3/0 << endl;
    



}


