class Solution {
public:
    bool palo(int i,int j,string s){
        while(i<j){
            if(s[i]!=s[j]) return false;
            else{
                i++;
                j--;
            }
        }
        return true;
    }
    bool validPalindrome(string s) {
        int i=0;
        int j=s.size()-1;
        
        while(i<j){
            if(s[i]!=s[j]) return palo(i+1,j,s) || palo(i,j-1,s);
            i++;
            j--;
        }
        return true;
    }
};