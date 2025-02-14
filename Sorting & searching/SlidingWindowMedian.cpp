#include<bits/stdc++.h>
using namespace std;
#define int long long
class SlidingWindowMedian {
public:
    vector<int> medianSlidingWindow(vector<int>& nums, int k) {
        vector<int> result;
        multiset<int> window(nums.begin(), nums.begin() + k);
        auto mid = next(window.begin(), k / 2);

        for (int i = k; ; i++) {
            result.push_back(*mid);
            if (i == nums.size()) break;
            window.insert(nums[i]);
            if (nums[i] < *mid) mid--;
            if (nums[i - k] <= *mid) mid++;
            window.erase(window.lower_bound(nums[i - k]));
        }
        return result;
    }
};
int32_t main() {
    int n, k;
    cin >> n >> k;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
        cin >> nums[i];
    SlidingWindowMedian solution;
    vector<int> result = solution.medianSlidingWindow(nums, k);
    for (int median : result)
    cout << median << " ";
    cout << endl;
}