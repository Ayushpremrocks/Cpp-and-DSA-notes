#include<bits/stdc++.h>
using namespace std;
int main(){
    int h,w,x,y; cin>>h>>w>>x>>y;
    string t; cin>>t;
    char table[h+1][w+1];
    for(int i=1;i<=h;i++){
        for(int j=1;j<=w;j++){
            cin>>table[i][j];
        }
    }
    set<pair<int,int>> visited;
    if(table[x][y]=='@') visited.insert({x,y});
    for(int i=0;i<t.size();i++){
        char movement = t[i];
        int tempx = x;
        int tempy = y;
        if(movement=='U' && x>1 && table[x-1][y]!='#'){
            tempx = x-1;
        }else if(movement=='D' && x<h && table[x+1][y]!='#'){
            tempx = x+1;
        }else if(movement=='L' && y>1 && table[x][y-1]!='#'){
            tempy = y-1;
        }else if(movement=='R' && y<w && table[x][y+1]!='#'){
            tempy = y+1;
        }
        x=tempx; y=tempy;
        if(table[x][y]=='@') visited.insert({x,y});
    }
    cout<<x<<" "<<y<<" "<<visited.size()<<endl;
}

//claude code

#include<bits/stdc++.h>
using namespace std;

int main() {
    int h, w, x, y;
    cin >> h >> w >> x >> y;
    
    vector<vector<char>> table(h+1, vector<char>(w+1));
    for(int i = 1; i <= h; i++) {
        string row;
        cin >> row;
        for(int j = 1; j <= w; j++) {
            table[i][j] = row[j-1];
        }
    }
    
    string t;
    cin >> t;
    
    set<pair<int,int>> visited;
    if(table[x][y] == '@') visited.insert({x,y});
    
    for(char movement : t) {
        int tempx = x;
        int tempy = y;
        
        if(movement == 'U' && x > 1 && table[x-1][y] != '#') {
            tempx = x-1;
        } else if(movement == 'D' && x < h && table[x+1][y] != '#') {
            tempx = x+1;
        } else if(movement == 'L' && y > 1 && table[x][y-1] != '#') {
            tempy = y-1;
        } else if(movement == 'R' && y < w && table[x][y+1] != '#') {
            tempy = y+1;
        }
        
        x = tempx;
        y = tempy;
        if(table[x][y] == '@') visited.insert({x,y});
    }
    
    cout << x << " " << y << " " << visited.size() << endl;
    return 0;
}