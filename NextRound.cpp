#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    int n, k, count=0;
    int arr[] = {};
    string line;

    getline(std::cin, line);
    istringstream ss(line);
    ss >> n >> k;

    getline(std::cin, line);
    ss.str(line);
    for (int i=0; i<n; i++)
    {
        ss >> arr[i];
    }
    
    cout << k << endl;
    cout << arr[k] << endl;
    for (int i=0; i<n; i++)
    {
        if (arr[i] >= arr[k-1])
        {
            count++;
        }
    }

    cout << count;
    return 0;
}