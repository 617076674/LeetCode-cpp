#include <vector>

using namespace std;

class Solution {
public:
    int maximumWealth(vector<vector<int>> &accounts) {
        int max = 0;
        for (int i = 0; i < accounts.size(); ++i) {
        	vector<int> account = accounts[i];
        	int tmp = 0;
        	for (int j = 0; j < account.size(); ++j) {
        		tmp += account[j];
        	}
        	if (tmp > max) {
        		max = tmp;
        	}
        }
        return max;
    }
};