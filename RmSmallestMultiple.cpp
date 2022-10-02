#include <iostream>
#include <vector>

using namespace std;

void print(vector<int>& v)
{
    for (int i=0; i<v.size(); i++)
    {
        cout << v[i] << " ";
    }
}

int gcd(int n1, int n2)
{
    if (n1 == n2) {return n1;}
    if (n1 > n2) {return gcd(n1-n2, n2);}
    else {return gcd(n2-n1, n1);}
}

int main()
{
    int testcount;
    int set;
    int totalcost = 0;
    vector<int> missing;
    
    cin >> testcount; cin.ignore();
    for (int i=0; i<testcount; i++)
    {
        cin >> set; cin.ignore();
        string line;
        getline(cin, line);
        for (int i=0; i<set; i++)
        {
            if (line[i] == '0')
            {
                missing.push_back(i+1);
            }
        }

        if (missing.size() == 1)
        {
            
        }
        while (missing.size() > 0)
        {

        }
        
    }   
    
    return 0;
}