// Mortalityrate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Virus
{
public:

    virtual float GetMortalityRate()=0;

};
class Covid :public Virus
{
public:
    float mRate, fcase, fdeath;
    float GetMortalityRate()
    {
        cout << "Enter number of COVID cases : ";
        cin >> fcase;
        cout << "Enter number of COVID deaths : ";
        cin >> fdeath;
        mRate = (fdeath / fcase) * 100;
        cout << "Mortality Rate for COVID is : " << mRate <<" %";
        cout << endl;
        return mRate;
    }
};
class Hiv :public Virus
{
public:
    float mRate, fcase, fdeath;
    float GetMortalityRate()
    {
        cout << "Enter number of HIV cases : ";
        cin >> fcase;
        cout << "Enter number of HIV deaths : ";
        cin >> fdeath;
        mRate = (fdeath / fcase) * 100;
        cout << "Mortality Rate for COVID is : " << mRate << " %";
        cout << endl;
        return mRate;
    }
};
class BirdFlue :public Virus
{
public:
    float mRate, fcase, fdeath;
    float GetMortalityRate()
    {
        cout << "Enter number of BirdFlue cases : ";
        cin >> fcase;
        cout << "Enter number of BirdFlue deaths : ";
        cin >> fdeath;
        mRate = (fdeath / fcase) * 100;
        cout << "Mortality Rate for BirdFlue is : " << mRate << " %";
        cout << endl;
        return mRate;
    }
};
int main()
{
    int i;
    Covid obj1;
    Hiv obj2;
    BirdFlue obj3;
    cout << "Enter 1 for COVID virus : " << endl;
    cout << "Enter 2 for HIV virus : " << endl;
    cout << "enter 3 for BirdFlue virus : " << endl;
    cin >> i;
    if (i == 1)
        obj1.GetMortalityRate();
    else if (i == 2)
        obj2.GetMortalityRate();
    else
        obj3.GetMortalityRate();
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
