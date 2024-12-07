/*Subject code : CSEB3213 Data Structures & Algorithms 
  Section      : 02B 
  Student name : MUHAMMAD ZAID AQIL BIN ARIZAL 
  Student ID no: SW01083598
  Question no  : 2 */


#include<iostream>
#include <stack>

using namespace std;


void grading(stack<float>record){
    int passCount=0, failCount=0, i=0;
    while(!record.empty()){
        if (record.top() >= 50){
            cout << "Mark " << i + 1 << " : " << record.top() << "(Pass)" << endl;
            passCount++;
        }
        else{
            cout << "Mark " << i + 1 << " : " << record.top() << "(Fail)" << endl;
            failCount++; 
        }
        
        i++;
        record.pop();

    }
    cout << "Total Pass : " << passCount << endl;
    cout << "Total Fail : " << failCount << endl;
    cout << endl; 

}


int main() {
    int size; float mark;
    stack <float> record;

    cout<<"Enter total data to insert: ";
    cin >> size;
    for(int i = 1; i<=size; i++){
        cout<<"Enter mark : ";
        cin>>mark;
        record.push(mark);
    }    
    grading(record);

    if(record.empty())
        cout<<"[Result] All marks have been deleted."<<endl;
    
    cout<<"\nEnd of program";
    return 0;
}
