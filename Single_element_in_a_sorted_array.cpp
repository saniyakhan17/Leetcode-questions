class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        int i, high=n-1, low=0, mid;
        if(high==0)
        return nums[0];
        else if(nums[0]!=nums[1])
        return nums[0];
        else if (nums[high]!=nums[high-1])
        return nums[high];
      //1. Adding conditions from lines 6 to 11 so we do half the operation without traversing the whole array.

        while(low<=high){
          //2. We are given a sorted array using binary search. 
            mid=low+(high-low)/2;
          
          //3. Line 18 checks if the unique element is mid or not.
            if(nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1])
            return nums[mid];
          
          //4. Applying the partition and even/odd concept.
            if(((mid%2)==0) && (nums[mid]==nums[mid+1]) 
            || ((mid%2)==1) && (nums[mid]==nums[mid-1]))
            low= mid+1;
            else 
            high=mid-1;

        }
        return -1; 
    }
};
