class Solution {
public:
    bool isVowel(char ch) {
        return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
    }
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        int cnt = 0;
        int n = words.size();
        vector<int> pref(n);

        for(int i=0; i<n; i++) {
            int len = words[i].length();
            if(isVowel(words[i][0]) && isVowel(words[i][len - 1])) cnt++;
            pref[i] = cnt;
        }

        vector<int> ans;
        for(auto query: queries) {
            int l = query[0], r = query[1];

            int sum = pref[r] - ((l > 0) ? pref[l - 1] : 0);
            ans.push_back(sum);
        } 
        return ans;
    }
};