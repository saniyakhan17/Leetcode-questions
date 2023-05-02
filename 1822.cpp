//Sign of the Product of an Array
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int n = nums.size();
        double pro=1;
        for (int i=0; i<n; i++){
            pro=pro*nums[i];
        }
        if(pro>0)
        return 1;
        else if(pro<0)
        return -1;
        else 
        return 0;
    }
};
