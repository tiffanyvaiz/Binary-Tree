//�]��IDE�����������e���ɭP������ѥX�{�ýX�A�ҥH���ѥέ^��g�A�ЧU�лP�Ѯv����!
//410321148 ��u�G ���ۮx 

#include "Binary_Tree.h"

int main()
{
    int nodeAmount;
    while(scanf("%d",&nodeAmount)) 
    /**break when enter "-1"**/
    {
        if(nodeAmount==-1)  break;
        else
        {
            int i; //use in "for"
            node_t *root= create();

            for(i=0;i<nodeAmount;i++)  
            {
                int Data;
                scanf("%d",&Data);
				if(i==0) root->tree_data=Data; //creat the ROOT
				else 
				{
					int succeOrFail=insert(search(root,Data),Data);
				}
			}
			
            printf("min:%d\n",min(root));  
            printf("max:%d\n",max(root));
            sort(root);
            printf("\n");
        }
    }
    return 0;
}

