#include <iostream> 
#include <vector>

using namespace std;

struct meal {
    int id;
    string name;
    float price;
};

int menu() {
	int choice;
	cout << "\n::PROGRAM MENU::\n";
	cout << "1. Add new menu\n";
	cout << "2. Display menu\n";
	cout << "3. Update menu\n";
	cout << "4. Delete menu\n";
	cout << "5. Add customer order\n";
	cout << "6. Display order record\n";
	cout << "7. Exit program\n";
	cout << "Enter choice: ";
	cin >> choice;
	return choice;
}

void newMenu (vector <meal> &Record) {
    meal data;
    cout << "Enter meal ID : ";
    cin >> data.id;
    cout << "Enter meal name : ";
    cin >> data.name;
    cout << "Enter meal price : ";
    cin >> data.price;
    Record.push_back(data); 
}

void displayMenu (vector<meal> &Record) {

	cout << "\nChoose an option :";
	cout << "\n1. Display individual meal by ID :";
	cout << "\n2. Display all meals :";
	cout << "\n3. Enter your choice :";

	int option;
	cin >> option;

    //option 1 : display individual meal by ID 
	if (option == 1){
		int id;
		cout << "Enter meal ID to display :";
		cin >> id;

		//search for the meal and display if it exists

		for (int i = 0; i < Record.size() ; ++i ){
			if (Record[i].id == id){
				cout << "Meal ID : " << Record[i].id << " | Meal Name : " << Record[i].name << " | Meal Price :" << Record[i].price << endl;

			}
		}
	//option 2 : display all meals	
	} else if (option == 2){
		cout << "List of all meal : ";
    	for (int i = 0 ; i  < Record.size(); ++i){
        cout << Record[i].id << " | " << Record[i].name << " | " << Record[i].price << " | ";
    	}
	} 


    cout << endl;

}


int main() {
	vector<meal>Record {{1001,"Greek Lamb", 20.80},{1002,"Chicken Pasta", 12.90}, {1003,"Tomyam Kung", 22.50}};
	int choice; 

	do {
		choice = menu();
		switch (choice) {
		  case 1: newMenu(Record); 
          case 2: displayMenu(Record);
		  case 3:; //call function updateMenu()
		}
	} while (choice != 7);

    return 0;
}

