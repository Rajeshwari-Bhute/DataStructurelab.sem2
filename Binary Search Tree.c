#include <stdio.h>
                break;

            case 3:
                if (isEmpty(root))
                    printf("The tree is empty\n");
                else {
                    preorder(root);
                    printf("\n");
                }
                break;

            case 4:
                if (isEmpty(root))
                    printf("The tree is empty\n");
                else {
                    postorder(root);
                    printf("\n");
                }
                break;

            case 5: {
                printf("Delete: ");
                scanf("%d", &val);
                int found = 0;
                root = deleteNode(root, val, &found);
                if (!found)
                    printf("Value not found\n");
                break;
            }

            case 6:
                return 0;

            default:
                printf("Invalid choice\n");
        }
    }
}







