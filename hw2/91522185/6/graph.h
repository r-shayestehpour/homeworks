#ifndef _VECTOR_H_
#include <vector>
#endif

#ifndef _GRAPH_H_
#define _GRAPH_H_ 0

class Graph
{
	private:
		std::vector<int> beginnings, endings;
	public:
		Graph::Graph(const std::vector<int> &starts, const std::vector<int> &ends);
		int Graph::numOutgoing(const int nodeID) const;
		const std::vector<int> &Graph::adjacent(const int nodeID) const;

};

#endif