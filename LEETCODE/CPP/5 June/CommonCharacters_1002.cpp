class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<string> result ;

        for(char ch='a' ; ch<='z' ;ch++) {
            // only small case characters as mentioned in ques
            int min_count = INT_MAX ;

            for(string word : words) {
                int count = 0;
                for(char c : word) {
                    if(c == ch) {
                        count ++ ;
                    }
                }
                min_count = min(min_count , count) ;
            }
            for(int i=0 ; i<min_count ; i++) {
                string s(1 , ch) ; // empty string bnaani pyegi nahi ta push_back nahi chlega
                result.push_back(s) ;
            }
        }
        return result ;
    }
};
