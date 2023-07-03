class Solution {
public:
    string reverseWords(string s) {
        string res="";
        string ans="";
        for(int i=0;i<s.length();i++)
        {
           
            if(s[i]==' ')
            {
                reverse(res.begin(),res.end());
                ans+=res+" ";
                res="";
            }
            else{
             res+=s[i];
             }
        }
        reverse(res.begin(),res.end());
        ans+=res;
        return ans;
    }
};