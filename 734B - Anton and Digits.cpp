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
    int num_2 = 0, num_3 = 0, num_5 = 0, num_6 = 0;
    
    int res = 0;
    
    cin >> num_2 >> num_3 >> num_5 >> num_6;
    
    int minimum = num_2;
    minimum = min(minimum, num_5);
    minimum = min(minimum, num_6);
    
    res += (minimum * 256);
    
    num_2 -= minimum;
    
    res += (32 * min(num_2, num_3));
    
    LOG(res)
    
    return 0;
}