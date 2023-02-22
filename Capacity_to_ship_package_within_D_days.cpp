//1011. Capacity To Ship Packages Within D Days
//not executable 
//error
class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int l, r;
        for (int w: weights) {
            l = max(l, w);
            r += w;
        }
        int res=r, mid;

        bool ship(int mid, int days, vector<int> weights){
            int ships=1, curcap=mid, n=weights.size();
            for(int i=0; i<n;i++){
                if(curcap-weights[i]<0){
                    ships=ships+1;
                    curcap=mid;
                }
                else
                curcap=curcap-w;
                return ships<=days;
            }
        }

        while(l<=r){
           mid=(r+l)/2;
            if(ship(mid,days,weights)){
                res=min(res,mid);
                r=mid-1;
            }
            else {
                l=m+1;
            }
            return res;
        }
        
    }
};
