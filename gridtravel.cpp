#include <iostream>
const int MAX_ROW = 10000;
const int MAX_COL = 10000;

using namespace std;

int memo[MAX_ROW][MAX_COL] = {0};

int totalWays(const int& m, const int& n) 
{
    if (m > MAX_ROW || n > MAX_COL) 
    {
        cout << "A DIMENSION OF " << m << "x" << n << " IS TOO LARGE TO HANDLE!" << endl;
        return 0;
    }

    if (memo[m][n] != 0) {return memo[m][n];}
    if (m == 1 || n == 1) {return 1;}
    if (m == 0 || n==0) {return 0;}

    memo[m][n] = memo[n][m] = totalWays(m-1, n) + totalWays(m, n-1);
    return memo[m][n];
    return (totalWays(m-1, n) + totalWays(m, n-1));
}

int main()
{
    int m, n;
    cin >> m;
    cin >> n;

    cout << totalWays(m, n);
    
    return 0;
}