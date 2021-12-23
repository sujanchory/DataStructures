#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
struct node {
   int value;
   struct node *next;
};
void insert(int);
void display();
typedef struct node DATA_NODE;
DATA_NODE *head_node, *first_node, *temp_node = 0;
int main() {
	int loop = 1;
	int data;
	first_node = 0;
	printf("Singly(Single) Linked List Example - Using Functions\n");
 	while (loop) {
 		printf("\nEnter Element for Insert Linked List (-1 to Exit ) : \n");
 		scanf("%d", &data);
 		if (data >= 0) {
 			insert(data);
 		} 
		else {
 			loop = 0;
 			temp_node->next = 0;
  		}
 				}
 	display();
 	return 0;
}
void insert(int data) {
 	temp_node = (DATA_NODE *) malloc(sizeof (DATA_NODE));
 	temp_node->value = data;
 	if (first_node == 0) {
 		first_node = temp_node;
 						 } 
	else {
 		head_node->next = temp_node;
         }
   		 head_node = temp_node;
 		 fflush(stdin);
}
void display() {
	int count = 0;
    temp_node = first_node;
    printf("\nDisplay Linked List : \n");
    while (temp_node != 0) {
      printf("# %d # ", temp_node->value);
      count++;
      temp_node = temp_node -> next;
                            } 
      printf("\nNo Of Items In Linked List : %d", count);
}

