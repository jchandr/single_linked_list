#include "singlelinkedlist.h"

node* createNode(){
	
	node *temp=(node*)malloc(sizeof(node));
	temp->next=NULL;
	return temp;
}


list* createList(){
	list *temp=(list*)malloc(sizeof(list));
	temp->front=NULL;
	temp->size=0;
	return temp;
}

node* front(list* lst){
	return lst->front;
}

node* insertData(list* lst,int index,int val){
	int i=0;
	node* temp=lst->front;
	
	if(temp==NULL){
		temp=createNode();
		temp->val=val;
		lst->front=temp;
		lst->size++;
		return temp;
	}
	else{
		int i=0;
		
		while(temp!=NULL){
			if(index-1==i){
				node* right=temp;
				node* left =temp->next;
				node* newnode=createNode();
				newnode->val=val;
				newnode->next=left;
				right->next=newnode;
				lst->size++;
				return newnode;
			}	
			temp=temp->next;
			i++;	
		}
	
	}

	return NULL	;

}


node* removeData(list* lst,int index){

    node* node,*prev,*head=lst->front;
    int length;
    int i;

    
    if(index <= 0) { //node does NOT exist
    
        return head;
    }

    for(i=1, prev = 0, node = head; i < index && node != 0; i++) {
        prev = node;
        node = node->next;
    }

   
    if(0 == node) {
    
        return head;
    }

   
    if(0 == prev) {
        head = node->next;
		}
    else {
        prev->next = node->next;
    }
    free(node);

    return head;  
	
}
