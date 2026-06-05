class Solution {
public:
    int reverse(int x) {
        // CHECK FROM YOUTUBE
        long ans=0;
          while(x!=0)
          {
           
            int rem=x%10;
            ans=ans*10+rem;
               if(ans<INT_MIN || ans>INT_MAX)
            return 0;
            x=x/10;
          
          }
          return int(ans);
    }
};
