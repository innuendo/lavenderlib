#include <vector>
#include "macros.h"

// template class for graph representation

template <class V, class E>
struct Graph {
	
	struct Ed : E {
		int v; //vertex number
//		int rev; //stores informatioon where given vertex is located in the other's coincidence list
		Ed(E p, int w) : E(p), v(w) {};
	};
	
	struct Ve : V, std::vector<Ed> {}; //iterate through edges containing given vertex like FOREACH(it, g[v])
	
	std::vector<Ve> g; // set of vertices
	
	Graph(int n = 0) : g(n) {} //constructor
	
	void EdgeD(int b, int e, E d = E()) { // adds directed edge from b to e with weight d
		g[b].PB(Ed(d, e));
	}
	
	void EdgeU(int b, int e, E d = E()) { //adds undirected edge from b to e with weight d
		//!!! when using undirected version uncommment int rev in struct Ed
		Ed eg(d, e); 
		eg.rev = SIZE(g[e]) + (b == e);
		g[b].PB(eg);
		eg.rev = SIZE(g[eg.v = b]) - 1; 
			g[e].PB(eg)
	}
	
	void write() { //prints graph
		REP(x, SIZE(g)) {
			cout << x << ":";
			FOREACH(it, g[x]) cout << " " << it->v;
			cout << endl;
		}
	}
};