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
    int tests = 0, n = 0;
    
    cin >> tests;
    
    while (tests != 0)
    {
        cin >> n;
        if (n == 1)
        {
            LOG(-1)
        }
        else
        {
            cout << 2;
            for (auto i = 0; i < n - 1; i++) cout << 7;
            NL
        }
        tests--;
    }
    return 0;
}