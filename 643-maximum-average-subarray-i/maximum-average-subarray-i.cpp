class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        double sum=0;
        double maxsum ;

        int left = 0;
        int right = 0;
        while(right<k){
            sum+=nums[right];
            right++;
        }
        maxsum = sum;
        
        while(right<n){
            
            sum+=nums[right];
            sum-=nums[left];
            maxsum=max(maxsum,sum);

            right++;
            left++;
        }
        return maxsum/k;

    }
};