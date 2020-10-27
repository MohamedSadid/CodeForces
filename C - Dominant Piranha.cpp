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
    int max_ele = 0;
    bool not_found = true;
    
    cin >> tests;
    
    while (tests != 0)
    {
        cin >> inp_arr_size;
        int inp_arr[inp_arr_size];
        
        GetArr(inp_arr, inp_arr_size);
        max_ele = *max_element(inp_arr, inp_arr + inp_arr_size);
        
        not_found = true;
        for (auto i = 0; i < inp_arr_size - 1; i++)
        {
            if (inp_arr[i] != inp_arr[i + 1] && (max(inp_arr[i], inp_arr[i + 1]) == max_ele))
            {
                if (inp_arr[i] == max_ele)
                {
                    LOG(i + 1);
                    not_found = false;
                    break;
                }
                else if (inp_arr[i + 1] == max_ele)
                {
                    LOG(i + 2);
                    not_found = false;
                    break;
                }
            }
        }
        
        if (not_found)
        {
            LOG(-1)
        }
        
        tests--;
    }
    return 0;
}