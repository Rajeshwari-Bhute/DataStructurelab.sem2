struct node {
    int data;
    struct node* next;
};

typedef struct node* NODE;

NODE createNode(int x) {
    //write your code here..
      
     NODE newNode = (NODE)malloc(sizeof(struct node));
    newNode->data = x;
    newNode->next = NULL;
    return newNode;
    
    
    
    
}

NODE addNode(NODE first, int x) {
    //write your code here..
   NODE newNode = createNode(x);

    if (first == NULL) {
        return newNode;
    }

    NODE temp = first;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;

    return first;
    
    
     
    
    
    
}

NODE concatenate(NODE t1, NODE t2) {
    //write your code here..
    
   if (t1 == NULL)
        return t2;
    if (t2 == NULL)
        return t1;

    NODE temp = t1;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = t2;

    return t1;
    
    
      
    
    
}

void displayList(NODE first) {
    //write your code here..
    
  NODE temp = first;
    while (temp != NULL) {
        printf("%d --> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
    
      
    
    
}
