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
    int tests = 0, arr_size = 0, data = 0, sum = 0;
    cin >> tests;
    
    while (tests != 0)
    {
        cin >> arr_size;
        
        sum = 0;
        for (auto i = 0; i < arr_size; i++)
        {
            cin >> data;
            sum += (data & 1);
        }
        
        if (sum & 1 || sum % arr_size)
        {
            LOG("YES")
        }
        else
        {
            LOG("NO")
        }
        
        tests--;
    }
    
    return 0;
}