class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        int n = hand.size() ;
        if(n % groupSize != 0) {
            return false ;  // splitting possible nahi hai
        }

        map<int , int> count ;
        for(int card : hand) {
            count[card]++ ; // card counting
        }

        for(auto it = count.begin() ; it !=count.end() ; it++) {
            int currCard = it->first ;
            int currCount = it->second ;

            if(currCount >0 ) {
                // return false ;
                for(int i=1 ;i<groupSize ; i++) {
                    if(count[currCard+i] < currCount) {
                        return false; //cards khatam 
                    }
                    count[currCard+i] -= currCount ;
                }
            }
        }
        return true ;
    }
};
