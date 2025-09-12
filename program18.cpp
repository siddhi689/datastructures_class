#include <iostream>
using namespace std;

//Node structure
struct Node {
    int data;  //data part
    Node*next; //pointer to the next node;
};


//function to create a new node 
Node* createNode(int value) { 
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = nullptr;
    return newNode;
}
int main() {
    // create first node (head)
    Node* head = createNode(10);

//create second node
Node* second=createNode(20);
head->next=second;//link first node to second

//create third node
Node*third=createNode(30);
second->next=third = nullptr;//link second to third

//Transverse and print linked list
Node*temp=head;//start from head
while(temp!=nullptr) {
    cout<< temp->data<<"->";
    temp=temp->next;//move to next node
}
cout<<"nullptr" << endl;

return 0;
}