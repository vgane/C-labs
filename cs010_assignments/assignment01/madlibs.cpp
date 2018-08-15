//  =============== BEGIN ASSESSMENT HEADER ================
/// @Madlibs.cpp
/// @brief assignment01/Madlibs
///
/// @author Test Student [vgane002@ucr.edu]
/// @date January 18, 2015
///
/// @par Plagiarism Section
/// I hereby certify that I have not received assistance on this assignment,
/// or used code, from ANY outside source other than the instruction team.
//  ================== END ASSESSMENT HEADER ===============
#include <iostream>
#include <string>

using namespace std;

int main() 
{ 
    // create a string variable consisting of 80 dashes:

 
    
    string name;
    string moneyName;
    string itema;
    string profession;
    string timeWord;
    string place;
    string relation;
    string verb;
    string clubname;
    string itemb;
    cout<<endl;
    
    
    //user input words
    cout<<"Please enter name of a girl";
    cin>>name;
    cout<<endl;
    cout<<"Please enter name of money";
    cin>>moneyName;
    cout<<endl;
    cout<<"Please enter name of itema";
    cin>>itema;
    cout<<endl;
    cout<<"Please enter a profession ";
    cin>>profession;
    cout<<endl;
    cout<<"Please enter word related to time";
    cin>>timeWord;
    cout<<endl;
    cout<<"Please enter a place";
    cin>>place;
    cout<<endl;
    cout<<"Please enter a relation";
    cin>>relation;
    cout<<endl;
    cout<< "Please enter a verb";
    cin>>verb;
    cout<<endl;
    cout<<"Please enter a clubname";
    cin>>clubname;
    cout<<endl;
    cout<<"Please enter another item";
    cin>>itemb;
    cout<<endl;
    
    string measuringStick(80, '-');
    cout<<measuringStick;
    cout<<endl;
   
             
    cout<< "Once upon a time, there was a  rich girl ";
    cout<<name<<" Alicia Rich who was rich."<<endl; 
    cout<< " Her  seriously rich parents had 5 "<< moneyName;
    cout<<" in the Big Doe Bank of America."<<endl;
    cout<<" Her dad was so rich he bought her a "<<itema;
    cout<<" to have for three more years."<<endl<<endl;
    
    
    cout<< "But, she sad cause she ain't one of them ";
    cout<<profession<<"  yet, but one day she knows."<<endl;
    cout<< " She wanna get thurr in five more "<<timeWord;
    cout<<" and be way more richer and yeah."<<endl;
    cout<<" She want to go to fancy places like "<<place;
    cout <<" Africa n Hollywood n Disney."<<endl<<endl;
    
    
    cout<<" She don't get support from her "<<relation;
    cout<<" for they disapprove for bad reasons."<<endl;
    cout<<" But she ain't caring, cuz haters gonna ";
    cout<<verb<<" as how it always issss."<<endl;
    cout<<" When she get the doe, she gonna go ";
    cout<<clubname<<" to save the world daaaaawg."<<endl;
    cout<<" She's gonna spend the other half on that ";
    cout<<itemb<<" and more clothes and more ." <<endl;
    
    cout<<measuringStick;
    cout<<endl;
    
  

  
    return 0;
}