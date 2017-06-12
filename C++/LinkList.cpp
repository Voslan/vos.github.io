#include <cstdlib>
#include <iostream>
#include "List.h"
using namespace std; 

int main(int argc, char** argv) {

	List node; 

	node.AddNode(3); 
	node.AddNode(5);
	node.AddNode(7);
	node.PrintList(); 

	node.DeleteNode(5);
	node.DeleteNode(7); 
	node.AddNode(1); 
	node.AddNode(2); 
	node.PrintList(); 

	system("pause");
	return 0; 
}