import java.util.LinkedList;
import java.util.Queue;
import java.util.Iterator;

class bfs
{
	static LinkedList<Integer> adj[]; //Adjacency Lists 

	// Constructor 
	bfs(int v) 
	{ 
		adj = new LinkedList[v]; 
		for (int i=0; i<v; ++i) 
			adj[i] = new LinkedList(); 
	} 

	// Function to add an edge into the graph 
	void addEdge(int v,int w) 
	{ 
		adj[v].add(w); 
	} 

	static void print_bfs(int vertex, int n)
	{
		Queue<Integer> queue = new LinkedList<Integer>();
		boolean visited[] = new boolean[n];

		for(int i = 0; i < n; i++)
		{
			visited[i] = false;;
		}
	       	queue.add(vertex);
		visited[vertex] = true;
		while(queue.size() > 0)
		{
			int s = queue.poll();
			System.out.print(s + " ");
			Iterator<Integer> i = adj[s].listIterator();
			while(i.hasNext())
			{
				int n1 = i.next();
				if(!visited[n1])
				{
					visited[n1] = true;
					queue.add(n1);
				}
			}
		}	
	}

	public static void main(String args[])
	{
		bfs g = new bfs(4); 

		g.addEdge(0, 1); 
		g.addEdge(0, 2); 
		g.addEdge(1, 2); 
		g.addEdge(2, 0); 
		g.addEdge(2, 3); 
		g.addEdge(3, 3); 

		print_bfs(2,4);

	}
}
