#include <iostream>
using namespace std;

int main()
{
    double risk, openPrice, stopLossPrice, accountBalance;
    int contractSize = 1;

    cout << "Open price: ";
    cin >> openPrice;

    cout << "Stop loss price: ";
    cin >> stopLossPrice;

    cout << "Account Balance: ";
    cin >> accountBalance;

    cout << "risk: ";
    cin >> risk;

    double riskAmount = accountBalance * risk / 100;

    double priceDifference = openPrice - stopLossPrice;

    double lotSize = riskAmount / priceDifference * contractSize;

    cout << "Trade size: " << lotSize;

    return 0;
}