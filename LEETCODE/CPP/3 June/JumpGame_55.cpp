class Solution {
public:
    bool canJump(vector<int>& nums) {
        int farthest = 0;
        for(int i=0 ; i<nums.size() ; i++) {
            if(i>farthest) {
                return false ;
            }
            farthest = max(farthest, nums[i]+i) ;
        }
        return true ;
    }
};

// GENERAL SOLUTION
#include<iostream>
#include<vector>
using namespace std ;

bool canJump(vector<int>&nums) {
    int farthest =0 ;
    int n = nums.size() ;
    for(int i=0 ; i<n ; i++) {
        if(i>farthest) {
            return false ;
        }
        farthest = max(farthest , nums[i]+1 ) ;
    }
    return farthest>=n-1 ;
}
int main() {
    int n ; cin>>n ;
    vector<int> nums(n) ;
    for(int i=0 ; i<n ; i++) {
        cin>>nums[i] ;
    }
    if(canJump(nums)) {
        cout<<"true" ;
    }
    else {
        cout<<"false" ;
    }
}
