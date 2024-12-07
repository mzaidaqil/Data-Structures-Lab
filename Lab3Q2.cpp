/*Subject code : CSEB3213 Data Structures & Algorithms 
  Section      : 02B 
  Student name : MUHAMMAD ZAID AQIL BIN ARIZAL 
  Student ID no: SW01083598
  Question no  : 2 */

#include <iostream>
using namespace std;

struct Subject {
	//Question 3(1)
    string sname, scode, remark ="Normal";
    int credit;
    float fee;
    Subject *next;
};

int menu() {
	int choice;
	cout << "\n\n::SUBJECT REGISTRATION::\n";
	cout << "1. Add subject\n"; 	
    cout << "2. Display subject\n";
	cout << "3. Update subject\n";
	cout << "4. Exit program\n";
	cout << "Enter choice: ";
	cin >> choice;
	return choice;
}

Subject *subjectInfo() {
	//Question 3(2)
    string name, code;
    int credits;
    float fee;
    string remark ="Normal";
    char lateRegister;
	//create a new node
    Subject *n = new Subject();
	//accept user’s data inputs
    cout << "Enter subject name : ";
    cin.ignore();
    getline(cin, name);

    cout << "Enter subject code : ";
    getline(cin, code);

    cout << "Enter number of credits : ";
    cin >> credits;

    fee = credits * 500;

    cout << "Is this late registeration? (y/n) :";
    cin >> lateRegister;

    if (lateRegister == 'y' || lateRegister == 'Y'){
        fee += 100;
        remark = "Late Registeration";
    }

	//return address of new node to registerSubject()

    n->sname = name;
    n->scode = code;
    n->credit = credits;
    n->fee = fee;
    n->remark = remark;
    return n;
}

void registerSubject(Subject *&head){
    //Question 3(3)
    cout<<"\n\n:: Add Subject Record::"<<endl;
	//invoke subjectInfo () and accept new node’s address
    Subject *n = subjectInfo();
	//add new node to linked list
    if (head ==NULL){
        head = n;
    }
    else{
        Subject *temp = head;
        while (temp-> next != NULL){
            temp = temp-> next;
        }
        temp-> next = n;
    }

    cout << "Subject sucessfully registered";

}

void display(Subject *head) {
       //Question 3(4)
       int choice;

       cout<<"\n\n:: Display Subject Record::"<<endl;
       cout<<"Press [1] for individual subject or [2] for all subject : ";
       cin>>choice;

       if (choice == 1){
            string code;

            cin.ignore();
        
            cout << "Enter subject code: ";
            getline(cin, code);

            //Searching 

            Subject *current = head;
            while (current != NULL){
                if (current -> scode == code){
                    cout << "Name : " << current -> sname << "\nCode : " << current-> scode << "\nCredits : " << current -> credit << ", Fee: RM" << current->fee << ", Remark: " << current-> remark << endl;
                }else{
                    cout << "Subject not found.\n";
                }

                current = current-> next;
            }

       }

       else if (choice == 2){
            //Display all 

            Subject *current = head;
            while (current != NULL){
                cout << "Name : " << current -> sname << "\nCode : " << current-> scode << "\nCredits : " << current -> credit << ", Fee: RM" << current->fee << ", Remark: " << current-> remark << endl;

                current = current->next;
            }
       }

       //display record according to user’s input (option)
}

int main() {
	//declaration of variables
    Subject *head = NULL;
    string name, idNo;
    char choice;

	cout<<"Enter student name : ";
	getline(cin, name);
	cout<<"Enter student ID no : ";
	getline(cin, idNo);

	do {
	     choice = menu();
            switch (choice) {
               case 1: registerSubject(head);
               case 2: display(head);
		}
	} while (choice != 4);
	return 0;
}

