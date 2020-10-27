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
    int inputs = 0, data = 0, sum = 0;
    cin >> inputs;
    
    while (inputs--)
    {
        cin >> data;
        sum += data;
    }
    
    if (sum > 0)
        LOG("HARD")
    else
        LOG("EASY")
    
}