#include<iostream>
#include<string>
using namespace std;

class Bike {
private:
    char* brand; // hieu xe

public:
    virtual void move(int t1) {
        cout << brand << ":" << t1 * 12 << " ";
    }

    Bike() {
        string s = "Bike";
        this->brand = new char[5];
        for (int i = 0; i < 5; i++) {
            this->brand[i] = s[i];
        }
        this->brand[5] = '\0'; 
    }

    Bike(string s) {
        this->brand = new char[s.length() + 1];
        for (int i = 0; i < s.length(); i++) {
            this->brand[i] = s[i];
        }
        this->brand[s.length()] = '\0';
    }

    virtual ~Bike() {
        if (this->brand) {
            delete[] this->brand;
        }
    }
};

class EBike : public Bike {
public:
    void move(int t2) override {
        Bike::move(t2 * 2);
    }

    EBike() : Bike("EBike") {}
};

void display(Bike& a, EBike& b) {
    a.move(2);
    b.move(2);
}

int main() {
    EBike b1, b2;
    display(b1, b2);
    return 0;
}
