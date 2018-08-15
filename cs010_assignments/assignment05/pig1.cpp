#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>

using namespace std;


int genRandInt(int minNum, int maxNum)
{

    int randInt = rand() % (maxNum - minNum + 1) + minNum;
    return randInt;
}

int singleTurn (int holdValue)
{   

    int turnScore = 0;
    int rollValue = 0;
    
    while (turnScore < holdValue)
    {
        rollValue = genRandInt(1,6);
        
        if (rollValue == 1)
        {
            turnScore = 0;
            break;
        }
        
        else if (turnScore < holdValue)
        {
            turnScore = turnScore + rollValue;
        }
    }
    return turnScore;
}

int main()
{   
    srand(333);
    
    int holdValue = 0;
    int n = 0;
    int i = 0;
    int abc;
    
    double val1 = 0;
    double val2 = 0;
    double val3 = 0;
    double val4 = 0;
    double val5 = 0;
    double val6 = 0;
    double val7 = 0;
    
    cout << "What value should we hold at? ";
    cin  >> holdValue;
    cout << endl;
    
    cout << "Hold-at-N turn simulations? ";
    cin  >> n;
    cout << endl;
    
    while (i < n)
    {
        abc = singleTurn(holdValue);
        
        if (abc == 0)
        {
            ++val1;
        }
        
        else if (abc == holdValue)
        {
            ++val2;
        }
        
        else if (abc == holdValue + 1)
        {
            ++val3;
        }
        
        else if (abc == holdValue + 2)
        {
            ++val4;
        }
        
        else if (abc == holdValue + 3)
        {
            ++val5;
        }
        
        else if (abc == holdValue + 4)
        {
            ++val6;
        }
        
        else if (abc == holdValue + 5)
        {
            ++val7;
        }
        ++i;
    }
    
    //Table and probability calculations
    cout << "Score" << '\t' << "Estimated Probability" << endl;
    
    cout << "0" << '\t' << setprecision(6) << fixed << (val1 / n)
    << endl;
    
    cout << holdValue << '\t' << setprecision(6) << fixed << (val2 / n)
    << endl;
    
    cout << holdValue + 1 << '\t' << setprecision(6) << fixed << (val3 / n) 
    << endl;
    
    cout << holdValue + 2 << '\t' << setprecision(6) << fixed << (val4 / n)
    << endl;
    
    cout << holdValue + 3 << '\t' << setprecision(6) << fixed << (val5 / n)
    << endl;
    
    cout << holdValue + 4 << '\t' << setprecision(6) << fixed << (val6 / n)
    << endl;
    
    cout << holdValue + 5 << '\t' << setprecision(6)<< fixed << (val7 / n)
    << endl;
 
    return 0;
}