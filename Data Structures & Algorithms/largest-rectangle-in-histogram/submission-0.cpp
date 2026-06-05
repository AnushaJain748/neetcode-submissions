class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        //    store indices
        stack<int> s;
        int nsc=0;
        int psc=-1;
        int area=0;
        int height=0;
        for(int i=0;i<heights.size();i++){
            while(!s.empty() && heights[i]<heights[s.top()])
            {
                height=heights[s.top()];
                nsc=i;
                s.pop();
                if(s.empty())
                psc=-1;
                else
                psc=s.top();
                area=max(area, height*(nsc-psc-1));

            }
            s.push(i);
        }
while(!s.empty()){
    nsc=heights.size();
    height=heights[s.top()];
    s.pop();
    if(s.empty())
    psc=-1;
    else
    psc=s.top();
    area=max(area, height*(nsc-psc-1));
}
        return area;
    }
};
