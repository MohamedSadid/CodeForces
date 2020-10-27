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
    int old_candles = 0, new_candles = 0;
    
    cin >> old_candles >> new_candles;
    LOG(old_candles + ((old_candles - 1) / (new_candles - 1)))
    return 0;
}