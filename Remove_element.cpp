class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
     int n=nums.size(), l=0, r;
     for(r=0;r<n;r++){
         if(nums[r]!=val){
            nums[l]=nums[r];
            l++;
            
         }
     }   
     return l;
    }
};
