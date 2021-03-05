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

    int n,k;

    int a;

    cin>>n>>k;

    vector<bool> lost (1+n,false);

    while(true){

        int faster;

        cin>>faster;

        if (faster==0){

            break;

        }

        int slower;

        cin>>slower;

        lost[slower]= true;

    }

    for (int i=1;i<=n;i++){

        if (i!=k){

            if (!lost[i]){

                cout<<("No");

                return 0;

            }

        }

    }

    cout<<"Yes";

    return 0;

}
