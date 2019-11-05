import java.util.*;

class dfs_using_stack
{
	LinkedList<Integer> adj[];
	dfs_using_stack(int v)
	{
		adj = new LinkedList[v];
		for(int i = 0; i < v; i++)
			adj[i] = new LinkedList();
	}
	void addEdge(int v, int w)
	{
		adj[v].add(w);
	}

	void DFS(int n, int vertex)
	{
		Stack<Integer> st = new Stack<Integer>();
		Vector<Boolean> visited = new Vector<Boolean>();
		for(int i = 0; i < n; i++)
		{
			visited.add(false);
		}
		st.push(vertex);
		while(st.size() > 0)
		{
			int s = st.pop();
			if(!visited.get(s))
			{
				System.out.print(s + " ");
				visited.set(s, true);
			}
			Iterator<Integer> it = adj[s].listIterator();

			while(it.hasNext())
			{
				int v = it.next();
				if(!visited.get(v))
					st.push(v);
			}
		}
	}

	public static void main(String args[])
	{
		dfs_using_stack g = new dfs_using_stack(5);


		g.addEdge(1, 0); 
		g.addEdge(0, 2); 
		g.addEdge(2, 1); 
		g.addEdge(0, 3); 
		g.addEdge(1, 4); 

		g.DFS(5, 0);
	}
}
