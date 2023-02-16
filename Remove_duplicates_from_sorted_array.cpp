class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int l=1, r,n;
        n=nums.size();
        for(r=1;r<n;r++){
            if(nums[r]!=nums[r-1]){
            nums[l]=nums[r];
            l=l+1;
            }
        }
        return l;
    }
};
