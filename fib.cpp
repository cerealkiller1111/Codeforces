#include <iostream>

using namespace std;

uint64_t fib(int& n)
{
    if (n<=2)
    {
        return 1;
    }

    uint64_t n1=1, n2=1;
    uint64_t n3;
    for (int i=2; i<n; i++)
    {
        n3 = n1+n2;
        n1 = n2;
        n2 = n3;    
    }

    return n3;
}

int main()
{
    int n;
    cin >> n;
    cout << fib(n);
    
    return 0;
}