class Solution {
public:
    string addStrings(string a, string b) {
    string res="";
        int i=a.length()-1;
        int j=b.length()-1;
        int carry=0;
        while(i>=0||j>=0)
        {
            int sum=carry;
            if(i>=0)
            {
                sum+=(a[i]-'0');
                i--;
            }
            if(j>=0)
            {
                sum+=(b[j]-'0');
                j--;
            }
            carry=sum/10;
            sum=sum%10;
            res=to_string(sum)+res;
        }
        if(carry)
        {
            res=to_string(carry)+res;
        }
        return res;
        
    }
};