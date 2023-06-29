class Solution {
public:
    vector<int> arraysIntersection(vector<int>& arr1, vector<int>& arr2, vector<int>& arr3) {
        int hashmap[2001];
        memset(hashmap, 0, sizeof(hashmap));
        
        for (int i=0; i<arr1.size(); i++) {
            hashmap[arr1[i]]++;
        }
        
        for (int i=0; i<arr2.size(); i++) {
            hashmap[arr2[i]]++;
        }
        
        vector<int> result;
        result.clear();
        for (int i=0; i<arr3.size(); i++) {
            if (hashmap[arr3[i]] == 2) {
                result.push_back(arr3[i]);
            }
        }
                
        return result;
    }
};