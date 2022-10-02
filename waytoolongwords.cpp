#include <iostream>
#include <string>

using namespace std;

int main ()
{
    int n; cin >> n;
    string arr[n];
    
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        int l = arr[i].length();
        if (l > 10)
        {
            arr[i].replace(1, l-2, std::to_string(l-2));
        }
    }

    for (auto s : arr) {cout << s << endl;}

    return 0;
}