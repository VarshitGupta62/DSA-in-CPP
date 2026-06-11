#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
    vector<int> arr = {1, 2, 1, 3, 2, 1};

    unordered_map<int, int> freq;

    for (int x : arr)
    {
        freq[x]++;
    }

    for (auto element : freq)
    {
        cout << element.first << " -> "
             << element.second << endl;
    }

    return 0;
}