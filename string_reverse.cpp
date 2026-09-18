#include<iostream>
#include<cstring>
using namespace std;
int main(){
    int arrSize;
    cout<<"Enter the size of the string: ";
    cin>>arrSize;
    char *str = new char[arrSize];
    cin.ignore(); // To ignore the newline character left in the input buffer
    cout<<"Enter the string: ";
    cin.getline(str, arrSize);
    int length=strlen(str);// Calculate the length of the string
    int left=0;
    int right=length-1;
    while(left<right){
        swap(str[left], str[right]);//Reversing the string
        left++;
        right--;
    }
    cout<<"The reversed string is: ";//Display the reversed string
    for(int i=0;i<length;i++){
        cout<<str[i];
    }
    cout<<endl;
    delete [] str;

    return 0;
}