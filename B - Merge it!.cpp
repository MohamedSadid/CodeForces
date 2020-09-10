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
    int tests = 0, arr_size = 0;
    int data = 0;
    cin >> tests;
    int res = 0;
    
    while (tests--)
    {
        cin >> arr_size;
        res = 0;
        
        int arr_data[3] = {0};
        for (auto i = 0; i < arr_size; i++)
        {
            cin >> data;
            arr_data[data % 3]++;
        }
        
        res =  arr_data[0] + min(arr_data[2], arr_data[1]);
        res += (max(arr_data[2], arr_data[1]) - min(arr_data[2], arr_data[1])) / 3;
        
        LOG(res)
    }
    
    return 0;
}