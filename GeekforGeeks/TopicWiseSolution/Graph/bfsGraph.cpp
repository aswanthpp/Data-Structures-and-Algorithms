/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* You have to complete this function*/
void bfs(int s,vector<int> adj[],bool vis[])
{
   list<int>  bfslist;
    bfslist.push_back(s);
    vis[s]=true;
    
    while(bfslist.empty()!=true){
        int q=bfslist.front();
        cout<<q<<" ";
        bfslist.pop_front();
        
        vector<int>::iterator i;
        for(i=adj[q].begin();i!=adj[q].end();i++){
            if(vis[*i]!=true){
                vis[*i]=true;
                bfslist.push_back(*i);
            }
        }
    }
}