#include "Binary_Tree.h"

/** introduction to FUNCTION  **/
//  introduction to Variable  

node_t * create(void)
/**initialize all member in the "node_t" struct**/ 
{
    node_t *newNode = (node_t*)malloc(sizeof(node_t));//malloc
    newNode->left = NULL;//initialize
    newNode->right = NULL;//initialize
    return newNode;
}

int insert(node_t * endNode, int Data )
 /**return 0 : failed  return 1 : successful**/
 //endNode will be used to call "search" function to find the end of tree
 //Data: user enter the Data in main.c
{
    if(endNode!=NULL)
    /* num IS NOT in the tree: return 1 */
    {
        node_t * newNode = create();
        newNode->tree_data=Data;//let newNode->tree_data=Data

        if(endNode->tree_data>Data) endNode->left = newNode;//insert Data to endNode->left            
        else if(endNode->tree_data<Data) endNode->right = newNode;//insert Data to endNode->right     
       
        return 1; //insert successful. 
    }
    else
    /* num IS in the tree: return 0 */
    {
        return 0; //insert failed.
    }

}

node_t *search(node_t * root , int Data )
 /**if num IS in the tree: return NULL**/
 /**if num IS NOT in the tree: return end of tree(the node to insert)**/
 //root is the first node of the tree
 //Data: user enter the Data in main.c
{
    if(Data==root->tree_data)//find the same data
    {
        return NULL;
    }

    else
    {
        if(Data>root->tree_data)
        {
            if(root->right!=NULL)//recursive to find the end of tree.
            {
                return search(root->right,Data);
            }
            else//the end of tree
            {
                return root;
            }


        }
        else
        {
            if(root->left!=NULL)//recursive to find the end of tree.
            {
                return search(root->left,Data);
            }
            else//the end of tree
            {
                return root;
            }
        }
    }
}

int min(node_t * root)
/**return tne min**/
//root: the root of the tree
{
    node_t* temp = root;
    while(temp->left!=NULL)
    {
        temp=temp->left;
    }
    return temp->tree_data;
}

int max(node_t * root)
/**return tne MAX**/
//root: the root of the tree
{
    node_t* temp = root;
    while(temp->right!=NULL)
    {
        temp=temp->right;
    }
    return temp->tree_data;

}

void sort(node_t * node)
/**sorting and printing**/ 
{
	if (node != NULL)
	{
		sort(node->left);
		printf("%d ", node->tree_data);
		sort(node->right);
	}
}

