#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main() {
    // Constants for ticket prices
    const double ADULT_TICKET_PRICE = 10.00;
    const double CHILD_TICKET_PRICE = 6.00;
    
    // Variables to store user input
    string movieName;
    int adultTicketsSold, childTicketsSold;
    
    // Ask for user input
    cout << "Enter the name of the movie: ";
    getline(std::cin, movieName);  // Read the movie name as a string
    
    cout << "Enter the number of adult tickets sold: ";
    cin >> adultTicketsSold;
    
    cout << "Enter the number of child tickets sold: ";
    cin >> childTicketsSold;
    
    // Calculate gross box office profit
    double grossBoxOfficeProfit = (adultTicketsSold * ADULT_TICKET_PRICE) + (childTicketsSold * CHILD_TICKET_PRICE);
    
    // Calculate net box office profit and amount paid to the distributor
    const double DISTRIBUTOR_PERCENTAGE = 0.2;  // 20% goes to the distributor
    double netBoxOfficeProfit = grossBoxOfficeProfit * (1.0 - DISTRIBUTOR_PERCENTAGE);
    double amountPaidToDistributor = grossBoxOfficeProfit * DISTRIBUTOR_PERCENTAGE;
    
    // Display the report
    cout << "Movie Name: \"" << movieName << "\"" << endl;
    cout << "Adult Tickets Sold: " << adultTicketsSold << endl;
    cout << "Child Tickets Sold: " << childTicketsSold << endl;
    cout << "Gross Box Office Profit: $ " << fixed << setprecision(2) << grossBoxOfficeProfit << endl;
    cout << "Net Box Office Profit: $ " << fixed << setprecision(2) << netBoxOfficeProfit << endl;
    cout << "Amount Paid to Distributor: $ " << fixed << setprecision(2) << amountPaidToDistributor << endl;
    
    return 0;
}