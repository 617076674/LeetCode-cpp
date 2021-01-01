#include <vector>
#include <string>
#include <set>

using namespace std;

class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        set<char> set;
        for (auto c : allowed) {
            set.insert(c);
        }
        int result = 0;
        for (auto word : words) {
            bool flag = true;
            for (auto c : word) {
                if (set.find(c) == set.end()) {
                    flag = false;
                    break;
                }
            }
            if (flag) {
                result++;
            }
        }
        return result;
    }
};