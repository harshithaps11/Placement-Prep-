//case1 - register
//case 2 - login
//case 3 - admmin login
//case 4 - logout
//case 5 - exit
//build a registration system using functions and switch case statements
//print the menu service details first and after choosing and completing service until user exits keep on printing menu


#include <iostream>
using namespace std;
void registerUser(){
    cout<<"registering user..."<<endl;
    cout<<"enter username: ";
    string username;
    cin >> username;
    cout<<"enter password: ";
    string password;
    cin >> password;
    cout<<"user registered successfully..."<<endl;
}
void loginUser(){
    cout<<"logging in user..."<<endl;
    cout<<"enter username: ";
    string username;
    cin >> username;
    cout<<"enter password: ";
    string password;
    cin >> password;
    cout<<"user logged in successfully..."<<endl;
}
void adminLogin(){
    cout<<"admin logging in..."<<endl;
    cout<<"enter admin username: ";
    string adminUsername;
    cin >> adminUsername;
    cout<<"enter admin password: ";
    string adminPassword;
    cin >> adminPassword;
    cout<<"admin logged in successfully..."<<endl;

}
void logoutUser(){
    cout<<"logging out..."<<endl;
    cout<<"user logged out successfully..."<<endl;
    
}
void exitSystem(){
    cout<<"exiting..."<<endl;
    cout<<"system exited successfully..."<<endl;
}
int main(){
    int choice ;
    cout << "Welcome to the Registration System" << endl;
    cout << "1. Register User" << endl;
    cout << "2. Login User" << endl;
    cout << "3. Admin Login" << endl;
    cout << "4. Logout User" << endl;
    cout << "5. Exit System" << endl;
    cout<<"enter your choice: ";
    cin >> choice;
    while(choice!=5){
        switch ( choice ){
        case 1:
            registerUser();
            break;
        case 2:
            loginUser();
            break;
        case 3:
            adminLogin();
            break;
        case 4:
            logoutUser();
            break;
        case 5:
            exitSystem();
            break;
        default:
            cout<<"invalid choice..."<<endl;

        }
        cout << "Welcome to the Registration System" << endl;
        cout << "1. Register User" << endl;
        cout << "2. Login User" << endl;
        cout << "3. Admin Login" << endl;
        cout << "4. Logout User" << endl;
        cout << "5. Exit System" << endl;
        cout<<"enter your choice: ";
        cin >> choice;
        

    }
    
    return 0;
}