#include <bits/stdc++.h>
using namespace std;

struct Dir {
    int x, y;
    char move;
};

bool isValid(int r, int c, int n){
    return (r >= 0 && r < n && c >= 0 && c < n);
}

void rat_maze(int maze[][4], int row, int col, int n, vector<string> &ans, string path, vector<Dir> &dir){
    if(row == n-1 && col == n-1){
        ans.push_back(path);
        return;
    }

    maze[row][col] = 0;

    for(int i = 0; i < dir.size(); i++){
        int next_r = row + dir[i].x;
        int next_c = col + dir[i].y;

        if(isValid(next_r, next_c, n) && maze[next_r][next_c] == 1){
            path += dir[i].move;
            rat_maze(maze, next_r, next_c, n, ans, path, dir);
            path.pop_back();
        }
    }

    maze[row][col] = 1; 
}

int main(){
    int maze[4][4] = {
        {1,0,0,0},
        {1,0,0,1},
        {1,1,0,0},
        {0,1,1,1},
    };

    vector<Dir> dir = {
        {1,0,'D'},
        {-1,0,'U'},
        {0,-1,'L'},
        {0,1,'R'}
    };

    vector<string> ans;
    string path = "";
    int n = 4;

    rat_maze(maze, 0, 0, n, ans, path, dir);

    for(auto &p : ans) cout << p << endl;
}