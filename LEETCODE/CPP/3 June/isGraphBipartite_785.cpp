class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size() ;
        vector<int> color(n , -1) ;
        for(int i=0 ; i<n ; i++) {
            if(color[i]==-1) {
                queue<int> q ;
                q.push(i) ;
                color[i] = 0 ;

                while(!q.empty()) {
                    int node = q.front() ;
                    q.pop() ;
                    for(int neighbor : graph[node]) {
                        if(color[neighbor]==-1) {
                            color[neighbor] = 1 - color[node] ;
                            q.push(neighbor) ;
                        }
                        if(color[neighbor]==color[node]) {
                            return false ;
                        }
                    }
                }
            }
            }
        return true ;
    }
};

// GENERAL SOLUTION
#include<iostream>
#include<vector>
#include<queue>
using namespace std ;

bool isBipartite(vector<vector<int>> &graph , int n) {
    vector<int> color(n,-1) ;
    for(int i=0 ; i<n ; i++) {
        if(color[i]==-1) {
            queue<int> q ;
            q.push(i) ;
            color[i] = 0 ;

            while(!q.empty()) {
                int node = q.front() ;
                q.pop() ;

                for(int neighbor : graph[node]) {
                    if(color[neighbor]==-1) {
                        color[neighbor] = 1-color[node] ;
                        q.push(neighbor) ;
                    }
                    else if(color[neighbor] == color[node]) {
                        return false ;
                    }
                }
            } 
        }
    }
    return true ;

}

int main() {
    int n , m ; cin>>m>> n;
    vector<vector<int>> graph(n) ;

    for(int i=0 ; i<n ; i++) {
        int u , v ; cin>>u>>v ;
        graph[u].push_back(v) ;
        graph[v].push_back(u) ;
    }

    if(isBipartite(graph , n)) {
        cout<<"true" ;
    }
    else {
        cout<<"false" ;
    }
}
