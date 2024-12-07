/*Subject code : CSEB3213 Data Structures & Algorithms 
  Section      : 02B 
  Student name : MUHAMMAD ZAID AQIL BIN ARIZAL 
  Student ID no: SW01083598
  Question no  : 1 */


  #include <iostream> 
  #include <queue>

  using namespace std;

  struct Record{

    string Owner;
    string platNo;

  };

  void carInput(queue <Record> &cars){

    string Owner, platNo;
    char choice = 'Y';

    cout <<"::Car Record::" << endl;

    while(choice == 'Y' || choice == 'y'){
        cout << "Enter Owner Name : ";
        cin>>ws;
        getline (cin, Owner);

        cout << "Enter plat no : ";
        cin>> platNo;

        Record car = {Owner, platNo};
        cars.push(car);

        cout << "Press [Y] for next input :";
        cin >> choice;
    }

  }

  void displayCar(queue <Record> rec){

    int count = 1;
    cout << "::List of Cars::\n";
    
    while(!rec.empty()){
    cout << count++ << "." << " Owner Name : " << rec.front().Owner << ", Plat No : " << rec.front().platNo << endl; 
    rec.pop();
    }
  }

  void serviceCar(queue<Record>temp){
    string platNo;
    char choice;
    int count=0;

    do{
        cout << "Would you like to check your queue status ? [Press Y for Yes] :";
        cin >> choice;

        if(choice == 'Y' || choice == 'y'){
            cout << "Enter plat no : ";
            cin >> platNo;

            while(!temp.empty()){
                Record car = temp.front();
                temp.pop();
                count++;
                if(car.platNo == platNo){
                    break;
                }
            }

            cout << "There is " << "("<< count-1 << ") car in queue before your turn. Estimated time require : " << (count-1) * 45 << " mins." << endl; 
        }

    }while(choice == 'Y' || choice == 'y');

  }

  int main(){

    queue<Record> cars;
    carInput(cars);
    displayCar(cars);
    serviceCar(cars);

  }