#include <iostream>
using namespace std;

class IFace {
public:
    virtual void show() const = 0;
    virtual IFace* clone() const = 0;
    virtual ~IFace() {}
};

class Face : public IFace {
private:
    string shape;

protected:
    string getShape();

public:
    Face(string sh = "") : shape(sh) {}

    virtual void show() const override {
        cout << "Shape: " << shape << endl;
    }

    virtual IFace* clone() const override {
        return new Face(*this);
    }
};

class EyedFace : public IFace {
private:
    string shape;
    int eyes;

public:
    static int COUNT_OBJECT;

    EyedFace(const string& sh, const int& e) : shape(sh), eyes(e) {
        COUNT_OBJECT++;
    }

    virtual void show() const override {
        cout << "Shape: " << shape << ", Eyes: " << eyes << endl;
    }

    virtual IFace* clone() const override {
        return new EyedFace(*this);
    }

    virtual ~EyedFace() {
        COUNT_OBJECT--;
    }
};

int EyedFace::COUNT_OBJECT = 0;

void testFace(IFace* fc) {
    IFace* a[3] = {fc, fc->clone(), fc->clone()};
    for (int i = 0; i < 3; i++) {
        a[i]->show();
    }
    cout << "The same 3 lines?" << endl;
    delete a[1];
    delete a[2];
    return;
}

int main() {
    Face fc;
    Face fc1("Rectangle");
    testFace(&fc1);
    cout << "So doi tuong thuoc EyedFace: " << EyedFace::COUNT_OBJECT << endl;
    return 0;
}
