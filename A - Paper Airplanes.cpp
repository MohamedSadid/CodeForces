#include<bits/stdc++.h>
#include <iostream>
#include <string>
//#include <vector>
//#include <math.h>
 
#define LOG(x)          cout << (x) << endl;
#define ARR_LOG(x)      for(auto c : x) {LOG(c)};
//#define ALL(x)      (x).begin(), (x).end()
 
using namespace std;
 
 
int main ()
{
    int k,n,s,p;
 
    cin>> k>> n>> s>> p;
 
    int sPerPerson= (n - 1)/s+1;
 
    int totalS= sPerPerson * k;
 
    int totalP= (totalS-1)/p+1;
    
    LOG(totalP)
 
    return 0;
}