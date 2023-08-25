#include<iostream>
using namespace std;

class Node
{
    public:

    int data;
    Node * left;
    Node * right;

    Node (int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

void buildTree(Node * &root)
{
    int var;

    cout<<"enter the value : ";
    cin>>var;


    if(var==-1) return;

    root = new Node(var);

    cout<<"Now enter the data which you want to be the left of "<<var<<" ";
    buildTree(root->left);
    cout<<"Now enter the data which you want to be the right of "<<var<<" ";
    buildTree(root->right);


}

void printpreordertransversal(Node * root)
{
    if(root==NULL)
    {
        return ;
    }
    
    cout<<root->data<<" ";
    printpreordertransversal(root->left);
    printpreordertransversal(root->right);
}

void printInordertransversal(Node * root)
{
    if(root==NULL)
    {
        return ;
    }

    printInordertransversal(root->left);
    cout<<root->data<<" ";
    printInordertransversal(root->right);
}

void printPostordertransversal(Node * root)
{
    if(root==NULL)
    {
        return ;
    }

    printPostordertransversal(root->left);
    printPostordertransversal(root->right);
    cout<<root->data<<" ";
}

int main()
{
    Node * root;

    buildTree(root);
cout<<endl;
    cout<<"the elements transversed in preorder transversal is: ";
    printpreordertransversal(root);
cout<<endl;
    cout<<"the elements transversed in Inorder transversal is: ";
    printInordertransversal(root);
cout<<endl;
    cout<<"the elements transversed in Postorder transversal is: ";
    printPostordertransversal(root);

    return 0;
}
