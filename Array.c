#include<stdio.h>
#include<stdlib.h>

int a[20];
int n,val,i,pos;
void create();
void display();
int main()
{
    int choice=1;
    while(choice)
    {
        printf("\n....MENU....\n");
        printf("1.CREATE\n");
        printf("2.DISPLAY\n");
        printf("3.EXIT\n");
        printf("........\n");
        printf("Enter your Choice\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
               create();
               break;
        case 2:
               display();
               break;
        case 3:
               exit(0);       

        default:
                printf("Invalid choice:\n");
            break;
        }
    }
        return(0);
}

        void create()
        {
            printf(" Enter the size of the array elements\t");
            scanf("%d",&n);
            printf("\n Enter the element for the array:\n");
            for(i=0;i<n;i++)
            {
                scanf("%d",&a[i]);
            }
        }
        void display()
        {
            int i;
            printf("The array elements are:\n");
            for(i=0;i<n;i++)
            {
                printf("%3d",a[i]);
            }
        }
