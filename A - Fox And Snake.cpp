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
    int  n = 0, m = 0;
    bool flag = false;
    
    cin >> n >> m;
    
    for (auto i = 0; i < n; i++)
    {
        if ((i % 2) == 0)
        {
            for (auto h = 0; h < m; h++)
                cout << '#'; 
        }
        else
        {
            if (!flag)
            {
                for (auto d = 0; d < m - 1; d++)
                    cout << '.';
                cout << '#';
                flag = true;
            }
            else
            {
                cout << '#';
                for (auto h = 0; h < m - 1; h++)
                    cout << '.';
                flag = false;
            }
        }
        NL
    }
    
    return 0;
}