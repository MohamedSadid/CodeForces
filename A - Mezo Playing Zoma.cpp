#include <iostream>
#include <string>
 
using namespace std;
#define LOG(x)      cout << x << endl;
 
 
 
int main ()
{
    int moves_num = 0;
    string moves_inp = "";
    
    int left_moves = 0;
    int right_moves = 0;
    
    cin >> moves_num >> moves_inp;
    
    for (auto ch : moves_inp)
    {
        if (ch == 'L')
        {
            left_moves++;
        }
        else 
        {
            right_moves++;
        }
    }
    
    LOG(right_moves + left_moves + 1)
    
    return 0;
}