//  =============== BEGIN ASSESSMENT HEADER ================
/// @cipher.cpp
/// @brief assignment04/cipher
///
/// @author Test Student [vgane002@ucr.edu]
/// @date Febuary 15, 2015
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
    ///define variables
    string map;
    string userInput;
    string methodType;
    int i;
    
    
    //ask the encryption/decryption part
    cout<<"What is the method (encryption or decryption)?";
    cin>>methodType;
    cout<<endl;
    
    //if encryption
    if(methodType=="encryption")
    {
        cout<<"What is the translation"; 
        cout<<"map (type 'default' to use default):";
        cin>>map;           //asking for input
        cout<<endl;
        
        if(map=="default")
        {
            map="zyxwvutsrqponmlkjihgfedcba";
        }
        
        else if((map<="zzzzzzzzzzzzzzzzzzzzzzzzzz")
        &&(map>="aaaaaaaaaaaaaaaaaaaaaaaaaa")
        && (map.size()==26))
        {
               
        }
           
        else
        {
            cout<<"Error: invalid translation map size.";
            return 0;
        }
        cout<<"What is the single word to translate:";
        cin>>userInput;
        cout<<endl;
        for(i=0; i<userInput.size(); ++i)
        {
            if((userInput.at(i)<123)&&(userInput.at(i)>96))
            {
                userInput.at(i)=map.at(userInput.at(i)-97);
            }
            else
            {
                cout<<"Error: encryption cannot be performed.";
                return 0;
            }
        }
        cout<<"Encrypted word: "<<userInput<<endl;
           
    }
    
    // decryption part
    else if (methodType =="decryption")
    {
        cout<<"What is the translation map"; 
        cout<<"(type 'default' to use default):";
        cin>>map;
        cout<<endl;
         
        if(map=="default")
        {
            map ="zyxwvutsrqponmlkjihgfedcba";
        }
        
        else if ((map>="aaaaaaaaaaaaaaaaaaaaaaaaaa")&&
        (map<="zzzzzzzzzzzzzzzzzzzzzzzzzz")&&(map.size()==26))
        {
             
        }
         
        else
        {
            cout<<"Error: invalid translation map size.";
            return  0;
        }
         
        cout<< "What is the single word to translate:";
        cin>>userInput;
        cout<<endl;
        for(i=0; i<userInput.size();++i)
        {
            if((map.find(userInput.at(i))<26)
            &&(map.find(userInput.at(i))>=0))
            {
                userInput.at(i)=map.find(userInput.at(i))+97;
                
            }
            
            else
            {
                cout<<"Error: decryption cannot be performed.";
                return 0;
            }
        }
        cout<<"Decrypted word: "<<userInput<<endl;
    }
    
    else 
    {
        cout<<"Error: invalid method choice.";
        return 0;
    }
    
    return 0;
}