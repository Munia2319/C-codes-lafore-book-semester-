#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *left;
    struct node *right;
} node;


void Tower(int n, char A, char B, char C)
{
    if(n==1)
    {
        printf("\n Move from Tower %c to Tower %c\n",A,C);
    }
    else
    {
        Tower(n-1,A, C,B);
        Tower(1,A,B,C);
        Tower(n-1,B,A,C);
    }
}

node *create()
{
    node *p;
    int x;
    //printf("\n\t Enter data(-1 for no entry)::");
    scanf("%d",&x);

    if(x==-1)
        return NULL;

    p =(node*)malloc(sizeof(node));
    p->data=x;
    printf("\n\tEnter left child of %d::(-1 for no entry)::",x);
    p->left=create();
    printf("\n\tEnter right child of %d::(-1 for no entry)::",x);
    p->right=create();
    return p;
}

void postorder(node *t)
{
    if(t!=NULL)
    {
        postorder(t->left);
        postorder(t->right);
        printf("\t%d->",t->data);
    }
}
void preorder(node *t)
{
    if(t!=NULL)
    {
        printf("\t%d->",t->data);
        preorder(t->left);
        preorder(t->right);
    }
}
void inorder(node *t)
{
    if(t!=NULL)
    {
        inorder(t->left);
        printf("\t%d->",t->data);
        inorder(t->right);
    }
}
void main()
{
    node *root;
    char ch;

    printf("\n\n");
    printf("     ==========================================================\n");
    printf("                   >>>>>Enter Your Choice<<<<<\n");
    printf("     ==========================================================\n");
    printf("         || Press a for create a Tree                    ||\n");
    //printf("         || Press b for Display the Tree                 ||\n");
    printf("         || Press b for Pre order of the Tree            ||\n");
    printf("         || Press c for Post order of the Tree           ||\n");
    printf("         || Press d for In order of the Tree             ||\n");
    printf("         || Press e for Tower of hanoii                  ||\n");
    printf("         || Press f for Exit                             ||\n");
    printf("     ==========================================================\n");
    printf("     ==========================================================\n");
    while(1)
    {


        printf("\n\t Enter your choice::");
        ch=getch();
        if(ch=='a')
        {
            printf("\n\t Enter the Root::");
            root=create();
            printf("\n\t The Tree is created successfully::\n");

        }
        if(ch=='b')
        {
            printf("\nThe preorder traversal of tree is::\n ");
            printf("     ==========================================================\n");
            preorder(root);
            printf(" NULL\n");
            printf("     ==========================================================\n");
            printf("\n");

        }
        if(ch=='c')
        {
            printf("\nThe inorder traversal of tree is::\n ");
            printf("     ==========================================================\n");
            inorder(root);
            printf(" NULL\n");
            printf("     ==========================================================\n");
            printf("\n");
        }
        if(ch=='d')
        {
            printf("\nThe postorder traversal of tree is::\n ");
            printf("     ==========================================================\n");
            postorder(root);
            printf(" NULL\n");
            printf("     ==========================================================\n");
            printf("\n");

        }
        if(ch=='e')
        {
            int n,move;
            printf("\n Enter the number of disks::");
            scanf("%d",&n);
            printf("\n\n");
            Tower(n, 'A', 'B', 'C' );
            move=pow(2,n)-1;
            printf(" ||-----------------------------------||\n");
            //printf(" ||                                   ||\n");
            printf(" ||   Total Number of moves::%d         ||\n",move);
            //printf(" ||                                   ||\n");
            printf(" ||-----------------------------------||\n");
        }
        if(ch=='f')
        {
            exit(0);
        }
        //getchar();
    }
    return 0;
}
