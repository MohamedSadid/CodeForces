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
    int n = 0, p = 0, v = 0, t = 0;
    int res = 0;
    
    cin >> n;
    
    while (n--)
    {
        cin >> p >> v >> t;
        if ((p + v + t) >= 2)
        {
            res++;
        }
    }
    
    LOG(res)
    return 0;
}