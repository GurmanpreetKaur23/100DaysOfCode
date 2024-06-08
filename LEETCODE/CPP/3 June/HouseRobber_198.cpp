class Solution {
public:
    int rob(vector<int>& nums) {
        int rob = 0 , norob = 0 ;
        for(int i=0 ; i<nums.size() ; i++) {
            int newrob = norob + nums[i] ;
            int nonewrob = max(rob , norob) ;
            rob = newrob ;
            norob = nonewrob ;
        }
        return max(rob , norob) ;
    }
};

// GENERAL SOLUTION
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;
 
int rob(vector<int>&nums) {
    int rob = 0 , norob = 0 ;
    for(int i=0 ; i<nums.size() ; i++) {
        int newrob = norob + nums[i] ;
        int newnorob = max(norob , rob) ;
        rob = newrob ;
        norob = newnorob ;
    }
    return max(rob , norob) ;
}
int main() {
    int n ; cin>>n ;
    vector<int> nums(n) ;
    for(int i=0 ; i<n ; i++) {
        cin>>nums[i] ;
    }
    cout<<rob(nums) ;
}
