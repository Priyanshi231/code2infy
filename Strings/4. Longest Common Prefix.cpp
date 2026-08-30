// 2 solutions
class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {

        int n = s.size();
        string ans = s[0];

        for(int i=1; i<n; i++){
            int j=0;

            while(j < ans.size() && j<s[i].size() && s[i][j] == ans[j]){
                j++;
            }
            ans = ans.substr(0,j);
        }
        return ans;
    }
};



class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        string ans = "";

        for(int i = 0; i < strs[0].size(); i++) {

            char ch = strs[0][i];

            for(int j = 1; j < strs.size(); j++) {

                if(i >= strs[j].size() || strs[j][i] != ch) {
                    return ans;
                }
            }

            ans += ch;
        }

        return ans;
    }
};
