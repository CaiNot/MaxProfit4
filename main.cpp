#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    int maxProfit(int k, vector<int> &prices) {
        int lenPrices = prices.size(), ans = 0;
        if (lenPrices < 2)
            return 0;
        int f[lenPrices][lenPrices];

        for (int i = 0; i < lenPrices; i++) {
            for (int j = 0; j < lenPrices; j++) {
                f[i][j] = 0;
            }
        }
        int mn;
        for (int i = 0; i < lenPrices - 1; i++) {
            mn = prices[i];
            for (int j = i + 1; j < lenPrices; j++) {
                f[i][j] = max(f[i][j - 1], prices[j] - mn);
                mn = min(mn, prices[j]);
            }
        }
        int needNums = k * 2;
//        for (int i = 0; i <= needNums; i++) {
//            while ()
//        }
//        wmemset(f,)

    }
private:
    void getAns(int k){

    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}