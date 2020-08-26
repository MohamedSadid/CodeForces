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
    int x = 0;
    int y = 0;
    int n = 0;
    
    cin >> tests;
    
    while (tests != 0)
    {
        cin >> x >> y >> n;
        
        LOG((n - y) / x * x + y )
        
        tests--;
    }
    
    return 0;
}