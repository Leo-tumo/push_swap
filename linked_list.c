/* ************************************************************************************ */
/*                                                                                      */
/*                                                    :::        :::::::::: ::::::::    */
/*   linked_list.c                                   :+:        :+:       :+:    :+:    */
/*                                                  +:+        +:+       +:+    +:+     */
/*   By: letumany    <leo.tumanyan@gmail.com>      +#+        +#++:++#  +#+    +:+      */
/*                                                +#+        +#+       +#+    +#+       */
/*   Created: 2021/11/15 15:32:29 by letumany    #+#        #+#       #+#    #+#        */
/*   Updated: 2021/11/15 16:11:06 by letumany   ########## ########## ########          */
/*                                                                                      */
/* ************************************************************************************ */

#include <stdio.h>
#include <stdlib.h>

// A linked list node
typedef struct		s_node
{
	int data;
	struct s_node* 	next;
	struct s_node* 	prev;
}					t_node;

/* Given a reference (pointer to pointer) to the head of a
list and an int, inserts a new node on the front of the
list. */
void push(t_node **head_ref, int new_data)
{
	/* 1. allocate node */
	t_node* new_node
		= (t_node*)malloc(sizeof(t_node));

	/* 2. put in the data */
	new_node->data = new_data;

	/* 3. Make next of new node as head and previous as NULL
	*/
	new_node->next = (*head_ref);
	new_node->prev = NULL;

	/* 4. change prev of head node to new node */
	if ((*head_ref) != NULL)
		(*head_ref)->prev = new_node;

	/* 5. move the head to point to the new node */
	(*head_ref) = new_node;
}

/* Given a node as prev_node, insert a new node after the
* given node */
void insertAfter(t_node* prev_node, int new_data)
{
	/*1. check if the given prev_node is NULL */
	if (prev_node == NULL) {
		printf("the given previous node cannot be NULL");
		return;
	}

	/* 2. allocate new node */
	t_node* new_node
		= (t_node*)malloc(sizeof(t_node));

	/* 3. put in the data */
	new_node->data = new_data;

	/* 4. Make next of new node as next of prev_node */
	new_node->next = prev_node->next;

	/* 5. Make the next of prev_node as new_node */
	prev_node->next = new_node;

	/* 6. Make prev_node as previous of new_node */
	new_node->prev = prev_node;

	/* 7. Change previous of new_node's next node */
	if (new_node->next != NULL)
		new_node->next->prev = new_node;
}

/* Given a reference (pointer to pointer) to the head
of a DLL and an int, appends a new node at the end */
void append(t_node** head_ref, int new_data)
{
	/* 1. allocate node */
	t_node* new_node
		= (t_node*)malloc(sizeof(t_node));

	t_node* last = *head_ref; /* used in step 5*/

	/* 2. put in the data */
	new_node->data = new_data;

	/* 3. This new node is going to be the last node, so
		make next of it as NULL*/
	new_node->next = NULL;

	/* 4. If the Linked List is empty, then make the new
		node as head */
	if (*head_ref == NULL) {
		new_node->prev = NULL;
		*head_ref = new_node;
		return;
	}

	/* 5. Else traverse till the last node */
	while (last->next != NULL)
		last = last->next;

	/* 6. Change the next of last node */
	last->next = new_node;

	/* 7. Make last node as previous of new node */
	new_node->prev = last;

	return;
}

/* Driver program to test above functions*/
int main()
{
	/* Start with the empty list */
	t_node* head = NULL;

	// Insert 6. So linked list becomes 6->NULL
	append(&head, 6);

	// Insert 7 at the beginning. So linked list becomes
	// 7->6->NULL
	push(&head, 7);

	// Insert 1 at the beginning. So linked list becomes
	// 1->7->6->NULL
	push(&head, 1);

	// Insert 4 at the end. So linked list becomes
	// 1->7->6->4->NULL
	append(&head, 4);

	// Insert 8, after 7. So linked list becomes
	// 1->7->8->6->4->NULL
	insertAfter(head->next, 8);

	printf("Created DLL is: ");
	printList(head);

	getchar();
	return 0;
}


