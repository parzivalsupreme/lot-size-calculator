#include <iostream>
using namespace std;
#include <cmath>

int main()
{
    double risk, openPrice, stopLossPrice, accountBalance;
    int contractSize = 1;
    char continueTrade;

    do
    {
        cout << "Open price: ";
        cin >> openPrice;

        cout << "Stop loss price: ";
        cin >> stopLossPrice;

        cout << "Account Balance: ";
        cin >> accountBalance;

        cout << "Risk (%): ";
        cin >> risk;

        double riskAmount = accountBalance * risk / 100;

        double priceDifference = openPrice - stopLossPrice;

        double lotSize = riskAmount / priceDifference * contractSize;

        cout << "Trade size: " << round(lotSize * 1000) / 1000 << endl;

        cout << "Another trade? (y/n): ";
        cin >> continueTrade;
    } while (continueTrade == 'y' || continueTrade == 'Y');

    return 0;
}
