//  
//   main.cpp   
//   graph representations  
//  
//   Created by alifar on 9/28/16.
//   Copyright © 2016 alifar. All rights reserved.
//

#include "adjacency_lists.hpp"

using namespace std;

int main(int argc, const char *argv[]){
	Graph<int> *graph = new Graph<int>();
	int item;

	cout << "Add vertices to the Graph: ";
	do{
		cin >> item;
		cout << "Id of item " << item << ": " << graph->add_vertex(item) << endl;
	} while(cin.get() != '\n');
	graph->display_vertices();

	cout << "Add edges to the graph using Ids of the vertices (Press enter when done): ";
	int i1, i2;
	do{
		cin >> i1;
		cin >> i2;
		graph->add_edge(i1, i2);
	} while(cin.get() != '\n');

	cout << endl;
	graph->display_lists();

	graph->remove_edge(0, 2);

	cout << endl;

	graph->display_lists();

}