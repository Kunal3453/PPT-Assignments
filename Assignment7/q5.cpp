class Solution {
public:
    string reverseStr(string s, int k) {
         for (int i = 0; i < s.size(); i += 2 * k) {
            int a = i, b = min(i + k, (int)s.size());
            reverse(s.begin() + a, s.begin() + b);
        }
        return s;
    }
};