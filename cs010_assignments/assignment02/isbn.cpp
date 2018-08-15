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
   
    ///label all numbers
    int  a, b, c, d, e, f, g,h,i, sum, checksum, isbn; 
     
    cout<<"Please enter the first 9 digits of the ISBN:";
    
    ///inputs
    cin>>isbn;
    
    a=isbn/100000000;
    b=(isbn-((a*100000000)))/10000000;
    c=(isbn-((b*10000000)+(a*100000000)))/1000000;
    d=(isbn-((c*1000000)+(b*10000000)+(a*100000000)))/100000;
    e=(isbn-((d*100000)+(c*1000000)+(b*10000000)+(a*100000000)))/10000;
    f=(isbn-((e*10000)+(d*100000)+(c*1000000)+(b*10000000)+(a*100000000)))/1000;
    g=(isbn-((f*1000)+(e*10000)+(d*100000)+(c*1000000)+(b*10000000)+(a*100000000)))/100;
    h=(isbn-((g*100)+(f*1000)+(e*10000)+(d*100000)+(c*1000000)+(b*10000000)+(a*100000000)))/10;
    i=(isbn-((h*10)+(g*100)+(f*1000)+(e*10000)+(d*100000)+(c*1000000)+(b*10000000)+(a*100000000)));
    
   
    ///wighted sum
    checksum=(a+ 2*b+ 3*c+ 4*d+ 5*e
    + 6*f+ 7*g+ 8*h+ 9*i)%11;
    
    ///output
    cout<<"Checksum: "<<checksum;
    
    return 0;
}