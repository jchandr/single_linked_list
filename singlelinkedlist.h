struct Node{
	int val;
struct Node* next;
};

struct List{
struct Node* front;
	int size;
};


typedef struct Node node;
typedef struct List list;

//function prototype
node* createNode();
list* createList();
node* front(list* lst);
node* insertData(list* lst,int index,int val);
node* removeData(list* lst,int index);
