//
//  main.cpp
//  EOF_Afterclass_PatriciaAntlitz
//
//  Created by Patricia Antlitz on 1/24/23.
//

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(int argc, const char * argv[])
{
    int numInput;
    int totalSum = 0;
    //basic instructions
    cout << "This program allows the user to input numbers of their liking. When the user is done inputting, the program will calculate the total of all numbers." << endl;
    cout << endl;
    cout << "To stop entering numbers and get a total, press Ctrl-z on a Windows machine, or Ctrl-d on a Mac." << endl << endl;
    
    cout << "Enter your desired numbers: " << endl;
    
    while(cin)
    {
        //sets the value of numInput to -1, this allows for the correct calculation when the total is printing
        numInput = EOF;
        //cout << "this is the eof " << numInput << endl;
        cin >> numInput;
        totalSum += numInput;
    }
    
    //the value of numInput is set at -1 when its assigned to EOF
    totalSum += 1;
    
    cout << "The total sum is = " << totalSum << endl;
    
    return 0;
}
