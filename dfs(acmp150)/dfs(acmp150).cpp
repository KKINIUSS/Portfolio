#include <iostream>
#include<vector>

using namespace std;

vector<bool> visited;

vector<vector<int> > g;

int c=0;

void dfs(int start){

    visited[start] = true;

    c++;

    for (auto u : g[start]){

        if (!visited[u]) {

            dfs(u);

        }

    }

}

int main() {

    int n,dr;

    int a;

    cin>>n>>dr;

    g.assign(n,vector<int>());

    for(int i=0;i<n;i++){

        visited.push_back(false);

        for(int j=0;j<n;j++){

            cin>>a;

            if (a==1)

                g[i].push_back(j);

        }

    }

    dfs(dr-1);

    cout <<c-1;

    return 0;
}
