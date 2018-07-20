/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*
The structure of the class is as follows 
which contains an integer V denoting the no 
of vertices and a list of adjacency vertices.
class Graph
{
    int V;
    list<int> *adj;
public :
    Graph(int V);
    void addEdge(int v,int w);
    bool isCyclic();
};
*/
/*You are required to complete this method*/
bool isCycleUtil(int s,list <bool> vis){
    vis[s]=true;
    vector <int>::iterator i;
    for(int i=adj[s].begin();i!=adj[s].end();i++){
        if(vis[*i]!=true){
            isCycleUtil(i,vis);
        }
    }
}
bool Graph :: isCyclic()
{
//Your code here
 list <bool> vis[V];
 for(int i=0;i<V;i++){
     vis[i]=false;
 }
 for(int i=0;i<V;i++){
     for(int i=0;i<V;i++){
     vis[i]=false;
    }
     if(isCycleUtil(i,vis)==true){
         return true;
     }
 }
 return false;
 
}