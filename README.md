🔧 Experiment: Function Overloading & Operator Overloading in C++

🎯 Aim-

To study and implement Function Overloading and Operator Overloading in C++.

📚 Theory-

In C++, overloading is a core feature of polymorphism, allowing the same function or operator to behave differently based on context. This makes code more intuitive, readable, and maintainable.

🔹 Function Overloading-

Function overloading allows multiple functions with the same name but different parameters. It enables calling the correct function at compile-time based on the number and types of arguments.

✅ Key Points:

Functions must differ by parameter count or types.

Return type alone cannot distinguish functions.

This is an example of compile-time polymorphism.

✅ Advantages:

Eliminates the need for multiple function names.

Groups related functionality together.

Enhances code readability and reusability.

🔹 Operator Overloading

Operator overloading allows customizing the behavior of operators (like +, -) for user-defined types such as classes.

✅ Key Points:

Declared using the keyword operator.

Can be implemented as member functions or friend functions.

Some operators like ::, ., .*, ?: cannot be overloaded.

Allows object behavior similar to primitive data types.

✅ Advantages:

Enables natural usage of operators on objects.

Enhances code clarity and encapsulation.

Allows intuitive syntax for custom types.

📋 Implementation Algorithms-
🧾 Function Overloading (Addition Class)
class Addition {
public:
    int sum(int a, int b) {
        return a + b;
    }

    int sum(int a, int b, int c) {
        return a + b + c;
    }

    double sum(double d1, double d2) {
        return d1 + d2;
    }
};

int main() {
    Addition obj;
    cout << obj.sum(10, 20) << endl;        // 2 ints
    cout << obj.sum(10, 20, 30) << endl;    // 3 ints
    cout << obj.sum(10.5, 20.3) << endl;    // 2 doubles
    return 0;
}

🧾 Function Overloading (UserInfo Class)-
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

🧾 Operator Overloading (Complex Numbers)
class Complex {
    float real, imag;

public:
    Complex(float r = 0, float i = 0) : real(r), imag(i) {}

    Complex operator + (const Complex& c) {
        return Complex(real + c.real, imag + c.imag);
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(3.5, 4.5), c2(1.5, 2.5);
    Complex c3 = c1 + c2;
    c3.display();
    return 0;
}

🧾 Operator Overloading (Book Class)-
class Book {
    string title;
    int pages;

public:
    Book(string t = "", int p = 0) : title(t), pages(p) {}

    Book operator - (const Book& b) {
        return Book(title + " & " + b.title, pages + b.pages);
    }

    void display() {
        cout << "Title: " << title << ", Pages: " << pages << endl;
    }
};

int main() {
    Book b1("C++ Basics", 200), b2("OOP Concepts", 150);
    Book b3 = b1 - b2;

    b1.display();
    b2.display();
    b3.display();
    return 0;
}

🧠 Conclusion-

This experiment demonstrates the power and flexibility of overloading in C++.

✅ Function Overloading simplifies method calls by using the same name with different parameters.

✅ Operator Overloading makes objects behave like built-in types, allowing natural, readable expressions.

✅ Both are examples of compile-time polymorphism, resolved by the compiler.

✅ Overloading boosts readability, maintainability, and abstraction, especially in object-oriented design.
