// ref.cpp
#include <iostream>

struct Studente {
    int age;
};

void change(Studente& s) {
    s.age = 99;
}

int main() {
    Studente a;
	a.age = 20;
    change(a);
    std::cout << a.age << "\n";
}

