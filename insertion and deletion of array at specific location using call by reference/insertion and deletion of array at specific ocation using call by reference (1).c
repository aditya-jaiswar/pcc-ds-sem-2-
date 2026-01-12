#include <stdio.h>
#define MAX 100

void insert(int arr[], int*n, int pos, int value )
{
    int i;

    for(i=*n; i>=pos; i--)
    {
        arr[i] = arr[i -1];
    }
    arr[pos - 1] = value ;
    (*n)++;
}

void delete(int arr[], int *n, int pos)
{
    int i;
    for(i=pos-1; i< *n -1 ; i++)
    {
        arr[i] = arr[i+1] ;
    }
    (*n)--;
}

void display(int arr[], int n)
{
    int i;
    printf("Array elements\n");
    for(i=0; i<n ; i++)
    {
        printf("%d ", arr[i]);

    }
    printf("\n");
}
int main()
{
    int arr[MAX] ;
    int n, pos, value, choice;

    printf("enter size of arrray: ");
    scanf("%d", &n);

    printf("Enter array elements\n");

    for(int i=0 ; i<n ; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\n 1:Insert \n 2:Delete\n");
    printf("enter your choice:");
    scanf("%d", &choice);

    if(choice==1)
    {
     printf("enter position to insert");
     scanf("%d", &pos);
     printf("enter value to insert: ");
     scanf("%d", &value);
     insert(arr, &n, pos, value);

    }

    else if (choice==2)
    {
    printf("enter position to delete: ");
    scanf("%d", &pos);
    delete (arr, &n, pos);
    }

    else
    {
        printf("invalid choice");
        return 0;
    }

    display (arr, n);
    return 0;

}
