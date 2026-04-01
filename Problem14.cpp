//14
//Longest common prefix
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        if(strs.empty()){return ans;}
        sort(strs.begin(),strs.end());
        string first =strs[0], last =strs[strs.size()-1];
        int len = min(first.length(), last.length());
    for(int i=0;i<len;i++)
    {
        if(first[i] != last[i])
        {
            break;
        }
        ans+=first[i];
    }
    return ans;
    }
};
