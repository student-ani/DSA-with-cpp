/*Optimizing delivery routes for a logistic company
A logistic company needs to find the shortcut delivery routes between all its distribution centres located across multiple cities. The distance of time taken between each pair of of centers varies due to traffic, road conditions or geographical obstacles. the compnay aim to optimize delivery times between any two centres. Use the all pairs shortcut path algorithm determine the minimum delivery time.*/

#include <bits/stdc++.h>
using namespace std;

#define INF INT_MAX

// Function to create the initial distance matrix
vector<vector<int>> createDistanceMatrix(const vector<vector<int>>& A, int n) {
    vector<vector<int>> D(n, vector<int>(n, 0));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j)
                D[i][j] = 0;
            else if (A[i][j] == 0)
                D[i][j] = INF;
            else
                D[i][j] = A[i][j];
        }
    }
    return D;
}

// Floyd-Warshall algorithm implementation
vector<vector<int>> floydWarshall(const vector<vector<int>>& A) {
    int n = A.size();
    vector<vector<int>> D = createDistanceMatrix(A, n);

    for (int k = 0; k < n; k++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (D[i][k] != INF && D[k][j] != INF) {
                    // Check for integer overflow
                    if (D[i][k] + D[k][j] < D[i][j] || D[i][j] == INF) {
                        D[i][j] = D[i][k] + D[k][j];
                    }
                }
            }
        }
    }

    return D;
}

// Function to print the distance matrix
void printDistanceMatrix(const vector<vector<int>>& D) {
    cout << "Shortest distances between all pairs of vertices:" << endl;
    for (const auto& row : D) {
        for (int dist : row) {
            if (dist == INF)
                cout << setw(5) << "INF";
            else
                cout << setw(5) << dist;
        }
        cout << endl;
    }
}

int main() {
    vector<vector<int>> A = {
        {0, 5, INF, 10},
        {INF, 0, 3, INF},
        {INF, INF, 0, 1},
        {INF, INF, INF, 0}
    };

    vector<vector<int>> D = floydWarshall(A);
    printDistanceMatrix(D);

    return 0;
}  
