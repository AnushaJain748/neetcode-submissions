class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        priority_queue<int> m;
        double ans;
        for(int i=0;i<nums1.size();i++){
            m.push(nums1[i]);
        }
        for(int j=0;j<nums2.size();j++){
                m.push(nums2[j]);
        }
        int median;
        if((nums1.size()+nums2.size())%2==0)
        {
            while(m.size()>((nums1.size()+nums2.size())/2)+1)
            {
                m.pop();
            }
            double first= m.top();
            double second;
            if(!m.empty())
            {
                m.pop();
                second=m.top();
            }
        ans=(first+second)/2;
        }
        else
        {
             while(m.size()>((nums1.size()+nums2.size())/2)+1)
            {
                m.pop();
            }
            ans=m.top();
        }
        return ans;
    }
};
