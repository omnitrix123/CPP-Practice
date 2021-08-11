#include <bits/stdc++.h>
using namespace std;

int main()
{
// program for string reversal
    string s1,s2,s3;
    cin >> s1;
    cout << s1 << endl; 
    for (int i = s1.size()-1 ; i>=0 ; i--)
    {
        s2 = s2 + s1[i] ;
    }
    cout << s2 << endl;


    // now using pushback 
    //as above method is not good for time complexity

    for (int j = s1.size()-1 ; j >= 0 ; j--)
    {
        s2.push_back(s1[j]);
    }
    cout << s2 << endl;

    for (int k = s1.size()-1 ; k >= 0 ; k--)
    {
        s3.push_back(s1[k]);
    }
    cout << s3 << endl;






}