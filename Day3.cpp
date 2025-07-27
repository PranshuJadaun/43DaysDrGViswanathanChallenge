class Solution {
public:
    bool isPalindrome(string s) {
        int i=0;
        
        vector<char> str;
        for(int k=0;k<s.length();k++){
            if((s[k]>='a'&& s[k]<='z') || (s[k]>='0' && s[k]<='9')){
                str.push_back(s[k]);
            }
            else if(s[k]>='A' && s[k]<='Z'){
                str.push_back(s[k]+32);
            }
            else{
                continue;
            }
        }
        int j = str.size()-1;
        while(i<j){
            if(str[i]!=str[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};