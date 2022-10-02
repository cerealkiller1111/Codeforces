#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    int one, two, three;
    int n, count;
    cin >> n;
    cin.clear();
    cin.ignore();

    for (int i=0; i<n; i++)
    {
        string line;
        getline(std::cin, line);
        std::istringstream ss(line);
        ss >> one >> two >> three;

        if (one && two || one && three || two && three)
        {
            count++;
        }
    }
    
    cout << count;
    return 0;
}