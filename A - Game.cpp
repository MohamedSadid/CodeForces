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
    int arr_size = 0;
    cin >> arr_size;
    
    int data_arr[arr_size];
    
    for (auto i = 0; i < arr_size; i++)
    {
        cin >> data_arr[i];
    }
    
    sort(data_arr, data_arr + arr_size);
    LOG(data_arr[(arr_size - 1) / 2])
}