#include <iostream>
#include <queue>
#define MAX 1001
using namespace std;

bool visited[MAX]; //방문 여부 조사
int map[MAX][MAX]; //graph의 연결을 나타내는 map
int n,m,v;
queue<int> q;

void rst() //방문 여부 초기화
{
    for(int i = 1 ; i <= n ; i++)
        visited[i] = 0;
}

void dfs(int x)
{
    visited[x] = true;
    cout << x << " ";

    for(int i = 1 ; i <= n ; i++){
        if(!visited[i] && map[x][i] == 1) {
            dfs(i); //dfs의 특징- 재귀
        }
    }

}

void bfs(int x) //queue를 이용한 bfs
{
    q.push(x);
    visited[x] = true;
    cout << x << " "; //일단 맨처음에 방문하는 x를 queue에 넣고 visited 표시 한 다음에

    while(!q.empty()){ //queue가 빌 때 까지 탐색시작
                        
        x = q.front(); //queue의 맨 앞을 x라는 하나의 후보로 만듦
        q.pop(); //x에 넣었으니 빼도됨 이걸 안빼면 계속 탐색을 못하겠지?

        for(int i = 1 ; i <= n ; i++){
            if(!visited[i] && map[x][i] == 1){
                q.push(i); //x라는 후보와 연결되어있으며, 방문한적 없는 노드를 queue의 뒤에 넣는다.
                visited[i] = true;
                cout << i << " ";
            } //해당 x에 대해서 다찾았으면 이제 for loop의 다음으로 넘어가서 판단하기~
        }
    }
}

int main()
{
    int a,b;
    cin >> n >> m >> v;
    for(int i = 0 ; i < m ; i++){
        cin >> a >> b;
        map[a][b] = 1;
        map[b][a] = 1; // node 3과 node 4가 연결되었으면 (3,4) (4,3) 모두 연결된것
    }
    rst();
    dfs(v);
    cout << '\n';
    rst();
    bfs(v);

    return 0;
}