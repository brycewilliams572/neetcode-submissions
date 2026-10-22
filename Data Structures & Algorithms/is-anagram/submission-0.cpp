class Solution {
public:
    bool isAnagram(string s, string t) {
        std::map<char, int> map1;
        std::map<char, int> map2;

        if (s.size() != t.size()) return false;

        for (auto& iter : s){
            map1[iter] += 1;
        }

        for (auto& iter1 : t){
            map2[iter1] += 1;
        }

        for (auto& [key, value] : map1){
            if (map2[key] != value) return false;
        }

        return true;
        
    }
};
