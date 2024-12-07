/*Subject code : CSEB3213 Data Structures & Algorithms 
  Section      : 02B 
  Student name : MUHAMMAD ZAID AQIL BIN ARIZAL 
  Student ID no: SW01083598
  Question no  : 2 */

#include<iostream>
#include<list>
using namespace std;

int main() {
    list<string>greeting {"Hello","<name>"};
    list<string>word1 {":)","You have","X","credit","(s)","more to go."};
    list<string>word2 {"Congratulation!!","Hang in there!!","Almost done!!"};
    list<string>wish; //Final message will be displayed
    string name; int credit,balance; char choice;
    
    //prompt user to enter input name and credit [2m]

    cout << "Enter name : ";
    getline(cin, name);
    cout << "Enter current total credit : ";
    cin >> credit;

    //calculate the remaining credit   
    balance = 120 - credit;
    
    //replace "<name>" in the list greeting with the provided name [1m]
    greeting.back() = name; //use back function if you want to replace the last element in the list
    //copy the contents of the list greeting to the list wish [1m]
    wish = greeting;
    //replace "X" in the list word1 with the balance value [2m]
        list<string>::iterator it = word1.begin();
        advance(it,2);
        *it = to_string(balance);
    
    if (balance == 0){
        //the list wish should contain the generated output as shown in Option 1 [3m]
            choice = '0';
            it = word2.begin();
            advance (it, choice);
            word1.remove("(s)");
            word1.push_back(*it);
            wish.insert(wish.end(), word1.begin(), word1.end());
        
    }
    else if(balance<60){
        //the list wish should contain the generated output as shown in Option 2 [3m]
            choice = '2';
            it = word2.begin();
            advance (it, choice);
            word1.push_back(*it);
            wish.insert(wish.end(), word1.begin(), word1.end());
        
    }
    else if(balance>60){
        //the list wish should contain the generated output as shown in Option 3 [3m]

            choice = '1';
            it = word2.begin();
            advance (it, choice);
            word1.push_back(*it);
            wish.insert(wish.end(), word1.begin(), word1.end());

    }
    cout<<"\nResult:\n";
    for(auto x : wish)
        cout<<x<<" ";

    return 0;
}

