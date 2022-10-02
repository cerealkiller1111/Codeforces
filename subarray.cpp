#include <iostream>
#include <vector>

using namespace std;

void print(vector<int>& arr) 
{
    for (auto a : arr)
    {
        cout << "[" << a << "]";
    }       

    cout << '\n';            
}

void subArrays(vector<int>& arr)
{

}

int main()
{
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    
    vector<vector<int>> v_list;
    vector<int> foo;

    for (int subsize=1; subsize<=arr.size(); subsize++)
    {
        for (int i=0; i<arr.size(); i++)
        {   
            foo.push_back(arr[i]);
            for (int j=i+1; j<arr.size(); j++)
            {
                for (int k=0; k<(subsize-1); k++)
                {
                    foo.push_back(arr[j+k]);
                }
                v_list.push_back(foo);
                foo.clear();
            }
        }
    }

    for (auto v : v_list)
    {
        print(v);
    }

    return 0;
}