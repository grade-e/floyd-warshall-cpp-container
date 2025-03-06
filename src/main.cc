#include <iostream>

#include "FloydWarshall.hpp"
using namespace std;

int main() {
    int n = 4;  // 정점 개수
    vector<vector<int>> dist = {
        {0, 3, INF, 7}, {8, 0, 2, INF}, {5, INF, 0, 1}, {2, INF, INF, 0}};

    FloydWarshall(dist, n);

    // 결과 출력
    cout << "Result matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (dist[i][j] == INF)
                cout << "INF ";
            else
                cout << dist[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}