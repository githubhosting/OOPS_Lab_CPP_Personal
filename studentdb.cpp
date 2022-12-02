#include <iostream>
using namespace std;

class student{
    private: 
    char name[30];
    int id;
    int sem;
    float cgpa;
    
    public:
    void read(int j){
        cout<<"Enter name of student "<<j+1<<": ";
        cin>>name;
        cout<<"Enter id of student "<<j+1<<": ";
        cin>>id;
        cout<<"Enter semester of student "<<j+1<<": ";
        cin>>sem;
        cout<<"Enter cgpa of student "<<j+1<<": ";
        cin>>cgpa;
    }
    void display(){
        cout << "Student Details: \n";
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Sem: " << sem << endl;
        cout << "CGPA: " << cgpa << endl;
    }
    // display only student details of user defined semester
    
    void display(int sem){
        if(this->sem == sem){
            cout << "Student Details: \n";
            cout << "Name: " << name << endl;
            cout << "ID: " << id << endl;
            cout << "Sem: " << this->sem << endl;
            cout << "CGPA: " << cgpa << endl;
        }
    }
};

int main() {
    int i, j, n;
    cout << "Enter the number of students: \n";
    cin >> n;
    student s[n];
    for(i=0; i<n; i++){
        s[i].read(i);
    }
    for(i=0; i<n; i++){
        s[i].display();
    }
    cout << "Enter the semester to display student details: \n";
    cin >> j;
    for(i=0; i<n; i++){
        s[i].display(j);
    }
    
    return 0;
}
