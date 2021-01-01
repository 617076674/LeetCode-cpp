#include <string>

using namespace std;

class Solution {
public:
    string interpret(string command) {
        string result;
        for (decltype(command.size()) i = 0; i != command.size(); ++i) {
            if (command[i] == 'G') {
                result += 'G';
            } else if (command[i] == '(') {
                if (command[i + 1] == ')') {
                    result += 'o';
                    ++i;
                }  else {
                    result += "al";
                    i += 3;
                }
            }
        }
        return result;
    }
};