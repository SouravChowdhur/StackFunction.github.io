#include <stdio.h>
#include <stdlib.h>
#define MAX 5

int arr[MAX], top;
void Push(int x)
{
    if (top == MAX - 1)
    {
        printf("Sorry! Cannot Push");
    }
    else
    {
        top++;
        arr[top] = x;
    }
}

void pull()
{
    if (top == -1)
    {
        printf("Sorry! Array is empty");
    }
    else
    {
        
        printf("Your pulled element is: %d", arr[top]);
        top--;
    }
}

void show()
{   if(top!=-1){
    printf("Your elements are: ");
    for (int i = 0; i <= top; i++)
    {
        printf("%d ", arr[i]);
    }
    }
    else{
        printf("Nothing to display!");
    }
}

void menu()
{
    printf("\n\t\t\tType 1 to push\n");
    printf("\t\t\tType 2 to pul\n");
    printf("\t\t\tType 3 to display\n");
    printf("\t\t\tType 4 to exit\n");
    printf("Enter your choice: \n");
}

int main()
{
    char choice;
    int m;
    top = -1;
    while (1)
    {
        menu();
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            if (top != MAX - 1)
            {
                printf("Enter an element: \n");
                scanf("%d", &m);
                Push(m);
            }
            else{
                printf("Array size over!");
            }
            break;
        case 2:
            
            pull();
            break;
        case 3:
            
            show();
            break;
        case 4:
            exit(0);
        default:
            printf("Try again! Wrong Input!\n");
        }
    }
    return 0;
}