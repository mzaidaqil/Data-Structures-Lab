/*Subject code : CSEB3213 Data Structures & Algorithms 
  Section      : 02B 
  Student name : MUHAMMAD ZAID AQIL BIN ARIZAL 
  Student ID no: SW01083598
  Question no  : 1 */


#include<iostream>
#include <list> //include list library

using namespace std;

int main() {
    list <float> mylist; //declare mylist
    int i = 0;
    for (;i<5;i++) 
        mylist.push_back(10.0); //push_back
    cout << "Total data in record : " << mylist.size()<< endl; //length change to size, length does not exist
    
    list <float> :: iterator it = mylist.begin(); //declare iterator
    advance(it,2);
    *it = 18.0; //change value to third element

    //mylist[2] = 18.0; We cannot access the list using [] operator
    
    mylist.back() =5.3; //Changin the "Data" in the last element, back() is used to access the last element 

    //it = mylist.begin();
    // advance(it,4); //access the fifth element //Fix means constant value, its not about the repeatition, but it's not changing the instruction to move
    //*it = 5.3; 

    //mylist.at(last) = 5.3; We cannot access the list using at() function, and last is not a valid index

    cout << "List of data in record: ";
    it = mylist.begin();
    for (; it != mylist.end(); ++it) //condtion should be mylist.size
        cout << *it <<" ";

    mylist.sort();
    cout << "\nData in ascending mode: ";
    for (it = mylist.begin(); it != mylist.end(); ++it) 
        cout << *it <<" ";

    mylist.sort();
    cout << "\nData in descending mode: ";
    list <float> :: reverse_iterator rit = mylist.rbegin();
    for (; rit != mylist.rend(); ++rit) 
        cout << *rit <<" ";
    
    return 0;
}

