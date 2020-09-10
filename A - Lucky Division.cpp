#include<bits/stdc++.h>
#include <iostream>
#include <string>
//#include <vector>
//#include <math.h>
 
#define LOG(x)          cout << (x) << endl;
#define ARR_LOG(x)      for(auto c : x) {LOG(c)};
//#define ALL(x)      (x).begin(), (x).end()
 
using namespace std;
 
 
int main ()
{
    int inp_num = 0;
    cin >> inp_num;
    
    if (inp_num % 4 && inp_num % 7 && inp_num % 47 && inp_num % 74 && inp_num % 477)
    {
        LOG("NO")
    }
    else
    {
        LOG("YES")
    }
    
    
    
    return 0;
}