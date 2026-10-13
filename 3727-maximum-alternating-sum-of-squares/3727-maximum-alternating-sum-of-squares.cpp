class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n=nums.size();
        int k=n/2;
        for(int i=0; i<n; i++){
                nums[i]*=nums[i];
        }
        sort(nums.begin(), nums.end());
        long long a=0;
        long long b=0;

        for(int i=0; i<n; i++){
            if(i<k)
            a+=nums[i];

            else
            b+=nums[i];
        }
       return b-a;
    }
};