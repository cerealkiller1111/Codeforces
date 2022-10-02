#include <iostream>
 
using namespace std;
 
int main()
{
    bool exist = false;
    int w;
    cin >> w;
 
    for (int num = 2; num < w; num+=2)
    {
        for (int i=2; (num + i <= w) && exist==false; i+=2)
        {
            if (num + i == w) {
                exist = true;
            }
        }
    }
 
    if (exist) {cout << "YES";}
    else {cout << "NO";}
    
    return 0;
}