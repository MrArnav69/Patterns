#include<iostream>
using namespace std;

void printRectangle(int l, int b){
    for(int i = 0; i<b; i++){
        for(int j = 0; j<l; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    
}

int main(){
    
    int l, b;
    cout<<"Enter the length: ";
    cin>>l;
    cout<<"Enter the breadth: ";
    cin>>b;
    
    printRectangle(l, b);
    
    return 0;
}
