class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int flag=0;
        for(int i=digits.size()-1;i>=0;i--){
            if(digits[i]<9)
           { digits[i]+=1;
           flag=1;
           break;}
            else
           { digits[i]=0;
           }
        }
        if(flag==1)
        return digits;
        vector<int> v(digits.size()+1);
        v[0]=1;
        for(int i=0;i<digits.size();i++){
            v[i+1]=digits[i];
        }
        return v;
    }
};
