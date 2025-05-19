#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> v = {100,2,3,4,5};


    for(int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }

    cout<<endl<<v.front();


    return 0;
}