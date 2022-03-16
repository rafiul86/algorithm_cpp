#include <iostream>
#include <vector>

using std::vector;
using std ::cout;


int main()
{
    vector<int> v{6,7,8,9};
    for(int i:v)
    {
        cout << i << " ";
    }
}