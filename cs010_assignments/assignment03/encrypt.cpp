//  =============== BEGIN ASSESSMENT HEADER ================
/// @encrypt.cpp
/// @brief assignment03/encrypt
///
/// @author Test Student [vgane002@ucr.edu]
/// @date January 29, 2015
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
    string map="zyxwvutsrqponmlkjihgfedcba"; //storing default map
    string alphabet= "abcdefghijklmnopqrstuvwxyz"; //storing alphabet
    string userText;             //for when the user inputs their word
    string firstLetter;   //defines first variable
    string mapNew;
    string user;
    
    //question and answer for map
    cout<<"What is the translation map (type 'default' to use default): ";
    cin>>mapNew;   //for when the user inputs type of map
    cout << endl;
    
    ///cause 1:where map is default and uses the map
    if (mapNew=="default"){
        mapNew=map;     //convert the userinput default to the actual map
        cout<<"What is the single word to translate: ";      //word input
        cin>>userText;  
        cout << endl; //when user inputs text          
        firstLetter=userText.at(0);   //first letter of input
        if(firstLetter>="a" &&firstLetter<="z"){ //checks for lowercase
            user=mapNew.at(alphabet.find(firstLetter));
            cout<<"Encrypted word: "<<user<<userText.substr(1);
            cout << endl;
        }
        else{
            cout<<"Error: encryption cannot be performed.";
            return 0;
        }    
    }
    else if  (mapNew.size() ==26){  //makes sure map size is 26
        cout<<"What is the single word to translate: "; //word input
        cin>>userText; 
        cout<<endl;//when user inputs text
        firstLetter=userText.at(0);   //first letter of input
        if(firstLetter>="a" &&firstLetter<="z"){ //checks for lowercase
            user=mapNew.at(alphabet.find(firstLetter));
           
            cout<<"Encrypted word: "<<user<<userText.substr(1);
            cout<<endl;
        }
        else{
            cout<<"Error: encryption cannot be performed." << endl;
        }
    }
    else {
        cout<<"Error: invalid translation map size." << endl;
    }
    return 0;
}
