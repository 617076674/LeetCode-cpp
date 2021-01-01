#include <vector>

using namespace std;

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        decltype(flowerbed.size()) i = 0;
        while (i < flowerbed.size()) {
            if (flowerbed[i] == 0 && (i == 0 || flowerbed[i - 1] == 0) && (i == flowerbed.size() - 1 || flowerbed[i + 1] == 0)) {
                if (--n <= 0) {
                    return true;
                }
                flowerbed[i] = 1;
            }
            i++;
        }
        return n <= 0;
    }
};