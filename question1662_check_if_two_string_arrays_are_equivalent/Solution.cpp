#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        return vector2String(word1) == vector2String(word2);
    }
private:
    string vector2String(vector<string> &word) {
        string result;
        for (auto tmp : word) {
            result += tmp;
        }
        return result;
    }
};