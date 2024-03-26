#include <bits/stdc++.h>
using namespace std;
#define V 5
int travllingSalesmanProblem(int graph[][V], int s)
{
    vector<int> vertex;
    for (int i = 0; i < V; i++)
        if (i != s)
            vertex.push_back(i);
    int min_path = INT_MAX;
    do
    {
        int current_pathweight = 0;
        int k = s;
        for (int i = 0; i < vertex.size(); i++)
        {
            current_pathweight += graph[k][vertex[i]];
            k = vertex[i];
        }
        current_pathweight += graph[k][s];

        min_path = min(min_path, current_pathweight);

    } while (next_permutation(vertex.begin(), vertex.end()));

    return min_path;
}

int main()
{
    int graph[V][V] = {
        {0, 2, 7, 9, 6},
        {5, 0, 9, 7, 4},
        {3, 5, 0, 6, 9},
        {4, 5, 1, 0, 6},
        {7, 8, 3, 3, 0}
    };
    int s = 0;
    cout << travllingSalesmanProblem(graph, s) << endl << endl;
    return 0;
}
