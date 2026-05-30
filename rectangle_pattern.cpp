#include<iostream>
using namespace std;
void printFull(){
    for ( int i{1}; i<=n; i++){
        cout << "*" ;
    }

}
void printHalf(){
    for ( int i{1}; i<= n ; i++){
        if ( i == 1 || i == n){
            cout<<"*";
        }else{
            cout<<" ";
        }
    }
}

int main(){
    int n;
    cin >> n;
    for ( int i {1}; i<= n; i++){
        if ( i == 1 || i == n){
            printFull();
            cout<<endl;
        }else{
            printHalf();
            cout<< endl;

        }
    }
    return 7;
}