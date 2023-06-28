class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
         int n = nums.size();
        sort(nums.begin(), nums.end());
        set<vector<int>> st;
        
        for (int i = 0; i < n - 3; i++) {
            for (int j = i + 1; j < n - 2; j++) {
                int k = j + 1;
                int l = n - 1;
                
                while (k < l) {
                    long long sum = static_cast<long long>(nums[i]) + nums[j] + nums[k] + nums[l];
                    
                    if (sum == target) {
                        vector<int> temp = {nums[i], nums[j], nums[k], nums[l]};
                        st.insert(temp);
                        k++;
                        l--;
                    } else if (sum < target) {
                        k++;
                    } else {
                        l--;
                    }
                }
            }
        }
        
        vector<vector<int>> ans(st.begin(), st.end());
        return ans;
    }
};