#include <iostream> 
#include <queue> 
#include <string> 

using namespace std;

struct Customer{
    string OrderID;
    int TotalAdult;
    int TotalChild;
    int type;
    float TotalPayment;
};

//Node for singly linked list

struct Node {
    Customer customer;
    Node *next;
};

//FDunction to add customer to the linked list

void Log(Node *&head, Customer customer){

    Node * newNode = new Node; //Create new node
    newNode->customer = customer;
    newNode->next = NULL;

    if (head == NULL){
        head = newNode;
    } else {
        Node * temp = head;
        while (temp->next != NULL){
            temp=temp->next;
        }
        temp->next = newNode;
    }
}

//Display the customer. 

void Analysis(Node *head){
    if (head == NULL){
        cout << "No customer in the list.\n";
        return;
    }

    Node * temp= head;
    while (temp!=NULL){
        cout << "Order ID : " << temp->customer.OrderID;
        cout << "\nTotal Adults : " << temp->customer.TotalAdult;
        cout << "\nTotal Child : " << temp->customer.TotalChild;
        cout << "\nType : " << (temp->customer.type == 1 ? "Dine In" : "Task Away");
        cout << ", Total Payment : RM" << temp->customer.TotalPayment << endl;

        //Go to the next node
        temp= temp->next;
    }
}


int main (){

    Customer customer;
    queue<Customer> dineInQueue; //Que fro Dine In Customers
    queue<Customer> takeAwayQueue; //Que for Take Away Customers
    Node *customerList = NULL;

    char moreCustomers = 'y';
    while (moreCustomers =='y' || moreCustomers == 'Y'){

        cout << "Enter order ID : ";
        cin >> customer.OrderID;
        cout << "Enter Total Adults :";
        cin >> customer.TotalAdult;
        cout << "Enter Total Child :";
        cin >> customer.TotalChild;
        cout << "Enter type (1-Dine In, 2-Take Away) : ";
        cin >> customer.type;

    //Calculate total payment 

        customer.TotalPayment = (customer.TotalAdult * 50.0) + (customer.TotalChild * 30.0);

        if (customer.type == 1){
            dineInQueue.push(customer);
        } else if (customer.type == 2){
            takeAwayQueue.push(customer);
        } else {
             cout << "Invalid type entered! Skipping this customer. \n";
        }


        // Add customer to the linked list (this stores all customer, Dine In and Take Away)
        Log(customerList, customer);

        //Ask user if user want to continue? 
 
        cout << "Do you want to add another customer? (Y/y) : ";
        cin >> moreCustomers;

    }

    cout << "\n---All Customer--\n";
    Analysis(customerList);

return 0;

}