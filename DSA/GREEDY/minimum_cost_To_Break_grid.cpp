#include <bits/stdc++.h>
using namespace std;

// Function to compute the minimum cost to break a grid into unit squares
int minCostToBreakGrid(vector<int>& rowCuts, vector<int>& colCuts) {
    // Step 1: Sort both row and column cut costs in descending order
    sort(rowCuts.rbegin(), rowCuts.rend()); // Sort row cuts in descending order
    sort(colCuts.rbegin(), colCuts.rend()); // Sort column cuts in descending order

    // Step 2: Initialize segment counters
    int rowSegments = 1; // Initially, there's one continuous row segment
    int colSegments = 1; // Initially, there's one continuous column segment
    int i = 0, j = 0;    // Pointers for rowCuts and colCuts
    int cost = 0;        // Variable to store the total cost

    // Step 3: Process the cuts in greedy order (highest cost first)
    while (i < rowCuts.size() && j < colCuts.size()) {
        // Choose the larger cut cost to maximize savings
        if (rowCuts[i] >= colCuts[j]) {
            // Cutting along a row affects all column segments
            cost += rowCuts[i] * colSegments;
            rowSegments++; // Increases row segments
            i++; // Move to the next row cut
        } else {
            // Cutting along a column affects all row segments
            cost += colCuts[j] * rowSegments;
            colSegments++; // Increases column segments
            j++; // Move to the next column cut
        }
    }

    // Step 4: Process remaining row cuts (if any)
    while (i < rowCuts.size()) {
        cost += rowCuts[i] * colSegments; // Multiply cost by the affected segments
        i++; // Move to the next row cut
    }

    // Step 5: Process remaining column cuts (if any)
    while (j < colCuts.size()) {
        cost += colCuts[j] * rowSegments; // Multiply cost by the affected segments
        j++; // Move to the next column cut
    }

    // Step 6: Return the total minimum cost
    return cost;
}

// Main function to test the implementation
int main() {
    // Example row and column cut costs
    vector<int> rowCuts = {2, 1, 3, 1, 4}; // Cost to cut each row
    vector<int> colCuts = {4, 1, 2};       // Cost to cut each column
    
    // Compute and print the minimum cost to break the grid
    cout << "Minimum Cost: " << minCostToBreakGrid(rowCuts, colCuts) << endl;
    
    return 0;
}
