#include "iostream"
#include "string"
//#include "math"
 
using namespace std;
#define LOG(x)      cout << x << endl
 
int main ()
{
    int M = 0;
    int N = 0;
    
    cin >> M >> N;
    
    LOG(M * N / 2);
    
    return 0;
}