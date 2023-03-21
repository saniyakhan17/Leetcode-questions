class Solution {
public:
    int zeroFilledSubarray(vector<int>& nums) {
       long ans = 0;
        long count = 0;

        for (int i = 0; i < nums.size(); ++i)
        {
            if (nums[i] == 0)
            {
                ++count;
                ans += count;
            }
            else
                count = 0;
        }
        return ans;
    }
};
/*int count1 =0,count2=0, count3=0;
       int n = nums.size();
      
       for (int i=0;i<n; i++){
           if(nums[i]==0)
          count1++;
           if((nums[i] + nums[i+1]) == 0) 
           count2++;
          if(nums[i] + nums[i+1] + nums[i+2] == 0)
           count3++;

       }  
      return count1+count2+count3; 
There are a few issues with the given code:

Out of bounds access: In the second and third if statements inside the for loop, the code is accessing elements that are out of bounds of the array. For example, when i is equal to n-1, the expression nums[i] + nums[i+1] will access the element at index n, which is out of bounds. This will result in undefined behavior.

Incorrect count of subarrays: The current implementation only counts subarrays that are either length 1 or length 2. It does not count subarrays of length 3 or greater that sum to zero.

Redundant count: The current implementation is counting the number of individual occurrences of 0 in the array, as well as the number of subarrays of length 2 and length 3 that sum to zero. However, it is possible for some subarrays of length 2 and length 3 that sum to zero to include one or more 0s, so those subarrays will be counted twice.*/
