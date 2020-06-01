#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <math.h>
using namespace std;
 
void bfs(vector< vector<int> > & adjList, int source, int N ){
       
    // How we can save this ???
    vector<bool> visited( N, false); // everything is false till now!
   
    queue<int> q;
    visited[source] = true;
    q.push(source);
       
    while(! q.empty() ){
       
        // pop out first element and visit all the neighbours which were not visited yet
        // and also add them to queue
        int currentNode  = q.front();// 0
        cout<<"Visited : " << currentNode << endl;
        q.pop();
        // How do we find all neighbours ?
        int totalNeighbours = adjList[currentNode].size();//2
        for (int i=0;i<totalNeighbours;i++){
            int neighbourNode = adjList[currentNode][i];// 1, 2
           
            // if we have not visited this node !
            if( visited[neighbourNode] == false ){
                visited[neighbourNode] = true;
                q.push(neighbourNode);
            }  
        }
    }
   
}
 
int main(){
   
    int N = 6;
    vector< vector<int> > adjList(N) ;
    adjList[0].push_back(1);
    adjList[0].push_back(2);
    adjList[0].push_back(4);
   
    adjList[1].push_back(3);   
    adjList[2].push_back(3);
    adjList[3].push_back(4);
    adjList[3].push_back(5);
 
    bfs(adjList, 0, N);
               
    return 0;
}