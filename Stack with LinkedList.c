#include <stdio.h>
#include <stdlib.h>

#define M ((node*)malloc(sizeof(struct node)))

typedef struct node
{
    int data;
    struct node *next;
} node;

int main()
{
    node *top = NULL, *newnode, *temp;
    int elm, ch;

    do
    {
        printf("\n---------------------------------------------------------");
        printf("\n                        Operations                       ");
        printf("\n---------------------------------------------------------");
        printf("\n1.push\n2.pop\n3.Display");
        printf("\n---------------------------------------------------------");
        printf("\nEnter your choice:");
        scanf("%d", &ch);
        printf("=========================================================");

        switch (ch)
        {
        case 1:
            printf("\nEnter element to push:");
            scanf("%d", &elm);

            if (top == NULL)
            {
                top = M;
                top->data = elm;
                top->next = NULL;
            }
            else
            {
                newnode = M;
                newnode->data = elm;
                newnode->next = top;
                top = newnode;
            }
            printf("\n%d is pushed into the stack.....", elm);
            break;

        case 2:
            if (top == NULL)
            {
                printf("\nStack is empty....");
            }
            else
            {
                elm = top->data;
                temp = top;
                top = top->next;
                free(temp);
                printf("\n%d is popped from stack....", elm);
            }
            break;

        case 3:
            if (top == NULL)
            {
                printf("\nStack is empty....");
            }
            else
            {
                printf("\nStack is:");
                for (temp = top; temp != NULL; temp = temp->next)
                {
                    printf("%5d", temp->data);
                }
            }
            break;

        default:
            printf("\nEnter valid choice....");
        }
        printf("\n---------------------------------------------------------");
        printf("\nIf you want to continue press 1");
        scanf("%d", &ch);
    } while (ch == 1);

    return 0;
}

