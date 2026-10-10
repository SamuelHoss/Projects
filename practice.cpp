#if 0

#include <iostream>
using namespace std;

struct Book {
    int pages;
    double price;

    void print() {
        cout << pages << " "
         << price << endl;

    }
};

int main () {
 Book book1;

book1.pages = 300;
book1.price = 19.99;

book1.print();

}

#endif

#if 0

#include <iostream>
using namespace std;

struct Student {
int id;
double gpa;
bool enrolled;

void print() {
cout << id << " " << gpa << " " << enrolled << endl;
 
}

};

int main() {
    Student student1;

    student1.id = 101;
    student1.gpa = 3.8;
    student1.enrolled = true;

student1.print();

return 0;
}

#endif

#if 0

#include <iostream>
using namespace std;

class Student {
    private:
    int id;

    public:
    void print() {
        cout << id << endl;
    }
};

int main () {

Student student1;

return 0;

}

#endif

#if 0
#include <iostream>
using namespace std;

class Student {
private:
int id;

public:
Student (){
    id = 0;
}

Student (int ID) {
    id = ID;
}

};

#endif

#include <iostream>
using namespace std;

struct Dog {
    string name;
    int age;

void print() {
    cout << name << " " << age << endl;
}


};

int main() {

Dog dog1;

dog1.name = "Buddy";
dog1.age = 4; 


dog1.print();


}