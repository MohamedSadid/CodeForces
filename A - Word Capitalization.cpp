#include <iostream>
#include <string>
//#include <vector>
 
//#include <math.h>
 
 
using namespace std;
#define LOG(x)      cout << (x) << endl;
 
 
//#define ALL(x)      (x).begin(), (x).end()
 
 
int main ()
{
    string inpStr = "";
    
    cin >> inpStr;
    
    inpStr[0] = toupper(inpStr[0]);
    
    LOG(inpStr)
    
    
    return 0;
}