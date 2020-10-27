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
 
int main ()
{
    int  tests = 0;
    int map[4] = {1, 3, 6, 10};
    int data = 0;
    
    cin >> tests;
    
    while (tests != 0)
    {
        cin >> data;
        LOG((((data % 10) - 1) * 10) + map[NumLength(data) - 1]);
        
        tests--;
    }
    return 0;
}