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
    int studnets_num = 0, sum = 0;
    cin >> studnets_num;
    
    int students_skills[studnets_num];
    
    for(auto i = 0; i < studnets_num; i++)
    {
        cin >> students_skills[i];
    }
    
    sort(students_skills, students_skills + studnets_num);
    
    for (auto i = 1; i < studnets_num; i = i + 2)
    {
        sum += (students_skills[i] - students_skills[i - 1]);
    }
    
    LOG(sum)
    
}