#include <stdio.h>
    
    
}

int main() {
    int opCount;
    scanf("%d", &opCount);
    
    Node *root = NULL;
    
    char outputs[MAX_OPS][50];
    int outIndex = 0;
    
    int op, key;
    for (int i = 0; i < opCount; i++) {
        scanf("%d", &op);
        if(op == 1 || op == 2 || op == 3)
            scanf("%d", &key);
            
        switch(op) {
            case 1: // Insert
                root = insert(root, key);
                break;
            case 2: // Delete
                if(search(root, key))
                    root = deleteNode(root, key);
                break;
            case 3: { // Search
                if(search(root, key))
                    strcpy(outputs[outIndex++], "found");
                else
                    strcpy(outputs[outIndex++], "not found");
                break;
            }
            default:
                break;
        }
    }
    
    for (  int i=0;i<outIndex;i++     ) {
        
      printf("%s\n",outputs[i]);  
        
	}
        
        
}
