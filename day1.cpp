#include <iostream>
#include <cstdio>
#include <cstdlib>

// 100 Days of Code Day 1

/* One of my favorite data structures was doubly linked lists. Reversing them is always something of a problem for me, mostly because the course I was taking blew through linked lists so quickly to get to Hash Maps, I didn't really have enough time to wrap my head around them. I debated strongly with myself whether to do this in C or C++, or even go nuts and try to write it in python or javascript. I may come back again in a little while and do it in another language to flex my noggin and rearrange my thoughts with the new language. I've done it so many times in C in school, I decided to go with C++. 
	I  was unable to finish the whole thing in one sitting, time was limited, so I made a note to come back and finish this for Day 2 when I will have a little more time in the evening. I may also start a new project.

*/

using namespace std;

// recursive list

struct Node 
{
	int data;
	struct Node *prev;
	struct Node *next;

}*head, *tail;

class DLL
{
public:
	
	void createDLL(int x);
	int insertData(int x, int pos);
	int addToHead(int x);
	int addToTail(int x);
	void display();
	void count();
	void deleteElement(int x);
	void reverseList();
	int search(int x);
	int comp(int a,  int b);


	DLL() { 
		head = NULL;
		tail = NULL; // Strictly if going for a cyclical linked list. 
		// head = tail = NULL;
	}

	~DLL() { 
		delete head;
		// delete tail; -- only for circular lists, not doing that today
	}

}

int DLL::comp(int a, int b) { 
	if(a > b) return 1;
	else return -1;
}


void DLL::createDLL(int x)
{
	struct Node *s, *temp;
	temp = new(struct Node);
	temp->data = x;
	temp->next = NULL;
	if(head == NULL) {
		temp->prev = NULL;
		head = temp;

	} else { 

		s = head; 
		while(s->next != NULL)
			s = s->next;
		s->next = temp;
		temp->prev = s;
	}
}

void DLL::addToHead(int x)
{
	if(head == NULL) { 
		cout << "You must create a list first." << endl;
		return;
	}

	struct Node = *temp;
	temp = new(struct Node);
	temp->prev = NULL;
	temp->data = x;
	temp->next = head;
	head->prev = temp;
	head = temp;
	cout << "Element added to head of list." << endl;
}

void DLL::addToTail(int x) 
{
	if(head == NULL) { 
		cout << "You must create a list first." << endl;
	}

	else { 
		cout << "This feature may not be implemented today due to a lack of time. Check back soon!"

	}

}


void DLL::insertData(int x, int pos) { 
	if(head==NULL)
	{
		cout << "Please create a list first." << endl;
		return;
	}

	struct Node *temp, *q; 
	int i;

	q = head; 
	for(int i = 0; i < pos - 1; i++)
	{
		q->next; 
		if(q==NULL)
		{
			cout << "There are fewer nodes than the given position. Please input an appropriate element." << endl;
			return;
		}
	}
	temp = new(struct Node);
	temp->data = x;
	if(q->next == NULL) { 
		q->next = temp;
		temp->next = NULL;
		temp->prev = q;
	} else { 
		temp->next = q->next;
		temp->next->prev = temp;
		q->next = temp;
		temp->prev = q;

	}

	cout << "Element input!" << endl;

}

void DLL::deleteElement(int pos)
{
	struct node *temp, *q;

	if(head->data = )
}

void DLL::display() { 
	struct Node *q; 
	if(head == NULL)
	{
		cout << "Empty list, please create a list first." << endl;
		return;
	}

	q = head; 
	while(q != NULL) { 
		cout << q->data << endl;
		q = q->next;
	}

	cout << "Null found. List ended." << endl;
}

void DLL::count() {

	struct Node *q = head;
	int cnt = 0;
	while(q != NULL) { 
		q = q->next;
		cnt++;
	}

	cout << "Number of elements in list: " << cnt << endl;
}

void DLL::reverseList() { 
	struct Node *swap1, *swap2;
	swap1 = head;
	swap2 = swap1->next;
	swap1->next = NULL;
	swap1->prev = p2;
	while(swap2 != NULL)
	{
		swap2->prev = swap2->next;
		swap2->next = swap1;
		swap1 = swap2;
		swap2 = swap2->prev;
	}
	head = swap1;

	cout << "List has finished reversing." << endl;
}


void main() {

	int c, d, p; // choice, element, position
	DLL dl;
	
	bool cnt = TRUE;
	
	while(cnt) { 
		cout << "1. Create List\n2. Add to Head\n3. Add After Position Element\n4. Delete Element\n5. Display Elements\n 6. Count Elements\n 7. Reverse\n 8. Quit " << endl;
		cin >> c;

		switch(c) { 

			case 1: 
				cout << "Input an element: " << endl;
				cin >> d;
				dl.createDLL(d);
				cout << endl;				
				break;

			case 2: 
				cout << "Please enter the new head element: ";
				cin >> d;
				dl.addToHead(d);
				cout << endl;
				break;

			case 3: 
				cout << "Please enter the new element, and the position you would like to insert it: " << endl;
				cin >> d >> p;
				dl.insertData; // Pick up here on DAY 2
				break;

			case 4: 
				cnt = false;
			}
		}
	
	cout << "Thanks for using my linked list program! I hope you enjoyed it." << endl;
}
