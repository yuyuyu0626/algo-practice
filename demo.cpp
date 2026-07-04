#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 示例：两数之和
vector<int> twoSum(vector<int>& nums, int target) {
    int l = 0, r = nums.size() - 1;
    while (l < r) {
        int sum = nums[l] + nums[r];
        if (sum == target) return {l, r};
        else if (sum < target) l++;
        else r--;
    }
    return {-1, -1};
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    auto res = twoSum(nums, 9);
    cout << "结果: [" << res[0] << ", " << res[1] << "]" << endl;
    return 0;
}
