class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, bool> mp;

        for (auto& el : nums) {
            if (mp.find(el) == mp.end()) {
                mp[el] = true;
            }
            else {
                return true;
            }
        }

        return false;
    }
};