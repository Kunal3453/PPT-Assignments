class Solution {
public:
    bool rotateString(string s, string goal) {
        bool check=false;
        string a="";
        for(int i=0;i<s.length();i++)
        {
            a=s;
            rotate(a.begin(),a.begin()+i,a.end());
            if(a==goal)
            {
                check=true;
                break;
            }
        }
        if(check==true)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};