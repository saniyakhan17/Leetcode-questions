class Solution {
public:
    bool isPalindrome(int x) {
        
        if(x<0)
        return 0;

        int n=x;
         long int rev=0, rem;
        while(n!=0)
        {
            rem = n%10;
            rev = (rev*10)+rem;
            n = n/10;
        }
        return rev==x;
        
    }
};
