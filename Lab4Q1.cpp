/*Subject code : CSEB3213 Data Structures & Algorithms 
  Section      : 02B 
  Student name : MUHAMMAD ZAID AQIL BIN ARIZAL 
  Student ID no: SW01083598
  Question no  : 1 */

/*
#include <iostream>
#include <list>
using namespace std;

void insertNode(list<int>*Record) {	  
    int year; char choice;
    do {
        cout<<"Enter year : ";
	    cin>>year;
        Record->push_back(year);
        cout<<"Press [y] for new input:";
        cin>>choice;
    } while(choice=='y');
    cout<<endl;
}

void display(list<int>Record) {
    cout<<"All records : ";
    for(auto i : Record)
    	 cout<<i<<" ";
    cout<<endl;
}

int main() {
    list<int>Record;
    insertNode(&Record);
    display(Record);

    return 0;
}*/

//Without modifying the program flow, convert the STL list program to Singly Linked List implementation using the template (Program Sample #2) provided below.

#include <iostream>
using namespace std;

class Record {
    public:
    int year;
    //missing code
    Record* next;

};


Record *createNode() {
    Record *n = new Record ();
    cout<<"Enter year : ";

    //missing code
    cin >> n-> year;
    n->next = NULL;
    return n;
}


void insertNode(Record *&head, Record *&tail) {	  
    //variable declaration
    Record *n; 
    char choice;
    do{
        n = createNode();

        //insert first node into linked list
        if(head == NULL){
            head = tail = n;
        }

        //insert second node onwards at the end of linked list
        else {
           tail->next = n;
           tail = n;
        }

        cout<<"Press [y] for new record:";
        cin>>choice;
    }while(choice=='y');
}

void display(Record *h) {
    cout<<"\nAll records  : ";
    while(h!=NULL){
        cout << h->year << " ";
        h=h->next;
    }
    cout<<endl;
}

void analysis(Record *h){
    int leap=0, nonLeap=0 ;
    cout << "\n::Analysis::\n";
    while (h != NULL){
        cout << "\n" << h -> year << " : ";
        if (h -> year % 4 == 0){
            cout << "leap year" ;
            leap++;
        }
        else{
            cout << "not a leap year";
            nonLeap++;
        }

        h=h->next;
    }

    cout << "\n\nTotal Leap Year : " << leap;
    cout << "\nTotal Non Leap Year : " << nonLeap;
}

int main() {
    Record *head = NULL;
    Record *tail = NULL;
    insertNode(head, tail);
    //call display
    display(head);
    //call analysis()
    analysis(head);
    return 0;
}


//1st Step : Declare the head pointer and design our node in the structure/class

//2nd Step : Create the node 