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
    int str_size = 0;
    string inp_str = "";
    cin >> str_size >> inp_str;
    
    string res_str = "";
    
    for (auto i = 0; i < str_size; i++)
    {
        if ((str_size - i) % 2)
        {
            res_str += inp_str[i];
        }
        else
        {
            res_str = (inp_str[i] + res_str);
        }
    }
    
    LOG(res_str)
    
}