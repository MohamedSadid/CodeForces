#include<bits/stdc++.h>
#include <iostream>
#include <string>
//#include <vector>
//#include <math.h>

#define LOG(x)          cout << (x) << endl;
#define ARR_LOG(x)      for(auto c : x) {LOG(c)};
//#define ALL(x)      (x).begin(), (x).end()

using namespace std;

void get_data(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}

int main ()
{
    int tests = 0;
    int size = 0;
    
    cin >> tests;
    
    while (tests != 0)
    {
        cin >> size;
        int arr_res[size] = {0};
        get_data(arr_res, size);
        
        sort(arr_res, arr_res + size);
        
        
        int res = (1 << 30);
        for (auto i = 0; i < size - 1; i++)
        {
            res = min(arr_res[i + 1] - arr_res[i], res);
        }
        
        LOG(res)
        tests--;
    }
    
    return 0;
}