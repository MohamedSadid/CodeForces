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
 
int NumLength(int input_num)
{
    int temp_len = 0;
    while (input_num)
    {
        temp_len++;
        input_num /= 10;
    }
    return temp_len;
}
 
void GetArr(int *arr, int size)
{
    for (auto i = 0; i < size; i++)
        cin >> (*(arr + i));
}
 
 
int main ()
{
    int  tests = 0;
    int inp_arr_size = 0;
    int res = 0, r = 0, l = 0;
    
    cin >> tests;
    
    while (tests != 0)
    {
        res = 0;
        cin >> inp_arr_size;
        int inp_arr[inp_arr_size];
        
        GetArr(inp_arr, inp_arr_size);
        
        for (auto i = inp_arr_size - 1; i >= 0; i--)
        {
            if (inp_arr[i] == 1)
            {
                r = i;
                break;
            }
        }
        
        
        for (auto i = 0; i < inp_arr_size; i++)
        {
            if (inp_arr[i] == 1)
            {
                l = i;
                break;
            }
        }
        
        
        for (auto i = l; i < r; i++)
        {
            if (inp_arr[i] == 0)
            {
                res++;
            }
        }
        
        LOG(res)
        tests--;
    }
    return 0;
}