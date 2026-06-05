class Solution {
public:
    bool checkInclusion(string s1, string s2) {
    //   if cant recall check excel

    //   use two frequency vectors s1 and total


//store freq of s1 first, then loop through s2 with window of s1 and compare both vector. if matches return true;
    //best part is time complexity o(n) and space complexity o(1)
    vector<int> total(26,0);
    vector<int> window(26,0);
    for(int i=0;i<s1.size();i++){
        total[s1[i]-'a']+=1;
    }
    for(int i=0;i<s2.size();i++){
        window[s2[i]-'a']++;
        if(i>=s1.size())
        {
            window[s2[i-s1.size()]-'a']-=1;
        }
        if(window==total)
        return true;
    }
    return false;
    }
};

// class Solution {
// public:
//     bool checkInclusion(string s1, string s2) {
//         if (s1.length() > s2.length()) return false;

//         vector<int> countS1(26, 0), countWindow(26, 0);

//         for (char c : s1) countS1[c - 'a']++;

//         for (int i = 0; i < s2.length(); ++i) {
//             countWindow[s2[i] - 'a']++;

//             if (i >= s1.length())
//                 countWindow[s2[i - s1.length()] - 'a']--;

//             if (countS1 == countWindow)
//                 return true;
//         }
//         return false;
//     }
// };
