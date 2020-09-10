#include<bits/stdc++.h>
#include <iostream>
#include <string>
#include <sstream>
 
//#include <vector>
//#include <math.h>
 
#define LOG(x)          cout << (x) << endl;
#define ARR_LOG(x)      for(auto c : x) {cout << c << " ";};
//#define ALL(x)      (x).begin(), (x).end()
 
using namespace std;
 
 
int main ()
{
    long long int t,i,j;
	cin>>t;
	for(i=0;i<t;i++)
	{
		long long int a,b,x,y,n;
		cin>>a>>b>>x>>y>>n;
		long long int mina=0,minb=0;
		mina=(a-min(a-x,n))*(b-min(b-y,n-min(a-x,n)));
		minb=(b-min(b-y,n))*(a-min(a-x,n-min(b-y,n)));
		cout<<min(mina,minb)<<endl;
	}
}