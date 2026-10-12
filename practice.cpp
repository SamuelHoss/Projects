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

#if 0

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

#endif

#if 0

#include <iostream>
using namespace std;

struct Student {
int id;
float gpa;
bool enrolled;

void print () {
    cout << id << " " << gpa << " " << enrolled << endl;
}

};

int main() {

Student student1;

student1.id = 101;
student1.gpa = 3.5;
student1.enrolled = true;

student1.print();


}

#endif

#if 0

#include <iostream>
using namespace std;

struct Book {
int pages;
float price;

void print() {
    cout << pages << " " << price << endl;
}


};

int main() {

Book book1;
Book book2;

book1.pages = 250;
book1.price = 12.5;

book2.pages = book1.pages;
book2.price = book1.price;



book1.print();



}

#endif

#if 0


//Class Example:

#include <iostream>
using namespace std;

class Student {

private:
int id;


public:
Student() {
    id = 0;
}

Student(int x) {
    id = x;
}


void print() {
    cout << id << endl;
}


};

int main() {

Student student1;
Student student2(45);


student1.print();
student2.print();

return 0;

}


#endif  


#if 0

#include <iostream>
using namespace std;

class Car {
private:
int year;


public:
Car () {
    year = 2020;
}

Car (int Y) {
    year = Y;
} 



};

#endif


#if 0

#include <iostream>
using namespace std;

class Phone {

private:
int age;


public:

Phone() {
     age = 0; 
}

Phone(int A) {
    age = A;
}

void setAge(int A) {
    age = A;
} 

int getAge() {
    return age;
}


};

int main () {

Phone phone1;

phone1.setAge(18);
cout << phone1.getAge() << endl;

return 0;

}

#endif


#if 0

#include <iostream>
using namespace  std;

class Phone {
private:
    int age;

public:
    Phone() {
        age = 0;
    }

    // Write setAge here
  void setAge(int A) {
        age = A;

    }

    // Write getAge here
    int getAge() {
        return age;
    }


    // Write the copy constructor here
    Phone(const Phone& other) {
        age = other.age;
    }
};

#endif 

#if 0

#include <iostream>
using namespace std;

class Phone {
    private:
    int age;


    public:


Phone(int age) {
    this-> age = age;
}

};


#endif

#if 0

class Phone {
private:
    int age;

public:
    void setAge(int age) {
        this-> age = age;
    }

    int getAge() {
        return age;
    }

    Phone(const Phone& other) {
        age = other.age;
    }
};


#endif

class Phone {
private:
    int age;

public:

Phone() {
    age = 0;
}


Phone(int A) {
    age = A;
}


    void setAge(int age) {
        // Write the line that changes the member variable
        this-> age = age;
    }

    int getAge() {
        // Write the line that returns the age
        return age;
    }

    Phone(const Phone& other) {
        // Write the line that copies the existing object's age
        this-> age = other.age;
    }
};