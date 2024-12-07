/*Subject code : CSEB3213 Data Structures & Algorithms 
  Section      : 02B 
  Student name : MUHAMMAD ZAID AQIL BIN ARIZAL 
  Student ID no: SW01083598
  Question no  : 1 */


#include<iostream>

using namespace std;
struct Data{
    float mark;
    Data *next;
};

void push(Data *&head, float mark){
    Data *n = new Data;
    n->mark = mark;
    n->next=head;
    head = n;
        
    /*insertion process*/
}
    
//Question 1(b)

void grading(Data *head){
    int passCount = 0, failCount = 0, i=0;
    Data *temp = head;

    cout << "\n::Grading::" <<endl;
    while (temp!= NULL){
        if (temp->mark >= 50.0){
            cout << "Mark " << i + 1 << " : " << temp->mark << " (Pass)" << endl;
            passCount++;
        }
        else{
            cout << "Mark " << i + 1 << " : " << temp->mark << " (Fail)" << endl; 
            failCount++;
        }
        temp=temp->next;
        i++;
    }
    cout << "Total Pass : " << passCount << endl;
    cout << "Total Fail : " << failCount << endl;
    cout << endl; 

}

//Question 1(c)
void pop(Data *&head){
    Data *temp;
    while (head != NULL){
        temp=head;
        head = head->next;
        delete temp;
    }
}

int main() {
    Data *head = NULL; int size; float mark;

    cout<<"Enter total data to insert: ";
    cin>> size;
    for(int i = 1; i<=size; i++){
        cout<<"Enter mark : ";
        cin>>mark;
        push(head, mark);

    }    
    grading(head);
    pop(head);

    if(head == NULL)
        cout<<"[Result] All marks have been deleted."<<endl;
    
    cout<<"\nEnd of program";
    return 0;
}
