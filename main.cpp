#include <iostream>
using namespace std;


class Student{
    public:
        int age;
        double height;
        char name[20];

        int get_age(){
           return this->age = age;
        }
        void set_age(int a){
            this->age = a;
        }
    static void test(int age, int s){
            age = s;
            cout <<  "\n" << age;

        }
};


int main() {

    Student john;
    john.age = 23;
    john.height = 1.78;
    john.set_age(25);
    int data = john.get_age();
    cout << data;
    Student::test(john.age, 34);



    return 0;
}
