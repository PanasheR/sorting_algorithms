#ifndef _SORT_H_
#define _SORT_H_

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;


void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void selection_sort(int *array, size_t size);
void swap(int *a, int *b);
void swap_arr(int *a, int *b);
void quick_sort(int *array, size_t size);
void qwiksort(int *array, int lo, int hi, size_t size);
int partition(int *array, int lo, int hi, size_t size);
int sorted_array(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void swap_nodes(listint_t *nodeL, listint_t *nodeR);
void shell_sort(int *array, size_t size);
void counting_sort(int *array, size_t size);

#endif
