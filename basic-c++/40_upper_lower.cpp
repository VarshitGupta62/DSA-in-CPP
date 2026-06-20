#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    vector<int> arr = {1,2,4,4,4,5,7};

    int target = 4;

    auto lb = lower_bound(arr.begin(), arr.end(), target);
    auto ub = upper_bound(arr.begin(), arr.end(), target);

    int freq = ub - lb;

    cout << "Frequency = " << freq;
}