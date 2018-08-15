//  =============== BEGIN ASSESSMENT HEADER ================
/// @pig.cpp
/// @brief assignment05/pig
///
/// @author Test Student [vgane002@ucr.edu]
/// @date Febuary 20, 2015
///
/// @par Plagiarism Section
/// I hereby certify that I have not received assistance on this assignment,
/// or used code, from ANY outside source other than the instruction team.
//  ================== END ASSESSMENT HEADER ===============
#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>

using namespace std;



int genRandInt(int a, int b)
{
    int randNum=0;
    randNum = rand() % (b-a + 1) + a;
    return randNum;
}

int singleTurn (int holdNum)
{   

    int score = 0;
    int roll = 0;
    
    while (score < holdNum)
    {
        roll = genRandInt(1,6);
        
        if (roll == 1)
        {
            score = 0;
            break;
        }
        
        else if (score < holdNum)
        {
            score = score + roll;
        }
    }
    return score;
}

int main() 
{ 
    int holdNum;
    int turnNum = 0;
    int i;
    int score = 0;
    int y;
    
    srand(time(0));
    cout<<"What value should we hold at? ";
    cin>>holdNum;
    cout<<endl;
    cout<<"Hold-at-N turn simulations? ";
    cin>>turnNum;
    cout<<endl;
   
    double holdNumCountOne = 0.0;
    double holdNumCountTwo = 0.0;
    double holdNumCountThree = 0.0;
    double holdNumCountFour = 0.0;
    double holdNumCountFive = 0.0;  
    double holdNumCountSix=0.0;
    double holdNumCountSeven=0.0;
     
    while (i < turnNum)
    {
        y= singleTurn(holdNum);
        
        if (y == 0)
        {
            ++holdNumCountOne;
        }
        
        else if (y == holdNum)
        {
            ++holdNumCountTwo;
        }
        
        else if (y == holdNum + 1)
        {
            ++holdNumCountThree;
        }
        
        else if (y== holdNum + 2)
        {
            ++holdNumCountFour;
        }
        
        else if (y == holdNum + 3)
        {
            ++holdNumCountFive;
        }
        
        else if (y == holdNum + 4)
        {
            ++holdNumCountSix;
        }
        
        else if (y == holdNum + 5)
        {
            ++holdNumCountSeven;
        }
        ++i;

    }//end of while loop
    
    cout << "Score" << '\t' << "Estimated Probability" << endl;
    
    cout << "0" << '\t' << setprecision(6) << fixed 
    << (holdNumCountOne / turnNum) << endl;
    
    cout << holdNum << '\t' << setprecision(6) 
    << fixed << (holdNumCountTwo / turnNum)<< endl;
    
    cout << holdNum + 1 << '\t' << setprecision(6) 
    << fixed << (holdNumCountThree / turnNum) << endl;
    
    cout << holdNum + 2 << '\t' << setprecision(6) 
    << fixed << (holdNumCountFour / turnNum)<< endl;
    
    cout << holdNum + 3 << '\t' << setprecision(6) 
    << fixed << (holdNumCountFive / turnNum)<< endl;
    
    cout << holdNum + 4 << '\t' << setprecision(6) 
    << fixed << (holdNumCountSix / turnNum)<< endl;
    
    cout << holdNum + 5 << '\t' << setprecision(6)
    << fixed << (holdNumCountSeven / turnNum)<< endl;
 
    return 0;
}
    

