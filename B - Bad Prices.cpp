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
    int days = 0;
    int bad_days = 0;
    
    cin >> inp_tests;
    
    while (inp_tests--)
    {
        cin >> days;
        int arr_prices[days];
        for (auto i = 0; i < days; i++)
            cin >> arr_prices[i];
 
        bad_days = 0;
        int mn = (1<<30);
        
        for (auto i = days - 1; i >= 0; i--)
        {
            mn = min(mn, arr_prices[i]);
            
            if (mn < arr_prices[i])
                bad_days++;
        }
        
        LOG(bad_days)
    }
    
    return 0;
}