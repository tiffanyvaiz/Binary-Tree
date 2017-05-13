#ifndef BINARY_TREE_H
#define BINARY_TREE_H

#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	struct node *left;
	struct node *right;
	int tree_data;
}node_t;

node_t *create(void);
node_t *search(node_t *, int );
int insert(node_t *, int );	
int min(node_t *);
int max(node_t *);
void sort(node_t *);

#endif
