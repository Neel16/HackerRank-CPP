#include <iostream>
#include <sstream>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/
class Student{

    int age, standard;
    string first_name, last_name;
    public:
        Student(){
            age=0;
            standard=0;
            first_name="";
            last_name="";
        } 
        ~Student(){

        }

        void set_age(int a){
            age = a;
        }
        void set_standard(int s){
            standard = s;
        }
        void set_first_name(string str){
            first_name = str;
        }
        void set_last_name(string str){
            last_name = str;
        }

        int get_age(){
            return age;
        }
        int get_standard(){
            return standard;
        }
        string get_first_name(){
            return first_name;
        }
        string get_last_name(){
            return last_name;
        }

        string to_string(){

            stringstream ss;
            ss<<age<<","<<first_name<<","<<last_name<<","<<standard;

            string str=ss.str();

            return str;

        }
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}

