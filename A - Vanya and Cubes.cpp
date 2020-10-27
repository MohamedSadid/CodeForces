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
    int cubes = 0;
    int floors = 0;
    int cubes_per_floor = 1;
    int temp = 2;
    
    cin >> cubes;
    while(cubes > 0)
    {
        cubes_per_floor += temp;
        temp++;
        cubes -= cubes_per_floor;
        floors++;
    }
    
    LOG(floors)
    
    return 0;
}