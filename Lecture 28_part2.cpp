#include<iosteam>
using namespace std;

class node
{
    public:

    int data;
    node * next;

    node(int data_input)
    {
        this->data =data_input;
        this->next = NULL;
    }
};

void printnode(node * &node)
{
    cout<<"value " <<node->data;
    cout<<"address"<<node->next;
}

void printlinkedist(node * &head)
{

}

int main()
{
    node * node1 = new node(5);
    node * node2 = new node(7);
    node * node3 = new node(8);

    node1->next = node2;
    node2->next = node3;

    printnode(node1);
    cout<<endl<<node2;
    printnode(node2);
    cout<<endl<<node3;

    return 0;
}
