#include <iostream>
using namespace std;

void analyze_pointer(int *ptr){// pointer_analyzer function
        cout<<"The memory address of the pointer is: "<<ptr<<endl;
        cout<<"The actual value of the pointer is: "<<*ptr<<endl;
    }
int main(){
    int iValue = 90;// stack memory allocation
    analyze_pointer(&iValue);
    int *dynamic_value = new int;// heap memory allocation
    *dynamic_value = 100;
    analyze_pointer(dynamic_value);
    delete dynamic_value;    
    return 0;
}