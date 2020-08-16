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
    int n = 0;
    unsigned int inp = 0;
    unsigned int res = 0;
    
    cin >> n;
    for(auto i = 0; i < n; i++)
    {
        cin >> inp;
        res += inp;

    }
    
    printf("%.12f", (double)res / n);
    return 0;
}