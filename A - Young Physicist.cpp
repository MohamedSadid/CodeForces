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
    int inp_tests = 0;
    int v1 = 0, v2 = 0, v3 = 0;
    int v1_s = 0, v2_s = 0, v3_s = 0;
    
    cin >> inp_tests;
    
    while (inp_tests != 0)
    {
        cin >> v1 >> v2 >> v3;
        v1_s += v1;
        v2_s += v1;
        v3_s += v1;
        
        inp_tests--;
    }
    
    if (v1_s || v2_s || v3_s)
    {
        LOG("NO")
    }
    else
    {
        LOG("YES")
    }
    return 0;
}