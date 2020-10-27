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
    int test_cases_num = 0, piles_num = 0, threshold_candies_num = 0;
    cin >> test_cases_num;
    int sum = 0;
    
    while (test_cases_num--)
    {
        cin >> piles_num >> threshold_candies_num;
        int data_arr[piles_num] = {0};
        sum = 0;
        for(auto i = 0; i < piles_num; i++)
        {
            cin >> data_arr[i];
        }
        sort(data_arr, data_arr + piles_num);
        
        for(auto i = 1; i < piles_num; i++)
        {
            sum += ((threshold_candies_num - data_arr[i]) / data_arr[0]);
        }
        
        LOG(sum)
    }
    
}