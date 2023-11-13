#include<iostream>
#include<string>
using namespace std;

class BigInteger {
private:
    string bigNum;

public:
    BigInteger() {
        this->bigNum = "";
    }

    BigInteger(string s) { // loai bo dau cach 
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ' ') {
                for (int j = i; j < s.size(); j++) {
                    s[j] = s[j + 1];
                }
                i--;
                s[s.size() - 1] = '\0';
            }
        }
        this->bigNum = s;
    }

    friend istream& operator>>(istream& is, BigInteger& obj) {
        getline(is, obj.bigNum);
        return is;
    }

    bool operator==(const BigInteger& bNum) const {
        return (this->bigNum == bNum.bigNum);
    }
};

int main() {
    BigInteger n1("1234567891011");
    BigInteger n2;
    cout << "Input an integer = ";
    cin >> n2;

    if (n1 == n2) {
        cout << "Equal.\n";
    } else {
        cout << "Not equal.\n";
    }

    return 0;
}