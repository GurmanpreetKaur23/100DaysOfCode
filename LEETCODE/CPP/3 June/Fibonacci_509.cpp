class Solution {
public:
    int fib(int n) {
        if(n==0 ){
            return 0 ;
        }
        if(n==1 ){
            return 1 ;
        }

        int ans = fib(n-1)+fib(n-2) ;
         return ans; 
    }
};

// GENERAL SOLUTION
#include<iostream>
using namespace std ;

int fibo(int nums) {
    if(nums ==0) {
        return 1 ;
    }
    if(nums==1) {
        return 2 ;
    }
    int prev2 = 0 ;
    int prev1 = 1 ;
    int current ;
    for(int i=3 ; i<=nums ; i++) {
        current = prev1 + prev2 ;
        prev2 = prev1 ;
        prev1 = current ;
    }
    return current ;
}

int main() {
    int n ; cin>>n ;
    cout<<fibo(n) ;
}
