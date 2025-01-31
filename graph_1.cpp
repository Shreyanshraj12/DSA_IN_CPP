#include<bits/stdc++.h>
using namespace std;

 vector<list<int>> graph;
 int v;  // no of vertices



void add_edge(int src, int dest, bool bi_dir = true){
    graph[src].push_back(dest);
    if(bi_dir){
        graph[dest].push_back(src);
    }
}


void display(){
    for(int i = 0; graph.size(); i++){
        cout<<i<<"--> ";
       for(auto ele : graph[i]){
        cout<<ele<<" , ";
       }
       cout<<endl;
    }
}

int main(){
   int s,d,e;
    cin>>v;
    graph.resize(v, list<int>());
    cin>>e;
    while(e--){
        cin>>s>>d;
        add_edge(s,d,false);
    }
display();
 

}