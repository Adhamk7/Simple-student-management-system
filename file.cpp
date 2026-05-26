#include <iostream>
using namespace std;

struct node{
    int data ; 
    node* next ; 
};

node* head = NULL;

void insertNode(int value);
void display();
void deleteNode(int value);
void insert_beg(int value);
void delete_beg();
void delete_end();

struct School {
    string name ;
    string courses ;
    int id ;
};

union box {
    double weight ;
    double height ;
};

int main() {

    insertNode(value);
    insertNode(7);
    insertNode(10);
    insertNode(15);
    display();
    deleteNode(7);
    display();
    insert_beg(27);
    display();
    delete_beg();
    display();
    delete_end();
    display();

    box b1; 
    b1.weight = 70 ; 
    b1.height = 120 ;

    cout << b1.weight << endl ;
    cout << b1.height << endl ;

    School A1; 
    A1.name = "Adham";
    A1.courses = "English , Math, Physics";
    A1.id = 202501466 ;
    cout << A1.name << endl ; 
    cout << A1.id << endl ;
    cout << A1.courses << endl ; 

    int x = 20 ;
    int* ptr = &x ;
    cout << &x << endl ; 
    cout << *ptr << endl ;
        
    int* ptr1 = new int (7); 
    cout << ptr1 << endl ;
    cout << *ptr1 << endl ; 

return 0 ;
}

void insertNode (int value){
    node* new_node , * last ;
    new_node = new node;
    new_node->data = value;
    if (head == NULL){
        head = new_node;
        new_node->next = NULL;
    }
    else {
        last = head ;
        while (last->next != NULL){
            last = last->next ;            
        }
        last->next = new_node;
        new_node->next = NULL ;
    }
}

void display() {
    node* current_node ;
    if (head == NULL ) {
        cout << " linked list is empty " <<endl; 
    }
    else {
        current_node = head ;
        while (current_node != NULL ) {
            cout << current_node->data<<"\t";
            current_node = current_node->next ;
        
        }
    }
    cout << "\n";   
}

void deleteNode(int value) {
    node* current, * previous ;
    current = head ;
    previous = head ;

    if (current->data == value ){
        head = current->next ;
        free (current) ;
        return;
    }
    while (current->data != value) {
        previous = current ;
        current = current->next ;
    }
    previous->next = current->next ;
    free (current ); 
}

void insert_beg(int value){
    node* new_node = new node ;
    new_node->data = value ;
    new_node->next = head ;
    head = new_node ;
}

void delete_beg(){
    if (head == NULL) { 
        cout << "linked list is empty. \n " ;     
    }
    else {
        node* first_node = head ;
        head = first_node->next;
        delete(first_node);
    }
}

void delete_end(){
    if (head == NULL){
        cout << " the linked list is empty. \n";
    }
    else if (head->next == NULL ) {
        delete (head);
        head = NULL ;
    }
    else {
        node* ptr = head ;
        while (ptr->next->next != NULL){
            ptr = ptr->next ;
        }
        delete (ptr->next);
        ptr->next = NULL ;
    }
}
