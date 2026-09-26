class Solution {
public:
    bool check(int i,int j,string s){
        while(i<j){
            if(s[i]!=s[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int left=0;
        int right=s.length()-1;

        while(left<right){
            if(s[left]==s[right]){
                left++;
                right--;
            }else{
                return check(left+1,right,s) ||check(left,right-1,s);
            }
        }
        return true;
    }
};