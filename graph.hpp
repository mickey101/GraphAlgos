#ifndef GRAPH_HPP
#define GRAPH_HPP
#include <iostream> 
#include <vector> 
#include <map> 
#include <set> 
#include <string>

class vertex {
	
	//int index; 
	//std::vector<vertex> neighbours;
public:
	std::string name; 
	vertex();
	~vertex(){};

	/* data */
}; 

class edge{
public:
	int weight; 
	std::string data; 
	edge(); 
	~edge(){};	
};


class graph {
public:
	std::map<std::string,std::vector<edge>> Graph;
	graph(){}; 
	~graph(){}; 
	void addVertex(std::string nameNode); 
	void addVertex (vertex nameNode); 
	void addEdge(vertex a,vertex b); 
	vertex createVertex(std::string nameNode); 
	void printGraph(); 
	void BFS(vertex start);

}; 
void graph::addVertex(std::string nameNode) {
 
 	edge *dummy = new edge();
 	Graph[nameNode].push_back(*dummy); 
 }
 // overloaded addvertex method
 void graph::addVertex(vertex nameNode) {
 
 	edge *dummy = new edge();
 	Graph[nameNode.name].push_back(*dummy); 
 }

vertex graph::createVertex(std::string nameNode){
 	vertex *temp = new vertex(); 
 	temp->name = nameNode;
 	return *temp; 
 }
void graph::addEdge(vertex a,vertex b){
 	edge *temp = new edge(); 
 	temp->weight = 0; 
 	temp->data = b.name; 
 	Graph[a.name].push_back(*temp);
 }

void graph::printGraph(){
	typedef std::map<std::string, std::vector<edge>>::const_iterator MapIterator;
	typedef std::vector<edge>::const_iterator ListIterator;
	for (MapIterator iter = Graph.begin(); iter != Graph.end(); iter++){
    	std::cout << "Key: " << iter->first << std::endl << "Values:" << std::endl;
    	for (ListIterator list_iter = iter->second.begin()+1; list_iter != iter->second.end(); list_iter++)
        	std::cout << " " << (list_iter->data) << std::endl;
	}
}
// Work in Progress 
void graph::BFS(vertex start){
	std::cout << start.name; 
	std::set<std::string> visited; 
	visited.insert(start.name); 
	typedef std::map<std::string, std::vector<edge>>::const_iterator MapIterator;
	typedef std::vector<edge>::const_iterator ListIterator;


}

vertex::vertex(){
	name = "";  
}
edge::edge(){
	weight = 0; 
	data = ""; 
	//std::cout << "Error here! \n";
}


#endif
