
/**
 * @param {number[][]} costs
 * @return {number}
 */
var twoCitySchedCost = function (costs) {
    
    costs.sort((pairOne, pairTwo) => (pairOne[0] - pairOne[1]) - (pairTwo[0] - pairTwo[1]));
    const halfSize = costs.length / 2;
    let minCost = 0;

    for (let i = 0; i < halfSize; i++) {
        minCost += costs[i][0] + costs[i + halfSize][1];
    }
    return minCost;
};
