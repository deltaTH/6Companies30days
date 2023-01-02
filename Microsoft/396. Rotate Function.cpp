class Solution {
public:

    
    int maxRotateFunction(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        int f0 = 0;
        for (int i = 0; i < n; i++) {
            f0 += i * nums[i];
            sum += nums[i];
        }
        int ans = f0;
        // F(k) = F(k - 1) + sum - n * nums[n - k]
        for (int i = 1; i < n; i++) {
            f0 = f0 + sum - n * nums[n - i];
            ans = max(ans, f0);
        }
        return ans;
    }
};