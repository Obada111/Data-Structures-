#include "Graph.h"
#include <iostream>
#include <vector>
#include <queue>
#include <climits>
#include <algorithm>

Graph::Graph(int numNodes) {
    m_Size = numNodes;
    m_AdjMatrix = new int*[m_Size];
    for (int i = 0; i < m_Size; i++) {
        m_AdjMatrix[i] = new int[m_Size];
        for (int j = 0; j < m_Size; j++) {
            m_AdjMatrix[i][j] = 0;
        }
    }
    visited = new bool[m_Size];
    dist = new int[m_Size];
    prev = new int[m_Size];
}

Graph::~Graph() {
    for (int i = 0; i < m_Size; i++) {
        delete[] m_AdjMatrix[i];
    }
    delete[] m_AdjMatrix;
    delete[] visited;
    delete[] dist;
    delete[] prev;
}

void Graph::addEdge(int node1, int node2, int wgt, bool dir) {
    if (node1 >= 0 && node1 < m_Size && node2 >= 0 && node2 < m_Size) {
        m_AdjMatrix[node1][node2] = wgt;
        if (!dir) {
            m_AdjMatrix[node2][node1] = wgt;
        }
    }
}

void Graph::printAdjMatrix() {
    for (int i = 0; i < m_Size; i++) {
        for (int j = 0; j < m_Size; j++) {
            std::cout << m_AdjMatrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

bool Graph::isConnected(int node1, int node2) {
    return m_AdjMatrix[node1][node2] != 0;
}

void Graph::dfs(int startNode) {
    visited[startNode] = true;
    std::cout << startNode << " ";
    
    for (int i = 0; i < m_Size; i++) {
        if (!visited[i] && isConnected(startNode, i)) {
            dfs(i);
        }
    }
}

void Graph::traverseDFS_rec(int startNode) {
    for (int i = 0; i < m_Size; i++) {
        visited[i] = false;
    }
    dfs(startNode);
}

void Graph::traverseDFS(int startNode) {
    for (int i = 0; i < m_Size; i++) {
        visited[i] = false;
    }
    
    std::stack<int> stack;
    stack.push(startNode);
    visited[startNode] = true;
    
    while (!stack.empty()) {
        int node = stack.top();
        stack.pop();
        std::cout << node << " ";
        
        for (int i = 0; i < m_Size; i++) {
            if (isConnected(node, i) && !visited[i]) {
                stack.push(i);
                visited[i] = true;
            }
        }
    }
}

void Graph::traverseBFS(int startNode) {
    for (int i = 0; i < m_Size; i++) {
        visited[i] = false;
    }
    
    std::queue<int> queue;
    queue.push(startNode);
    visited[startNode] = true;
    
    while (!queue.empty()) {
        int node = queue.front();
        queue.pop();
        std::cout << node << " ";
        
        for (int i = 0; i < m_Size; i++) {
            if (isConnected(node, i) && !visited[i]) {
                queue.push(i);
                visited[i] = true;
            }
        }
    }
}

void Graph::shortestPathDijkstras(int src) {
    const int INFINITY = INT_MAX;
    
    for (int i = 0; i < m_Size; i++) {
        dist[i] = INFINITY;
        prev[i] = -1;
        visited[i] = false;
    }
    
    dist[src] = 0;
    
    for (int i = 0; i < m_Size; i++) {
        int u = findUnvisitedNodeWithMinDistance();
        if (u == -1) break;
        
        visited[u] = true;
        
        for (int v = 0; v < m_Size; v++) {
            if (!visited[v] && m_AdjMatrix[u][v] != 0) {
                int newDist = dist[u] + m_AdjMatrix[u][v];
                if (newDist < dist[v]) {
                    dist[v] = newDist;
                    prev[v] = u;
                }
            }
        }
    }
}

int Graph::findUnvisitedNodeWithMinDistance() {
    int minDist = INT_MAX;
    int minIndex = -1;
    
    for (int i = 0; i < m_Size; i++) {
        if (!visited[i] && dist[i] <= minDist) {
            minDist = dist[i];
            minIndex = i;
        }
    }
    
    return minIndex;
}

void Graph::printShortestPaths() {
    for (int i = 0; i < m_Size; i++) {
        std::cout << "Shortest path to " << i << ": ";
        if (dist[i] == INT_MAX) {
            std::cout << "No path" << std::endl;
        } else {
            std::vector<int> path;
            int current = i;
            while (current != -1) {
                path.push_back(current);
                current = prev[current];
            }
            
            for (int j = path.size() - 1; j >= 0; j--) {
                std::cout << path[j];
                if (j > 0) std::cout << " -> ";
            }
            std::cout << " (Distance: " << dist[i] << ")" << std::endl;
        }
    }
}