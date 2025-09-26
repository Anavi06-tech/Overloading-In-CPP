#include <iostream>
using namespace std;

class UserInfo {
public:
    void show(string name) {
        cout << "Name: " << name << endl;
    }

    void show(string name, int age) {
        cout << "Name: " << name << ", Age: " << age << endl;
    }

    void show(string name, string city) {
        cout << "Name: " << name << ", City: " << city << endl;
    }

    void show(string name, int age, string city) {
        cout << "Name: " << name << ", Age: " << age << ", City: " << city << endl;
    }
};

int main() {
    UserInfo u;

    u.show("Anavi");
    u.show("Anavi", 19);
    u.show("Anavi", "Pune");
    u.show("Anavi", 19, "Pune");

    return 0;
}
//Name: Anavi
Name: Anavi, Age: 19
Name: Anavi, City: Pune
Name: Anavi, Age: 19, City: Pune
