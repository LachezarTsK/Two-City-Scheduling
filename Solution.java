
import java.util.Arrays;

public class Solution {

    public int twoCitySchedCost(int[][] costs) {

        Arrays.sort(costs, (pairOne, pairTwo) -> (pairOne[0] - pairOne[1]) - (pairTwo[0] - pairTwo[1]));
        final int halfSize = costs.length / 2;
        int minCost = 0;
        
        for (int i = 0; i < halfSize; i++) {
            minCost += costs[i][0] + costs[i + halfSize][1];
        }
        return minCost;
    }
}
