class Solution {
public:
    double average(vector<int>& salary) {
        int n = salary.size(), min = salary[0], max=salary[0]; 
        double sum =0;
        for(int i=0;i<n;i++)
        {
            if (min>salary[i])
            min=salary[i];
            else if(max<salary[i])
            max=salary[i];
            sum=sum+salary[i];
        } 
        sum = sum - max - min;
        
     
return sum/(n-2);
    }
};
