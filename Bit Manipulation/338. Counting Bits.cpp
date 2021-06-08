//Ref: https://www.youtube.com/watch?v=awxaRgUB4Kw
//Time Complexity - O(N)
//Space Complexity - O(1)
class Solution {
public:
    vector<int> countBits(int num) {
        
        vector<int> res(num+1);
        
        res[0] = 0;
        
        for(int i = 1; i <= num; i++){
            if(i % 2 == 0){
                res[i] = res[i/2];
            }
            else{
                res[i] = res[i/2] + 1;
            }
        }
        return res;
    }
};
