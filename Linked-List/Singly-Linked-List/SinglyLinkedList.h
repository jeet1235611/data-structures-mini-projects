/*
 * File name: SinglyLinkedList.h
 *
 * Author: Mo Chen
 *
 * Description: Header file for singly linked list functions
 */

#ifndef _SINGLY_LINKED_LIST_H_
#define _SINGLY_LINKED_LIST_H_

#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <windows.h>
#include <stdbool.h>

/*
 * This function displays the whole singly linked list
 *
 * @param[in] head - pointer to the head of the list
 *
 * @returns - integer 0 if there is no exception; Otherwise, it returns -1.
 */
int displayList(struct Node* head);

/*
 * This function prints the linked list in reverse order
 *
 * @param[in] head - pointer to the head of the list
 *
 * @returns -None
 */
void printReverse(struct Node* head);

/*
 * This function counts the number of nodes in the singly linked list
 *
 * @param[in] head - pointer to the head of the list
 *
 * @returns - number of nodes if there is no exception; Otherwise, it returns -1.
 */
int countNode(struct Node* head);

/*
 * This function search a specific element in the linked list
 *
 * @param[in] head - pointer to the head of the list
 *
 * @returns - integer 0 if there is no exception; Otherwise, it returns -1.
 */
int search(struct Node* head, int data);

/*
 * This function inserts a new node on the front of the list
 *
 * @param[in] head_ref - a reference (pointer to pointer) to the head of a list
 * @param[in] new_data - info part of the new node
 *
 * @returns - None
 */
void insertAtFront(struct Node** head_ref, int new_data);

/*
 * This function inserts a new node at the end of the list
 *
 * @param[in] head_ref - a reference (pointer to pointer) to the head of a list
 * @param[in] new_data - info part of the new node
 *
 * @returns - None
 */
void insertAtEnd(struct Node** head_ref, int new_data);

/*
 * This function inserts a new node after a specific data in the list,
 *
 * @param[in] head_ref - a reference (pointer to pointer) to the head of a list
 * @param[in] new_data - info part of the new node
 * @param[in] x - the element after which to insert new node
 *
 * @returns - None
 */
void insertAfter(struct Node** head_ref, int new_data, int x);

/*
 * This function inserts a new node before a specific data in the list,
 *
 * @param[in] head_ref - a reference (pointer to pointer) to the head of a list
 * @param[in] new_data - info part of the new node
 * @param[in] x - the element after which to insert new node
 *
 * @returns - None
 */
void insertBefore(struct Node** head_ref, int new_data, int x);

/*
 * This function inserts a new node at k-th position in the list
 *
 * @param[in] head_ref - a reference (pointer to pointer) to the head of a list
 * @param[in] new_data - info part of the new node
 * @param[in] k - k-th position in the list
 *
 * @returns - None
 */
void insertAtPosition(struct Node** head_ref, int new_data, unsigned int k);

/*
 * This function deletes a node having value data
 *
 * @param[in] head_ref - a reference (pointer to pointer) to the head of a list
 * @param[in] x - data to be deleted
 *
 * @returns - None
 */
void deleteNode(struct Node** head_ref, int x);

/*
 * This function reverses the linked list
 *
 * @param[in] head_ref - a reference (pointer to pointer) to the head of a list
 *
 * @returns - None
 */
void reverseList(struct Node** head_ref);

/*
 * This function checks if input data is unique in the list
 *
 * @param[in] head - pointer to the head of the list
 * @param[in] data - data to be checked
 *
 * @returns - boolean value 1 is input data is unique; Otherwise, it returns 0.
 */
bool isUnique(struct Node* head, int data);

/*
 * This function returns the sum of all elements in the list
 *
 * @param[in] head - pointer to head of the list
 * @param[in] sum_val - pointer to sum value of the list
 *
 * @returns - value 0 if there is no exception; Otherwise, it returns -1.
 */
int sum(struct Node* head, int* sum_val);

#endif // _SINGLY_LINKED_LIST_H_
