class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        int sum = 0;
        sum = accumulate(nums.begin(), nums.end(), sum);

        for(int i = 0; i<nums.size(); i++){
            ans = ans + (i* nums[i]);
        }
        int val = ans;
        for(int j = n-1; j>=0; j--){
            val = val + sum - n*nums[j];
            ans = max(ans, val);
        }
        
    return ans;
    }
};
