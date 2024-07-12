#include <iostream>
#include <vector>
using namespace std;

class Graph
{
private:
    int numVertices;
    vector<vector<int>> adjMatrix; // adj matrix indicates each adge bw vrtcs i and j.

public:
    Graph(int vertices) : numVertices(vertices)
    {

        adjMatrix.resize(numVertices, vector<int>(numVertices, 0));
    }

    void addEdge(int src, int dest)
    {

        adjMatrix[src][dest] = 1;
        adjMatrix[dest][src] = 1;
    }

    void display()
    {
        for (int i = 0; i < numVertices; ++i)
        {
            cout << "Vertex " << i << " is connected to: ";
            for (int j = 0; j < numVertices; ++j)
            {
                if (adjMatrix[i][j] == 1)
                    cout << j << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    Graph graph(5);

    // Add edges
    graph.addEdge(0, 1);
    graph.addEdge(0, 4);
    graph.addEdge(1, 2);
    graph.addEdge(1, 3);
    graph.addEdge(1, 4);
    graph.addEdge(2, 3);
    graph.addEdge(3, 4);

    // Display the adjacency matrix
    graph.display();

    return 0;
}
