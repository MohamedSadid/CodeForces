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
    int tests = 0, arr_size = 0, sum = 0, maximum = 0;
    cin >> tests;
    
    while (tests != 0)
    {
        cin >> arr_size;
        
        sum = 0;
        int data = 0;
        maximum = 0;
        for (auto i = 0; i < arr_size; i++)
        {
            cin >> data;
            sum += data;
            
            maximum = max(data, maximum);
        }
        
        LOG((maximum > (sum - maximum) || (sum & 1)) ? ("T") : ("HL"))
        
        tests--;
    }
    
    return 0;
}