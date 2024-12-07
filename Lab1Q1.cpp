/*Subject code : CSEB3213 Data Structures & Algorithms
 Section : 02B
 Student name : MUHAMMAD ZAID AQIL BIN ARIZAL
 Student ID no: SW01083598
 Question no : 1 */ 


#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

void display(vector<string> dessert, vector<string> mainCourse){
    cout << "::Menu::" << endl;
    cout << "List of dessert : ";
    for (int i =0; i < dessert.size();i++){
        cout << dessert[i] << " | ";
    }
    cout << "\nList of main course : ";
    for (int i =0; i < mainCourse.size();i++){
        cout << mainCourse[i] << " | ";
    }
}

void insert (vector<string> &dessert, vector<string> &mainCourse){
    int choice;
    cout << "\n\n::Adding New Menu::" << endl;
    cout << "Press [1] for dessert or [2] for main course :";
    cin >> choice;

    if (choice == 1){
        cout << "Insert new  dessert : ";

        string newDessert;
        cin >> newDessert;
        dessert.push_back(newDessert);
    }

    if (choice == 2){
        cout << "Insert new  main course : ";

        string newMainCourse;
        cin >> newMainCourse;
        mainCourse.push_back(newMainCourse);
    }
}

void displayUpdate (vector<string> &dessert, vector<string> &mainCourse){
   cout << "\n\n::Updated Menu::" << endl;
   cout << "List of dessert : " ;
   
    for (vector<string>::iterator i = dessert.begin(); i != dessert.end(); ++i){
        cout << *i << " / ";
    }

    cout << "\nList of main course : " ; 
   
    for (vector<string>::iterator i = mainCourse.begin(); i != mainCourse.end(); ++i){
        cout << *i << " / ";
    }
};



int main (){

    vector<string> dessert = {"pie", "cake", "scone", "croffle", "puff"};
    vector<string> mainCourse = {"meat ball", "greek lamb"};

    display (dessert, mainCourse);
    insert (dessert, mainCourse);
    displayUpdate (dessert, mainCourse);

    return 0;
    
}
