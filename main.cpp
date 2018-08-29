//
//  main.cpp
//  Created by Avery Howell on 8/29/18.
//

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    bool loop = true;
    
    while(loop){
        
        double stateSalesTax = .065, countySalesTax = .0275, year;
        string month;
        float totalCollected;
        string response;
        
        cout << "Enter month: ";
        cin >> month;
        cout << "Enter year: ";
        cin >> year;
        cout << "Total collected for this month: ";
        cin >> totalCollected;
        
        int totalCollectedStateSalesTax = totalCollected * stateSalesTax;
        int totalCollectedCountySalesTax = totalCollected * countySalesTax;
        int totalSalesTax = totalCollectedStateSalesTax + totalCollectedCountySalesTax;
        int sales = totalCollected - totalSalesTax;
        
        cout << month << " " << year << endl;
        cout << "---------------- " << endl;
        cout << "Total Collected:      " << "$ " << setprecision(7) << setw(8) << totalCollected << endl;
        cout << "Sales:                " << "$ " << setprecision(7) << setw(8) << sales << endl;
        cout << "County Sales Tax:     " << "$ " << setprecision(5) << setw(8) << totalCollectedCountySalesTax << endl;
        cout << "State Sales Tax:      " << "$ " << setprecision(5) << setw(8) << totalCollectedStateSalesTax << endl;
        cout << "Total Sales Tax:      " << "$ " << setprecision(5) << setw(8) << totalSalesTax << endl;
        cout << endl << "Do you want to perform another calculation? (Y/N): ";
        cin >> response;
        
        if (response == "y" || response == "Y" || response == "yes" ||response == "YES" ||response == "Yes" ) {
            continue;
        }
        else if (response == "n" || response == "N" || response == "no" ||response == "NO" ||response == "No" ){
            loop = false;
        }
        else {
            cout << "Error: unexpected response. Restarting..." << endl;
        }
    }
    return 0;
}

