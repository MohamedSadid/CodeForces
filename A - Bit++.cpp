#include "iostream"
#include "string"
 
 
using namespace std;
#define LOG(x)      cout << x << endl;
 
int main ()
{
    int inpLines = 0;
    int res = 0;
    string code;
    
    cin >> inpLines;
    
    for (int i = 0; i < inpLines; i++)
    {
        cin >> code;
        for (auto c : code)
        {
            if (c == '+')
            {
                res++;
                break;
            }
            else if (c == '-')
            {
                res--;
                break;
            }
        }
    }
    
    LOG(res)
    return 0;
}