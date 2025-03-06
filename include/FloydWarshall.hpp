#pragma once

#include <limits>
#include <vector>

using namespace std;

constexpr int INF = numeric_limits<int>::max();

void FloydWarshall(vector<vector<int>>& dist, int n) {
    for (int k = 0; k < n; k++) {          // 경유점
        for (int i = 0; i < n; i++) {      // 출발점
            for (int j = 0; j < n; j++) {  // 도착점
                if (dist[i][k] != INF && dist[k][j] != INF) {
                    dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
                }
            }
        }
    }
}