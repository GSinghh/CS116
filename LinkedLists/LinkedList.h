#pragma once

template <class T>
class LinkedList
{
	protected:
		//declare the struct that represents a node
		struct ListNode
		{
			T data;
			ListNode * next;
		};
		//the list is represented by a pointer that holds the starting node on the list
		ListNode *head;
	public:
		//default constructor
		LinkedList(){head = nullptr;} //empty list to start
		~LinkedList();
		void appendNode(T);
		void displayList();
		void deleteNode(T);
		LinkedList(const LinkedList &orig);
		void copyList(const LinkedList&);
		

};

template <class T>
void LinkedList<T>::appendNode(T value)
{
	//add value to the end of the linked list
	//declare pointers
	ListNode * newNode; //represents new node to be added
	ListNode * nodePtr; // to "Walk" the list
	
	//allocate a new node and store value in data
	newNode = new ListNode;
	//store the value
	newNode->data = value;
	newNode->next = nullptr; //because it will be added at the end
	
	//two cases to consider
	//1. Empty List
	//2. Not empty List
	//check for empty list

	if (head == nullptr)
	{
		//Make this the first node
		head = newNode;
		
	}
	else //List is not empty, have to find the end of the list
	{
		//This new node goes at the end of the list
		// But i have to "Walk" (or traverse) the list to find the end
		//start at the beginning
		nodePtr = head;
		while(nodePtr->next) //While (nodePtr ->next != nullptr)
		{	
			//Watch the data
			cout << nodePtr->data << endl;
			//Move to the next node
			nodePtr = nodePtr->next;
		}
		//NodePtr now holds the address of the current last node
		//connect newNode after this one
		nodePtr->next = newNode;
	}
}

template <class T>
void LinkedList<T>::displayList()
{	
	//walk the list and print the data
	ListNode * nodePtr; //to walk the list
	//start at the first node
	nodePtr = head;
	//walk the list and print the data
	while(nodePtr)
	{
		//print the data at nodePtr
		cout << nodePtr->data << endl;
		//move to next node
		nodePtr = nodePtr->next;
	}
}

template <class T>
LinkedList<T>::~LinkedList()
{
	//Walk through the list and delete each node
	ListNode * nodePtr;
	ListNode * nextNode;	
	//start at the beginning of the list
	nodePtr = head;
	//Loop while there are nodes to delete
	while (nodePtr != nullptr)
	{
		//nodePtr is pointing to a node that has to be deleted
		//I need to save the address of next node before i delete it
		nextNode = nodePtr->next;
		delete nodePtr;
		//move to the next one
		nodePtr = nextNode;
	}
	
}

template <class T>
void LinkedList<T>::deleteNode(T value)
{
	//I want to delete node with this particular value in it
	ListNode *nodePtr; // my "Walker"
	ListNode *previous = nullptr; //needed to "Link around" deleted node
	//In case1, list is empty, do nothing
	if (head == nullptr)
		return;
	
	//In case2, delete value i am looking for
	if (head->data == value)
	{
		//delete the first value
		//this means "Second" becomes first
		nodePtr = head->next; //new "Head" of list
		delete head;
		head = nodePtr;
	}
	else //need to search list to find value
	{
		nodePtr = head;
		//skip all nodes that do not match value
		while (nodePtr != nullptr && nodePtr->data != value)
		{
			//save this node as previous
			previous = nodePtr;
			//move to next node
			nodePtr = nodePtr->next;
		}
		//This loop ends because ive found the value or got to the end
		// of the list
		//If not at end of list there was a match
		//Abd u beed ti re-link around it
		if(nodePtr != nullptr)
		{
			//delete Node at nodePtr
			previous->next = nodePtr->next;
			//delete node that wad found
			delete nodePtr;
		}
	}
}

template<class T>
void LinkedList<T>::copyList(const LinkedList& otherList)
{
	//cout << "copy constructor called" << endl;f
	ListNode* newNode;
	ListNode* nodePtr;
	ListNode* previous = nullptr;
	//make sure this list is empty ... is that needed?
	if (otherList.head == nullptr) //otherlist is empty
	{
	head = nullptr;
	}
	else
	{
		nodePtr = otherList.head;  //start at first node
		//copy first node
		//copy the first node
		head = new ListNode;
		head->data = nodePtr->data;
		head->next = nullptr;
		previous = head;
		//move to next node
		nodePtr = nodePtr->next;
		//copy remaining list
		while (nodePtr != nullptr)
		{
			newNode = new ListNode;
			newNode->data = nodePtr->data;
			newNode->next = nullptr;
			//connect to previous node
			previous->next = newNode;
			previous = newNode;
			nodePtr = nodePtr->next;
		} 
		//end while
	}
}

//copy constructor uses copylist
template <class T>
LinkedList<T>::LinkedList(const LinkedList &orig)
{
	//create a new list that is a COPY of orig
	head = nullptr;  //begin with empty list
	copyList(orig);
}

template <class T>
void LinkedList<T>::deleteAt(int pos)
{
	ListNode *nodePtr;
	ListNode *previous;
	nodePtr = head;
	previous = head;
	if (pos == 1)
	{
		head = head->next;
		delete nodePtr;	
	}
	else
	{
		for (int i = 1; i < pos; i++)
		{
			previous = nodePtr;
			nodePtr = nodePtr->next;
		}
		previous->next = nodePtr->next;
		delete nodePtr;
	}	
		
}

template <class T>
T& LinkedList<T>::get(int pos)
{
	ListNode *nodePtr;
	nodePtr = head;
	for(int i = 1; i < pos; i++)
	{
		nodePtr = nodePtr->next;
	}
	return nodePtr->data;
}
