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
    int a = 0, b = 0, c = 0;
    
    cin >> a >> b >> c;
    
    LOG(max(max((a + b + c), (a * (b + c))), max((a * b * c), ((a + b) * c))))
    
    return 0;
}