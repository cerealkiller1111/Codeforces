#include <iostream>
#include <vector>

using namespace std;

void print(vector<int>& v)
{
    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {5, 2, 8, 6, 3, 6, 9, 5};
    vector<vector<int>> v_list;
    
    for (int i=0; i<6; i++)
    {
        vector<int> foo;
        for (int j=i+1; j<8; j++)
        {
            if (arr[j] < arr[i])
            {
                continue;
            }
            
            foo.push_back(arr[i]);
            for (int k=j; k<8; k++)
            {
                if ((arr[k] > arr[i]) && (arr[k] > foo[foo.size()-1]))
                {
                    foo.push_back(arr[k]);
                }
            }
            v_list.push_back(foo);
            foo.clear();
        }
    }

    for (auto v : v_list)
    {
        print(v);
    }    
    
    vector<int>& foo = v_list[0];
    for (auto v : v_list)
    {
        if (v.size() > foo.size()) {foo = v;}
    }
    
    cout << "Longest increasing sequence is : ";
    print(foo);
    cout << "Length: " << foo.size();
    return 0;
}