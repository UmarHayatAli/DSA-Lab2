#include <iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter the no. of employees: ";
    cin>>size;
    int *salArray=new int[size];
    for(int i=0;i<size;i++){
        //input salaries
        cout<<"Enter the salary of employee "<<(i+1)<< ": ";
        cin>>salArray[i];
    }
    for(int i=0;i<size;i++){
            //Apply increment formula
        salArray[i] = salArray[i] + salArray[i] /(i + 1);
        }
    for(int i=0;i<size;i++){
        //Display the incremented salaries
        cout<<"The incremented salary of "<<(i+1)<<" employee is: "<<salArray[i]<<endl;
    }
    delete[] salArray;
    return 0;
}