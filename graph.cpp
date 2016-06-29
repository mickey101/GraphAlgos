#include <iostream> 
#include "graph.hpp"

using namespace std; 

int main(int argc, char const *argv[])
{
	graph *newGraph = new graph(); 
	vertex A = newGraph->createVertex("A"); 
	vertex B = newGraph->createVertex("B"); 
	vertex C = newGraph->createVertex("C");
	vertex D = newGraph->createVertex("D");
	vertex E = newGraph->createVertex("E");
	vertex F = newGraph->createVertex("F");
	vertex G = newGraph->createVertex("G");
	vertex H = newGraph->createVertex("H");

	newGraph->addVertex(A); 
	newGraph->addVertex(B); 
	newGraph->addVertex(C); 
	newGraph->addVertex(D); 
	newGraph->addVertex(E); 
	newGraph->addVertex("F"); 
	newGraph->addVertex("G"); 
	newGraph->addVertex("H"); 

	newGraph->addEdge(A,B);
	newGraph->addEdge(A,C); 
	newGraph->addEdge(A,D); 
	newGraph->addEdge(A,H);

	newGraph->addEdge(B,C); 
	newGraph->addEdge(B,F); 

	newGraph->addEdge(D,G); 
	newGraph->addEdge(D,D);

	newGraph->addEdge(G,H); 
	newGraph->addEdge(G,E); 

	newGraph->addEdge(E,G); 
	
	newGraph->addEdge(C,G); 
	newGraph->addEdge(C,E); 

	newGraph->printGraph();  
	/* code */
	return 0;
}