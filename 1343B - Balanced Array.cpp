#include<bits/stdc++.h>
#include <iostream>
#include <string>
//#include <vector>
//#include <math.h>

#define LOG(x)          cout << (x) << endl;
//#define ARR_LOG(x)      for(auto c : x) {LOG(c)};
//#define ALL(x)      (x).begin(), (x).end()

using namespace std;


int main ()
{
    int tests = 0;
    cin >> tests;
    
    unsigned int inp = 0;
    for (auto i = 0; i < tests; i++)
    {
        cin >> inp;
        
        if ((inp / 2) % 2 != 0)
        {
            LOG("NO")
        }
        else
        {
            LOG("YES")
            for (auto i = 2; i <= inp; i = i + 2)
            {
                cout << i << " "; 
            }
            
            for (auto i = 1; i < inp - 1; i = i + 2)
            {
                cout << i << " "; 
            }
            cout << (inp + inp / 2 - 1) << endl;
        }
    }
    
    
    return 0;
}