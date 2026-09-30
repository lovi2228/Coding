class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& s) {
        vector<vector<int>>ans;
        sort(s.begin(),s.end());
        for(int i=0;i<s.size()-2;i++){
            if(i!=0 && s[i]==s[i-1]){
                // i++;
                continue;
            }
            int j=i+1;
            int k=s.size()-1;
            while(j<k){
                int sum=s[i]+s[j]+s[k];
                if(sum==0){
                    vector<int>temp={s[i],s[j],s[k]};
                    ans.push_back(temp);
                    j++;
                    k--;
                    while(j<k && s[j]==s[j-1]) j++;
                    while(j<k && s[k]==s[k+1]) k--;
                }
                else if(sum>0){
                    k--;
                }
                else{
                    j++;
                }
            }
        }
        return ans;

    }
};