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
    int tests = 0, array_length = 0, moves_num = 0, sum = 0;
    cin >> tests;
    
    while (tests--)
    {
        cin >> array_length >> moves_num;
        int arr_a[array_length] = {0};
        int arr_b[array_length] = {0};
        sum = 0;
        
        for (auto i = 0; i < array_length; i++)
        {
            cin >> arr_a[i];
        }
        sort(arr_a, arr_a + array_length);
        
        for (auto i = 0; i < array_length; i++)
        {
            cin >> arr_b[i];
        }
        sort(arr_b, arr_b + array_length, greater<int>());
        
        for (auto i = 0; i < moves_num; i++)
        {
            if (arr_b[i] > arr_a[i])
                swap(arr_b[i], arr_a[i]);
        }
        
        for (auto i = 0; i < array_length; i++)
        {
            sum += arr_a[i];
        }
        
        LOG(sum)
        
    }
    
    
}