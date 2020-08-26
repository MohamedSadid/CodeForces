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
    int tests = 0;
    int hours = 0;
    int minutes = 0;
    
    cin >> tests;
    
    while (tests != 0)
    {
        cin >> hours >> minutes;
        
        LOG(abs(24 - hours) * 60 - minutes)
        tests--;
    }
    
    return 0;
}