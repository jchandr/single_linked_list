#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "singlelinkedlist.c"

int main()
{
	int i=0;
	srand(time(NULL));
	
	list *lst=createList();
	
	//printf("%d",lst->size);
 	int number_of_data_to_insert;
 	printf("\nNumber of Data to insert: ");
 	scanf("%d",&number_of_data_to_insert);
	for(i=0;i<number_of_data_to_insert;i++)
	{
		node* tmp=insertData(lst,i,rand()%10);
		if(tmp!=NULL)
			printf("\n%d",tmp->val);	
	}
	
	insertData(lst,20,rand()%10);
		
	for(i=0;i<number_of_data_to_insert;i++)	
		removeData(lst,rand()%number_of_data_to_insert);
	
	return 0;
}


