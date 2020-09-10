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
    int n = 0;
    
    cin >> n;
    long long res = 0;
    
    for (auto i = 1; i <= n; i++)
    {
        res += pow(2, i);
    }
    
    LOG(res)
    return 0;
}