void primMST(int graph[V][V]) 
{ 
    // Array to store constructed MST 
    int parent[V];  
    // Key values used to pick minimum weight edge in cut 
    int key[V];  
    // To represent set of vertices not yet included in MST 
    bool mstSet[V];  
  
    for (int i = 0; i < V; i++) 
        key[i] = INT_MAX, mstSet[i] = false; 
        
    key[0] = 0;      
    parent[0] = -1; 
  
    for (int count = 0; count < V-1; count++) 
    { 
     
        int u = minKey(key, mstSet); 
        mstSet[u] = true; 
        for (int v = 0; v < V; v++) 
        if (graph[u][v] && mstSet[v] == false && graph[u][v] < key[v]) 
            parent[v] = u, key[v] = graph[u][v]; 
    } 
  
    // print the constructed MST 
    printMST(parent, V, graph); 
} 
