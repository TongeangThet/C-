#include <iostream>
#include <string>

using namespace std;

int main(){
    system("cls");
    string name;
    cout << "What's your name?" << endl;
    cin >> name;
    cout << "Hello, " << name << "! How old are you?" << endl;
    int age;
    cin >> age;
    cout << "You are " << age << " years old." << endl;


    return 0;
}