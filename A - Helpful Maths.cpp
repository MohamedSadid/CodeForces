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
    string inp_str = "";
    cin >> inp_str;
    
    for (auto i = 0; i < inp_str.size(); i++)
    {
        if (inp_str[i] == '+')
        {
            inp_str.erase(i, 1);
        }
    }
    sort(inp_str.begin(), inp_str.end());
    
    string res = "";
    for (auto i = 0; i < inp_str.size(); i++)
    {
        res += (inp_str[i]);
        if (i != (inp_str.size() - 1))
        {
            res += "+";
        }
    }
    
    LOG(res)
    
}