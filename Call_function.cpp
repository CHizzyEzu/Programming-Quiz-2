// This program uses 6 functions and pass-by-copy parameters

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

double avg(int sum, int count) // returns the average of a sum of count numbers

    {
        return static_cast<double>(sum) / count;
    }

void avg(int sum, double& average) // modifies average with the average of a sum of count numbers

    {
        average = static_cast<double>(sum);
    }

bool isOdd(int value) // returns true if value is odd, false if it is not

    {
       return value % 2 != 0;
    }

bool isSame(int firstNum, int secondNum, int thirdNum, int compareNum) //Returns true if compareNum is the same as firstNum, secondNum, or thirdNum

    {
        return (compareNum == firstNum) || (compareNum == secondNum) || (compareNum == thirdNum);
    }
bool isSame(int number, int compareNum) //returns true if number is the same as compareNum

    {
       return number == compareNum;
    }

int main()

    {

        std::ofstream outputFile;
        outputFile.open("numbers.txt");
        
        if(!outputFile.is_open())
        {
            cerr << "Error: Unable to open file numbers.txt!" << endl;
            return 1;
        }

        for (int num = 1; num <= 10; num++ )
        {
            outputFile << num << endl;
        }

        outputFile.close();

        std::ifstream inputFile("numbers.txt");
        if (!inputFile.is_open())
        {
            cerr << "Error: Unable to open file numbers.txt!" << endl;
            return 1;
        }

        int sum = 0;
        int count = 0;
        int num = 0;

        while (outputFile << num)
        {
            sum += num;
            count++;
        }

        inputFile.close();

        double average;
        average = avg(sum, count);

        cout << "Average: " << fixed << setprecision(2) << average << endl;

        return 0;
    }