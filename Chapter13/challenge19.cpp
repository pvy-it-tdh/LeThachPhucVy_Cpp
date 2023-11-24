#include <iostream>
#include <string>
using namespace std;

class Question {
private:
    string question;
    string answer1;
    string answer2;
    string answer3;
    string answer4;
    int correctAnswer;

public:
    // Hàm tạo
    Question(string q, string a1, string a2, string a3, string a4, int correct)
        : question(q), answer1(a1), answer2(a2), answer3(a3), answer4(a4), correctAnswer(correct) {}

    // Truy cập câu hỏi
    string getQuestion() const {
        return question;
    }

    // Truy cập câu trả lời số 1
    string getAnswer1() const {
        return answer1;
    }

    // Truy cập câu trả lời số 2
    string getAnswer2() const {
        return answer2;
    }

    // Truy cập câu trả lời số 3
    string getAnswer3() const {
        return answer3;
    }

    // Truy cập câu trả lời số 4
    string getAnswer4() const {
        return answer4;
    }

    // Truy cập câu trả lời đúng
    int getCorrectAnswer() const {
        return correctAnswer;
    }
};

int main() {
    // Tạo mảng câu hỏi
    Question questions[] = {
        {"Cau hoi 1?", "A. Dap an 1", "B. Dap an 2", "C. Dap an 3", "D. Dap an 4", 1},
        {"Cau hoi 2?", "A. Dap an 1", "B. Dap an 2", "C. Dap an 3", "D. Dap an 4", 2},
        // Thêm các câu hỏi khác tương tự
    };

    int player1Score = 0;
    int player2Score = 0;

    // Lặp qua từng câu hỏi
    for (int i = 0; i < 10; ++i) {
        cout << "Cau hoi " << (i + 1) << ": " << questions[i].getQuestion() << "\n";
        cout << "A. " << questions[i].getAnswer1() << "\n";
        cout << "B. " << questions[i].getAnswer2() << "\n";
        cout << "C. " << questions[i].getAnswer3() << "\n";
        cout << "D. " << questions[i].getAnswer4() << "\n";

        cout << "Chon dap an (A/B/C/D): ";
        char player1Choice, player2Choice;
        cin >> player1Choice >> player2Choice;

        if (player1Choice - 'A' + 1 == questions[i].getCorrectAnswer()) {
            cout << "Dap an dung! Diem cua nguoi choi 1 +1\n";
            ++player1Score;
        } else {
            cout << "Dap an sai!\n";
        }

        if (player2Choice - 'A' + 1 == questions[i].getCorrectAnswer()) {
            cout << "Dap an dung! Diem cua nguoi choi 2 +1\n";
            ++player2Score;
        } else {
            cout << "Dap an sai!\n";
        }

        cout << "\n";
    }

    // Hiển thị kết quả
    cout << "Ket qua:\n";
    cout << "Diem nguoi choi 1: " << player1Score << "\n";
    cout << "Diem nguoi choi 2: " << player2Score << "\n";

    // Xác định người chiến thắng
    if (player1Score > player2Score) {
        cout << "Nguoi choi 1 chien thang!\n";
    } else if (player2Score > player1Score) {
        cout << "Nguoi choi 2 chien thang!\n";
    } else {
        cout << "Hoa!\n";
    }

    return 0;
}
