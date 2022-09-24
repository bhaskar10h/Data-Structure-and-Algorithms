#include<iostream>  
#include<malloc.h>

using namespace std;

struct node
{
    int data;
    struct node* left, * right;
};

void main()
{
    struct node* root;
    root = create();
}
struct node* create()
{
    struct node* temp;
    int data;
    temp = (struct node*)malloc(sizeof(struct node));

    cout << "Press 0 to exit" << endl;
    cout << "\nPress 1 for new node" << endl;
    cout << "Enter your choice : " << endl;
    int choice;
    cin >> choice;

    if (choice == 0)
    {
        return 0;
    }
    else
    {
        cout << "Enter the data : " << endl;
        cin >> data;
        
        temp->data = data;
        cout << "Enter the left child of %d" << data << endl;
        
        temp->left = create();
        cout << "Enter the right child of %d" << data << endl;
        
        temp->right = create();
        return temp;
    }
}