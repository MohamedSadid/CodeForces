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
        
        int data = 0;
        int odd = 0, even = 0;
        for (int i = 0; i < size; i++)
        {
            cin >> data;
            if ((data % 2) != (i % 2))
            {
                if (i % 2)
                {
                    odd++;
                }
                else
                {
                    even++;
                }
            }
        }
        
        LOG((even == odd) ? (even) : (-1))
        tests--;
    }
    
    return 0;
}