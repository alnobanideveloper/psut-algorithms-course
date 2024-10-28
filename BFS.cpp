#include<iostream>
#include<vector>
#include<queue>
using namespace std;

void BFS(int startNode , const vector<vector<int>>& adjList){
    int size = adjList.size();
    vector<bool> visited(size,false);
    queue<int>q;
    visited[startNode] = true;
    cout<<startNode<<" ";

    q.push(startNode);

    while(!q.empty()){
        int node = q.front();
        q.pop();

        for(int neighbor : adjList[node]){
            if(!visited[neighbor]){
                q.push(neighbor);
                cout<<neighbor<<" ";
                visited[neighbor] = true;
            }      
        }
    }



}

int main(){
    vector<vector<int>> adjList = {
        {1, 2},    // Neighbors of node 0
        {0, 3, 4}, // Neighbors of node 1
        {0, 4},    // Neighbors of node 2
        {1, 5},    // Neighbors of node 3
        {1, 2, 5}, // Neighbors of node 4
        {3, 4}     // Neighbors of node 5
    };

    BFS(2 , adjList);


    
    return 0;
}