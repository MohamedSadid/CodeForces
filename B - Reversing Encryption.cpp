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
    unsigned short string_size = 0; 
    string inp_Str;
    unsigned short d = 0;
    cin >> string_size >> inp_Str;
    
    for(;(d++) < string_size;)
    {
        if (!(string_size % d))
        {
            reverse(inp_Str.begin(), inp_Str.begin() + d);
        }
    }
    LOG(inp_Str)
}