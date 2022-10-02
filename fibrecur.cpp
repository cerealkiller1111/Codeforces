#include <iostream>

using namespace std;

uint64_t memo[] = {0};

uint64_t fib(const int& n)
{
    if (memo[n] != 0) {return memo[n];}

    if (n <= 2)
    {
        return 1;
    }
    
    memo[n] = fib(n-1) + fib(n-2);
    return memo[n];
}

int main()
{
    int n;
    cin >> n;
    cout << fib(n);
    
    return 0;
}