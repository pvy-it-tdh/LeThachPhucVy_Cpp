#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Die {
private:
    int sides; // Số mặt của xúc xắc
    int value; // Giá trị của xúc xắc sau mỗi lần tung

public:
    // Hàm tạo với số mặt của xúc xắc
    Die(int numSides) : sides(numSides), value(1) {}

    // Hàm tung xúc xắc và trả về giá trị
    int roll() {
        value = rand() % sides + 1;
        return value;
    }

    // Hàm trả về giá trị của xúc xắc
    int getValue() const {
        return value;
    }
};

class Game {
private:
    Die die1; // Xúc xắc thứ nhất
    Die die2; // Xúc xắc thứ hai
    int playerTotal; // Tổng điểm của người chơi
    int computerTotal; // Tổng điểm của máy tính

public:
    // Hàm tạo với hai viên xúc xắc sáu mặt
    Game() : die1(6), die2(6), playerTotal(0), computerTotal(0) {}

    // Hàm chơi trò chơi
    void play() {
        srand(static_cast<unsigned int>(time(0))); // Seed cho rand()

        // Vòng lặp chơi trò chơi
        while (playerTurn()) {
            if (computerTurn()) {
                break; // Máy tính đã vượt quá 21
            }
        }

        // Hiển thị kết quả
        cout << "\nKet qua:\n";
        cout << "Diem cua ban: " << playerTotal << endl;
        cout << "Diem cua may tinh: " << computerTotal << endl;

        // Xác định người chiến thắng
        determineWinner();
    }

private:
    // Hàm thực hiện lượt chơi của người chơi
    bool playerTurn() {
        cout << "\nLuot cua ban:\n";
        cout << "Ban co muon tung xuc xac khong? (y/n): ";
        char choice;
        cin >> choice;

        if (choice == 'y' || choice == 'Y') {
            int roll1 = die1.roll();
            int roll2 = die2.roll();
            int total = roll1 + roll2;

            cout << "Ban tung duoc " << roll1 << " va " << roll2 << ".\n";
            cout << "Tong diem cua ban: " << total << endl;

            playerTotal += total;

            if (playerTotal > 21) {
                cout << "Ban da vuot qua 21! Ban thua!\n";
                return false; // Người chơi thua
            }

            return true; // Người chơi tiếp tục
        } else {
            return false; // Người chơi không tung xúc xắc nữa
        }
    }

    // Hàm thực hiện lượt chơi của máy tính
    bool computerTurn() {
        cout << "\nLuot cua may tinh:\n";

        int roll1 = die1.roll();
        int roll2 = die2.roll();
        int total = roll1 + roll2;

        cout << "May tinh tung duoc " << roll1 << " va " << roll2 << ".\n";
        cout << "Tong diem cua may tinh: " << total << endl;

        computerTotal += total;

        if (computerTotal > 21) {
            std::cout << "May tinh da vuot qua 21! Ban thang!\n";
            return true; // Máy tính thua
        }

        return false; // Máy tính tiếp tục
    }

    // Hàm xác định người chiến thắng
    void determineWinner() {
        if (playerTotal <= 21 && (computerTotal > 21 || playerTotal > computerTotal)) {
            cout << "Chuc mung! Ban thang!\n";
        } else if (computerTotal <= 21 && (playerTotal > 21 || computerTotal > playerTotal)) {
            cout << "May tinh thang!\n";
        } else {
            cout << "Hoa!\n";
        }
    }
};

int main() {
    Game blackjack;
    blackjack.play();

    return 0;
}
