class Solution {
public:
    bool checkPerfectNumber(int num) {
        
        int sum=0;
        int count=1;
        while(sum<=num && count<num){
            if(num%count==0){
                sum+=count;
            }
            // if(sum>num) return false;
            count++;
        }
        return sum==num;
    }
};