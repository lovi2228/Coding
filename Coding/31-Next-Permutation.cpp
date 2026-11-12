class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int point=-1;
        int n=nums.size()-1;
        for(int i=n-1;i>=0;i--){
            if(nums[i]<nums[i+1]){
                point=i;break;
            }
        }
        if(point==-1){
            reverse(nums.begin(),nums.end());
            return;
        }

        for(int i=n;i>point;i--){
            if(nums[i]>nums[point]){
                swap(nums[i],nums[point]);
                break;
            }
        }

        reverse(nums.begin()+point+1,nums.end());
    }
};