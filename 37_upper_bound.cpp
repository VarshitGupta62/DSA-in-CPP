#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// basic vector example
int main()
{

    vector<int> arr = {1, 2, 4, 4, 4, 6, 8};

    auto it = upper_bound(arr.begin(), arr.end(), 4);

    cout << it - arr.begin();

    return 0;
}