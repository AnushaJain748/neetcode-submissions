class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
       int i=0;
       int j=numbers.size()-1;
       while(i<j){
        if(numbers[j]+numbers[i]>target)
        j-=1;
        else if(numbers[j]+numbers[i]<target)
        i+=1;
        else
        break;
       }
       return {i+1,j+1}; 
    }
};
