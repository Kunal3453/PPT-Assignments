class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target)
     {
        int n=nums.size();
        map<int,int>mpp;
        vector<int>ans;
        for(int i=0;i<n;i++)
        {
            if(mpp.find(target-nums[i])!=mpp.end())
            {
                ans={mpp[target-nums[i]],i};
            }
            mpp[nums[i]]=i;
        }
        return ans;
          			}
		};
