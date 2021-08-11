#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s = "Hello Omnik" ;
	cout << s << endl;
	string s2;
	cin >> s2 ;
	cout << s2 << endl;
	cout << s + " " + s2 << endl; //string concatenation
	if (s == s2)  //string comparsion
	{
		cout << "strings are equal" << endl;
	}
	else
	{
		cout << " strings are not equal" << endl;
	}

	cout << s[0] << endl; //string indexing

	s[0] = 'a';
	cout << s << endl; //adding into string

	cout << s.size() << endl; // to get string size

	for ( int i = 0; i < s.size() ; i++)
	{
		cout << s[i] ;
	} 

	for (int j = 0; j < s.size() ; j++ )
	{
		cout << s[j] << endl;
	}

}


//cin breaks at space or newline
// " string is in double qoutes"
// ' characters are in single quotes'