class Solution {
public:
    int countPrimes(int n) {
        vector<bool> primeTrack(n+1, true);
        int count = 0;
        for(int i = 2; i < n; i++){
            if(primeTrack[i]){
                count++;
                for(int j = 2 * i; j<n; j += i){
                    primeTrack[j] = false;
                }
            }
        }
        return count;
    }
};