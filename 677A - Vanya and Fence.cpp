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
    int friends_num = 0;
    int fence_height = 0;
    
    cin >> friends_num >> fence_height;
    
    int person_height = 0;
    int road_width = 0;
    
    while (friends_num)
    {
        cin >> person_height;
        road_width += ((person_height > fence_height) ? (2) : (1));
        friends_num--;
    }
    
    LOG(road_width)
    return 0;
}