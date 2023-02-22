//1011. Capacity To Ship Packages Within D Days
//not executable 
//error


//         bool ship(int mid, int days, vector<int> weights){
//             int ships=1, curcap=mid, n=weights.size();
//             for(int i=0; i<n;i++){
//                 if(curcap-weights[i]<0){
//                     ships=ships+1;
//                     curcap=mid;
//                 }
//                 else
//                 curcap=curcap-w;
//                 return ships<=days;
//             }
//         }

     class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int l, r;
        for (int w: weights) {
            l = max(l, w);
            r += w;
        }
        int res=r, mid;
        while(l<=r){
           mid=(r+l)/2;
           int ships=1, curcap=mid, n=weights.size();
           for(int i=0; i<n;i++){
                if(curcap-weights[i]<0){
                    ships=ships+1;
                    curcap=mid;
                }
                else
                curcap=curcap-weights[i];
           }
                bool valid=ships<=days;
            if(valid){
                res=min(res,mid);
                r=mid-1;
            }
            else {
                l=mid+1;
            }
            return res;
        }
      return l;  
    }
};
