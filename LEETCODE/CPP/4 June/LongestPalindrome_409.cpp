class Solution {
public:
    int longestPalindrome(string s) {
        int count = 0 ; 
        unordered_map<int ,int>map ;
        for(char x: s) {
            map[x]++ ;
        }

        int n = s.length() ;
        for(auto x:map) {
            if(x.second>1) {
                count+=x.second-(x.second%2) ;
            }
        }
        if(count<n) {count+=1 ;} 
        return count ;
    }
};
