#include <iostream>
using namespace std;


class NodeD{
    public:
        int data;
        NodeD* next; 
        NodeD* pre;   
        NodeD(int data){
            this->data = data;
            this->next = NULL;
            this->pre  = NULL;
        }
};
void display(NodeD* &head){
    if(head == NULL){
        cout << "Head is Null";
    }else{           
        NodeD* temp;   
        temp = head; 

        while (temp!=NULL)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "Null\n";
        
    }
}

void insertintohead(NodeD* &head,int data,NodeD* &tail){
    NodeD* temp = new NodeD(data);

    if(head == NULL){
        head = temp;
        tail = temp;
    }
    else{
        temp->next = head;
        head->pre = temp;
        head = temp;
    }

}

void insertintotail(NodeD* &head,int data,NodeD* tail){
    NodeD* temp = new NodeD(data);

    if (head == NULL)
    {
        head = temp;
        tail = temp;
    }else{
        tail->next = temp;
        temp->pre = tail;
        tail = temp;
    }
    
}
void insertintoposition(NodeD* &head, NodeD* &tail, int data, int position) {
    if (position == 1) {
        insertintohead(head, data,tail);
        return;
    }

    NodeD* temp = head;
    int cnt = 1;

    while (cnt < position - 1 && temp != NULL) {
        temp = temp->next;
        cnt++;
    }

    if (temp == NULL) {
        insertintotail(head, data, tail);
    } else {
        NodeD* nodetoinsert = new NodeD(data);
        nodetoinsert->next = temp->next;
        nodetoinsert->pre = temp;
        
        if (temp->next != NULL) {
            temp->next->pre = nodetoinsert;
        }

        temp->next = nodetoinsert;
        
        if (nodetoinsert->next == NULL) {
            tail = nodetoinsert;
        }
    }
}

int main(){

    NodeD* head = NULL;
    NodeD* tail = NULL;

    NodeD* node1 = new NodeD(25);
    head = node1;
    tail = node1;

    //display(head); 

    insertintohead(head,55,tail);

    //display(head);
    
    insertintotail(head,65,tail);

    //display(head);

    insertintoposition(head,tail,70,2);

    display(head);
}
