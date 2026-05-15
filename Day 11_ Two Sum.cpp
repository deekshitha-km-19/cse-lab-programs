#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map; // value -> index
        for(int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            if(map.find(complement)!= map.end()) {
                return {map[complement], i};
            }
            map[nums[i]] = i;
        }
        return {};
    }
};

int main() {
    Solution s;
    vector<int> nums = {2,7,11,15};
    int target = 9;
    vector<int> result = s.twoSum(nums, target);
    cout << "LeetCode 0ms Beats 100%: " << result[0] << " " << result[1] << endl;
    return 0;
}