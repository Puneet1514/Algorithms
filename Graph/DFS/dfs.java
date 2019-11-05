import java.util.*; 

class dfs
{
	static LinkedList<Integer> adj[]; 
	// Constructor 
	dfs(int v) 
	{ 
		adj = new LinkedList[v]; 
		for (int i=0; i<v; ++i) 
			adj[i] = new LinkedList(); 
	} 

	//Function to add an edge into the graph 
	void addEdge(int v, int w) 
	{
		adj[v].add(w);
	}
	
	static void DFSUtil(int vertex, boolean visited[])
	{
		visited[vertex] = true;
		System.out.print(vertex + " ");

		Iterator<Integer> i =  adj[vertex].listIterator();
		while(i.hasNext())
		{
			int n = i.next();
			if(!visited[n])
			{
				DFSUtil(n,visited);
			}
		}
	}

	static void DFS(int n, int vertex)
	{
		boolean visited[] = new boolean[n];
		DFSUtil(vertex, visited);
	}
	public static void main(String args[])
	{
		dfs g = new dfs(4);

		g.addEdge(0, 1);
		g.addEdge(0, 2);
		g.addEdge(1, 2);
		g.addEdge(2, 0);
		g.addEdge(2, 3);
		g.addEdge(3, 3);
		DFS(4, 2);
	}
}
