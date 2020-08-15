#include <iostream>
#include <string>
//#include <vector>
 
//#include <math.h>
 
 
using namespace std;
#define LOG(x)      cout << (x) << endl;
 
 
//#define ALL(x)      (x).begin(), (x).end()
 
 
int main ()
{
    
    unsigned int w1 = 0, w2 = 0, years = 0;
    cin >> w1 >> w2;
    
    while (w1 <= w2)
    {
        w1 *= 3;
        w2 *= 2;
        years++;
    }
    
    LOG(years);
    
    return 0;
}