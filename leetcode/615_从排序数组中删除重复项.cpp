class Solution {
public:
	int removeDuplicates(vector<int>& nums) {
		if (nums.empty())return -1;
		for (int i = 1; i < nums.size(); i++) {
			if (nums[i]==nums[i-1]) {
				nums.erase(nums.begin() + i);
				i--;
			}
		}
		return nums.size();
	}
};