#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	double a = 1000000000;
	double b = 1000000000;
	double c = a*b;

	cout << fixed /*use this to get rid of scientific notation */ << setprecision(1)<<c << endl;
     
    double d;
    d = 1e24;
    cout << d << endl;


    
}
//fixed is to convert scientific notation into fixed form
// set precision is the no significant no you want after zeroes
//Q: why not use double everytime? (we wont overflow ever)
//A: double can store a large no but not accurately
// double and float both suffer from precision errors 
//generally go for long long int
