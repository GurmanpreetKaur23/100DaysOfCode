class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        vector<int> remainder(k,0) ;
        // subarray directly divisible by k
        remainder[0] = 1;

        int sum=0 , count =0 ;

        for(int num:nums) {
            sum += num ;
            int remain = sum%k ;

            if(remain<0) {
                remain+=k ;
            }

            count+=remainder[remain] ;
            remainder[remain]++ ;
        } 
        return count ;
    }
};
