/*Subject code : CSEB3213 Data Structures & Algorithms
 Section : 02B
 Student name : MUHAMMAD ZAID AQIL BIN ARIZAL
 Student ID no: SW01083598
 Question no : 1 */ 

#include <iostream>
#include <vector>
using namespace std;


void display(vector <float> area){
    for (int i =0; i < area.size(); i++){
        cout << area[i] << " / ";
    }
}

int main(){
vector <float> width = {2.0, 2.1, 9.3, 7.4, 8.1};
vector <float> length = {6.0, 2.3, 4.2, 7.4, 9.1};
vector <float> area;
 
for (int i = 0; i < width.size(); ++i){
    area.push_back(width[i] * length[i]);
}
area.insert(area.begin()+3, 10.4) ;


cout<<"List of area : ";    
display (area);

return 0;
}
