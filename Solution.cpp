
#include <vector>
using namespace std;

class Solution {
  
public:

    int twoCitySchedCost(vector<vector<int>>& costs) {

        auto compare = [](const vector<int>& pairOne, const vector<int>& pairTwo) {
            return (pairOne[0] - pairOne[1]) < (pairTwo[0] - pairTwo[1]);
        };

        sort(costs.begin(), costs.end(), compare);
        const size_t halfSize = costs.size() / 2;
        int minCost = 0;

        for (int i = 0; i < halfSize; i++) {
            minCost += costs[i][0] + costs[i + halfSize][1];
        }
        return minCost;
    }
};
