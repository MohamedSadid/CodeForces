#include<bits/stdc++.h>
#include <iostream>
#include <string>
#include <sstream>
 
//#include <vector>
//#include <math.h>
 
#define LOG(x)          cout << (x) << endl;
#define ARR_LOG(x)      for(auto c : x) {LOG(c)};
//#define ALL(x)      (x).begin(), (x).end()
 
using namespace std;
 
 
int main ()
{
    string inp_str = "";
 
    cin >> inp_str;
    inp_str.erase((inp_str.find('0') == -1) ? (0) : (inp_str.find('0')), 1);
    LOG(inp_str)
    
    return 0;
}