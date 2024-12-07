/*Subject code : CSEB3213 Data Structures & Algorithms 
  Section      : 02B 
  Student name : MUHAMMAD ZAID AQIL BIN ARIZAL 
  Student ID no: SW01083598
  Question no  : 3 */

  #include <iostream> 
  #include <stack> 

  using namespace std;

  void display(stack<int>binaryDigits){
    cout << "Binary number : ";
    while (!binaryDigits.empty()){
        cout << binaryDigits.top();
        binaryDigits.pop();
    }
  }

  int main(){
    stack <int> binaryDigits;
    int number, remainder;

    cout<< "::Decimal Binary Converter::" << endl;
    do{
        cout << "Enter a decimal number :";
        cin >> number;
    }
    while (number <= 0);

    int tempNumber = number;

    while (number>0){
        int remainder = number % 2;
        binaryDigits.push(remainder);
        number = number / 2;
    }

    cout << "Decimal Number :" << tempNumber << endl;

    display(binaryDigits);

    cout << endl;

    cout << "Thank you.";
    
  }