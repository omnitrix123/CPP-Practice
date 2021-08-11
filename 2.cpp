#include <iostream>
#include <math.h>


// instead of using above two header we can directly include the below line
#include <bits/stdc++.h>

using namespace std;

int main()
{
	//using cout
	cout << "omnik " ;
	cout << sqrt(16) << endl;
	//datatypes 
	int a=3;
	int b=4;
	int sum = a+b;
	cout <<"sum = "<< sum << endl ;
	//types of datatypes 
	//char int float string bool double
	// long int, long long int
	//endl is new line
	char c = 's' ; // cannot use " "
	string s = "hello world" ;
	int i = 3.16 ;
	float f = 3.16556787 ; //print upto 5 digits after point
	double d = 3.15546789 ;
	bool t = true; //only 0 is false rest all positive negative are all true
	cout << c << " " << s <<  " " << i << " " << f << " " << d << " " <<t <<endl;
}