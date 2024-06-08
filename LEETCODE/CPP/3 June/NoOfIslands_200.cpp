class Solution {
public:
    int numIslands(vector<vector<char>>&grid) {
    if(grid[0].empty() || grid.empty()) {
        return 0 ;
    }

    vector<pair<int , int>> directions = {{0,1} , {1,0} , {0,-1} , {-1,0}};
    queue<pair<int , int>> q ;
    int m = grid.size() ;
    int n = grid[0].size() ;
    int numIslands= 0 ;

    for(int i=0 ;i<m ;i++) {
        for(int j=0 ; j<n ; j++) {
            if(grid[i][j] == '1') {
                numIslands++ ;
            q.push({i,j}) ;

                while(!q.empty()) {
                    pair<int , int> cell = q.front() ;
                    q.pop() ;
                    int x = cell.first ;
                    int y = cell.second ;

                    if(x<0 || x>=m || y<0 || y>=n || grid[x][y]!='1') {
                        continue ;
                    }

                    grid[x][y] = '0' ;

                    for(int k=0 ; k<directions.size() ;k++) {
                        int nx = x + directions[k].first;
                        int ny = y + directions[k].second;

                        if(nx>=0 && nx<m && ny>=0 && ny<n && grid[nx][ny]=='1') {
                            q.push({nx,ny}) ;
                        } 
                    } 

                }
            }
        }
    }
    return numIslands ; 
}
};

// GENERAL SOLUTION
#include<iostream>
#include<queue>
#include<vector>
using namespace std ;
int numIslands(vector<vector<char>>&grid) {
    if(grid[0].empty() || grid.empty()) {
        return 0 ;
    }

    vector<pair<int , int>> directions = {{0,1} , {1,0} , {0,-1} , {-1,0}};
    queue<pair<int , int>> q ;
    int m = grid.size() ;
    int n = grid[0].size() ;
    int numIslands= 0 ;

    for(int i=0 ;i<m ;i++) {
        for(int j=0 ; j<n ; j++) {
            if(grid[i][j] == '1') {
                numIslands++ ;
                q.push({i,j}) ;

                while(!q.empty()) {
                    pair<int , int> cell = q.front() ;
                    q.pop() ;
                    int x = cell.first ;
                    int y = cell.second ;

                    if(x<0 || x>=m || y<0 || y>=n || grid[x][y]!='1') {
                        continue ;
                    }

                    grid[x][y] = '0' ;

                    for(int k=0 ; k<directions.size() ;k++) {
                        int nx = x + directions[k].first;
                        int ny = y + directions[k].second;

                        if(nx>=0 && nx<m && ny>=0 && ny<n && grid[nx][ny]=='1') {
                            q.push({nx,ny}) ;
                        } 
                    } 

                }
            }
        }
    }
    return numIslands ; 
}

int main() {
    int rows , columns ;
    cin>>rows>>columns ;
    vector<vector<char>> grid(rows , vector<char>(columns)) ;
    for(int i=0 ; i<rows ; i++) {
        for(int j=0 ; j<columns ; j++) {
            cin>>grid[i][j] ;
        }
    }
    int num_islands = numIslands(grid) ;
    cout<<num_islands ;
}
