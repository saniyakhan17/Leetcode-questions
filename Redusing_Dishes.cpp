class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        int n =satisfaction.size();
        int ans=0, sum=0;
      // sorting in descending order
        sort(begin(satisfaction), end(satisfaction), greater<>());
        
        for (int i : satisfaction){
            sum=sum+i;
            if(sum<=0)
            return ans;
            ans=ans+sum;
        }
    return ans;
    }
};
