#include <iostream>
#include "functions.h"
#include <string>
#include <vector>
#include <memory>
#include <cstdlib>
using namespace std;

int main()
{
    DataModifcation dataInstance;
    int size;
    char endVectorFilling;
    cout << "********************************************\n";
    cout << "************* Data Modification ************\n";
    cout << "********************************************\n";
    cout << "Please continue to enter in your data, enter in the letter x when you want to stop entering in data.";

    do
    {
        int i = 1;
        cout << "Enter in your value for data slot #" << i << " here:";
        cin >> 
    } while (endVectorFilling == 'x');
    
    char choice;
    
    cout << "Thank you for entering in all of your data!" << "\n";
    do
    {
        cout << "Now please choose from one of the options below!" << endl;
        cout << "Choice A: Sort your data in Acending order";
        cout << "\nChoice B: Find the maximum and minimum value in your data set";
        cout << "\nChoice C: Find the average of your data set";
        cout << "\nChoice D: Accumulate the sum of your data";
        cout << "\nChoice E: End the program (data will NOT be saved once program is closed)" << endl;
        cout << "Enter in the letter that corresponds with the choice you want to make: ";
        cin >> choice;
        switch(choice)
        {
            case 'A':
            case 'a':
            DsortArray(arr, size);
            cout << "Your array has been successfully sorted! It now looks like this:" << endl;
            for(int j = 0; j < size; j++)
            {
                cout << arr[j] << "  ";
            }
            cout << endl;
    
            break;
            case 'B':
            case 'b':
            cout << "Your maximum value in your dataset is " << findMax(arr, size) << "." << "\n";
            cout << "Your minimum value in your dataset is " << findMin(arr, size) << "." << "\n";
            break;
            case 'C':
            case 'c':
            cout << "The average of all of the values in your dataset is " << findAverage(arr, size) << ".\n";
            break;
            case 'D':
            case 'd':
            cout << "The sum of all of your data is " << findSum(arr, size) << "." << endl;
            break;
            case 'E':
            case 'e':
            {
                cout << "Thank you for using this program! Have a great day!" << endl;
            }
            break;
            default:
            cout << "Error: Invalid Choice, please retry." << endl;
            
           cout << "\n\n\n";
        }   
    } while (choice != 'E' && choice != 'e');
    delete[] arr;
    return 0;
}