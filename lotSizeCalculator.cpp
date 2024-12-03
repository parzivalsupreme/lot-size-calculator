#include <iostream>
using namespace std;
#include <cmath>

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

    cout << "Trade size: " << round(lotSize * 1000) / 1000;

    return 0;
}