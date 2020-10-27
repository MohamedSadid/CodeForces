#include<bits/stdc++.h>
#include <iostream>
#include <string>
#include <sstream>
 
//#include <vector>
//#include <math.h>
 
#define LOG(x)          cout << (x) << endl;
#define ARR_LOG(x)      for(auto c : x) {cout << c << " ";};
#define NL              cout << endl;
//#define ALL(x)      (x).begin(), (x).end()
 
using namespace std;
 
int main ()
{
    int  tests = 0;
    long long x = 0, y = 0;
    unsigned long long dollars_for_each = 0, dollars_for_both = 0;
    unsigned long long res = 0;
    
    cin >> tests;
    
    while (tests != 0)
    {
        cin >> x >> y >> dollars_for_each >> dollars_for_both;
        res = 0;
        
        res += (abs(x - y) * dollars_for_each);
        if ((min(x, y) *  dollars_for_both) < (min(x, y) *  2 * dollars_for_each))
        {
            res += (min(x, y) *  dollars_for_both);
        }
        else
        {
            res += (min(x, y) * 2 * dollars_for_each);
        }
        
        LOG(res)
        tests--;
    }
    return 0;
}