#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class Person{

    protected:
        int age;
        string name;
    public:
    Person(){
        age=0;
        name ="";
    }
    ~Person(){}
    virtual void getdata(){
        cin>>name>>age;
    }
    virtual void putdata(){
        cout<<name<<age;
    }
};

class Professor: public Person{

    protected:
        int publications;
        int cur_id;
        static int id;
    public:

    Professor(){
        
        cur_id= ++id;
    }
    ~Professor(){}

    void getdata(){
        cin>>name;
        cin>>age;
        cin>>publications;

    }
    void putdata(){
        cout<<name<<" "<<age<<" "<<publications<<" "<<cur_id<<endl;
    }
};
int Professor::id = 0;
class Student: public Person{

    protected:
        int marks[6];
        int cur_id;
        static int id;
    public:

    Student(){
        
        cur_id= ++id;
    }
    ~Student(){}

    void getdata(){
        cin>>name;
        cin>>age;
        for(int i=0; i<6; i++)
        {
            cin>>marks[i];
        }

    }
    void putdata(){
        int sum=0;
        for(int i=0; i<6 ;i++)
        {
            sum+=marks[i];
        }

        cout<<name<<" "<<age<<" "<<sum<<" "<<cur_id;
        
        cout<<endl;
    }
};
int Student::id = 0;
int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}
