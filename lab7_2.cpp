//Dialog of the first example is given below.

#include<iostream>
#include<string>
using namespace std;

int main()
{
    string name;
    int studentid;
    int gear;
    string movie;
    string day;
    string sen;
    cout << "Fahsai: Sawadee ka...Can you tell me your name?\n";
    cout << "?????: ";
    getline(cin,name);
    cout << "Fahsai: Wow!!! " << name << " is a really cool name.\n";
    cout << "Fahsai: I think you are an Engineering student. What is your student ID?\n";
    cout << name << ": ";
    cin >> studentid;
    gear = studentid/10000000;
    /*cout << name << ": " << studentid <<"\n";*/
    cout << "Fahsai: I think you may be GEAR " << gear-12 << "." << " I have a free movie ticket for you.\n";
    cout << "Fahsai: Let's go to the cinema together!!!\n";
    cout << "Fahsai: What movie do you want to watch?\n";
    cin.ignore();
    cout << name << ": ";
    getline(cin,movie); 
    cout << "Fahsai: So....which day are you free to go with me?\n";
    cout << name << ": ";
    getline(cin,day);
    cout << "Fahsai: " << day << "....that is OK!!! I'm looking forward to watching " << movie << " with you.\n";
    cout << name << ": ";
    getline(cin,sen);
    cout << "Fahsai: 555+ see you " << day << ". Bye Bye \\(^ ^)/\n";
return 0;
}