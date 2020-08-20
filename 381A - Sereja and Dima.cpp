#include<bits/stdc++.h>
#include <iostream>
#include <string>
//#include <vector>
//#include <math.h>

//#define LOG(x)          cout << (x) << endl;
//#define ARR_LOG(x)      for(auto c : x) {LOG(c)};
//#define ALL(x)      (x).begin(), (x).end()

using namespace std;

int main ()
{
    
    unsigned int arr_size = 0;
    cin >> arr_size;
    bool flag = true;
    
    int res_arr[2] = {0};
    
    
    int arr[arr_size];
    
    for (int i = 0; i < arr_size; i++)
    {
        cin >> arr[i];
    }
    
    int j = arr_size - 1;
    int index = 0;
    
    while (arr_size--)
    {
        res_arr[flag = 1 - flag] += (arr[(arr[index] > arr[j]) ? (index++) : (j--)]);
    }
    
    cout << res_arr[0] << " " << res_arr[1];
    
    
    return 0;
}