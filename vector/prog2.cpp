#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> v1 = {10,20,30,40,50};

    for(int i = 0; i < v1.size(); i++)
    {
        cout<<v1[i]<<" ";
    }

    return 0;
}