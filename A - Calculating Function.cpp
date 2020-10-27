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
    unsigned long long input = 0;
    cin >> input;
    
    if (input % 2 == 0)
    {
        LOG(input / 2)
    }
    else
    {
        LOG(-1 * (((long long)input + 1) / 2))
    }
    
}