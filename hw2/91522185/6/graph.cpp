#ifndef _VECTOR_H_
#include <vector>
#endif

#ifndef _GRAPH_H_
#include "graph.h"
#endif

std::vector<int> ret;

Graph::Graph(const std::vector<int> &starts, const std::vector<int> &ends)
{
	if (starts.size() == ends.size())
	{
		this->beginnings = starts;
		this->endings = ends;
	}
}

int Graph::numOutgoing(const int nodeID) const
{
	int num = 0;
	for (unsigned int i = 0; i < beginnings.size(); ++i)
	{
		if (beginnings[i] == nodeID)
		{
			++num;
		}
	}
	return num;
}

const std::vector<int> &Graph::adjacent(const int nodeID) const
{
	for (unsigned int i = 0; i < beginnings.size(); ++i)
	{
		if (beginnings[i] == nodeID)
		{
			ret.push_back(endings[i]);
		}
	}
	return ret;
}

