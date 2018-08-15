//  =============== BEGIN ASSESSMENT HEADER ================
/// @mathematics.cpp
/// @brief assignment06/mathematics
///
/// @author Test Student [vgane002@ucr.edu]
/// @date Febuary 29, 2015
///
/// @par Plagiarism Section
/// I hereby certify that I have not received assistance on this assignment,
/// or used code, from ANY outside source other than the instruction team.
//  ================== END ASSESSMENT HEADER ===============
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <stdlib.h>
using namespace std;




int genRandInt(int small, int large)
{
    int randNum;
    randNum=(small+(rand()%(large-small+1)));
    return randNum;
}

//rollNDice function
int rollNDice(int numDice,int numSides)
{
    

    int j=0;
    int sum=0;
    for(j=0;j<numDice; ++j)
    {
        sum = sum + genRandInt(1, numSides);
    }
    
    return sum;
    
}



//most landing vector
int mostLandings(const vector<int>& board, int start, int end)
{
    int max=board.at(start);
    int maxSpace=start;
    
    for(int i=start;i<=end;++i)
    {
        if(board.at(i)>max)
        {
            max=board.at(i);
            maxSpace=i;
        }
    }
    return maxSpace;
    
}




int main()
{       
    int maxSpace=0;
    int boardSides = 0;
    int spotsOnSide = 0;
    int numSimulations = 0;
    int increase = 0;
    srand(time(0));
    
    
    cout<<"How many sides of the board are there? ";
    cin>>boardSides; 
    cout<<endl;
    
    cout<<"How many spots are on each side? ";
    cin>>spotsOnSide; 
    cout<<endl;
    
    cout<<"How many simulations? ";
    cin>>numSimulations;
    cout<<endl;
    
    
    //while loop for condition
    //stop counting when inrease is greater than 
    //sides*spots 
    vector<int>board(boardSides*spotsOnSide);
    
    for(int i=0;i<numSimulations;i++)
    {
        increase=0;
        while(increase<(boardSides*spotsOnSide))
        {
            increase=increase+rollNDice(2,6);
            if(increase-1<boardSides*spotsOnSide)
            {
                board.at(increase-1)++;
            }
        }
        
    }
    cout<<"The following spots on each side have the most landings: ";
    cout<<endl;
    
    for(int m=0; m<boardSides;m++)
    {
        maxSpace=mostLandings(board,(spotsOnSide*m),(spotsOnSide*(m+1))-1);
        cout<<"On side "<<(m+1)<<", spot "<<maxSpace+1;
        cout<<" has the most landings: "<<board.at(maxSpace)<<endl;
    }
    
    
    return 0;
}











