#include "iostream"
 
using namespace std;
#define LOG(x)      cout << x << endl;
 
int main ()
{
    int num1 = 0;
    int num2 = 0;
    
    cin >> num1 >> num2;
    
    while (num2 != 0)
    {
        if (num1 % 10)
        {
            num1--;
        }
        else
        {
            num1 /= 10;
        }
        num2--;
    }
    
    LOG(num1)
    return 0;
}