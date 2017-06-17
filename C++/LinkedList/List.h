#pragma once
#ifndef LIST_H
#define LIST_H
#include <iostream>
using namespace std; 
class List {
private: 
	typedef struct node
	{
		int data; 
		node* next; 
	}* nodePtr; 

	nodePtr head; 
	nodePtr curr; 
	nodePtr temp; 

public: 
	List(); 
	void AddNode(int addData);
	void DeleteNode(int delData); 
	void SearchNode(int SeData); 
	void PrintList(); 
};


List::List() {
	head = NULL; 
	curr = NULL; 
	temp = NULL; 
}

void List::AddNode(int addData) {
	nodePtr n = new node;
	n->next = NULL; 
	n->data = addData; 

	if (head != NULL) {
		curr = head; 
		while (curr->next != NULL)
		{
			curr = curr->next; 
		}
		curr->next = n; 
	}
	else
	{
		head = n; 
	}
}

void List::DeleteNode(int delData) {
	nodePtr delN = NULL; 
	temp = head; 
	curr = head; 

	while (curr != NULL && curr->data != delData)
	{
		temp = curr; 
		curr = curr->next; 
	}

	if (curr == NULL)
	{
		cout << delData << " Is not in the list." << endl;
		delete delN; 
	}
	else {
		delN = curr; 
		curr = curr->next; 
		temp->next = curr; 
		delete delN; 
		cout << "the data " << delData << " Was deleted." << endl; 
	}
}

void List::SearchNode(int SeData) {
	curr = head; 
	while (curr->next != NULL && curr->data != SeData)
	{
		curr = curr->next; 
	}
	if (curr == NULL)
	{
		cout << SeData << " Is not in the list." << endl; 
	}
	else
	{
		cout << "This is the data you looking for: " << curr->data << endl; 
	}
}

void List::PrintList() {
	curr = head; 
	while (curr != NULL) {
		cout << curr->data << endl; 
		curr = curr->next; 
	}
}

#endif // !1


