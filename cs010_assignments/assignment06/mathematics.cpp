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
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

/////////////////////////////////////////////////////////////////////

//global operations
const int OK = 0;
const int DIV_ZERO = 1;
const int SQRT_ERR = 2;



/////////////////////////////////////////////////////////////////////
int acquireOperands(const string &op, double &x, double &y, double &z)
{
    if (op=="pythagorean" || op== "division")
    {
        cout<<"Enter your first number: ";      //a=first number
        cin>>x;
        cout<<endl;
        
        cout<<"Enter your second number: ";
        cin>>y;                                 //b=second number
        cout<<endl;
        return 2;
    }


    else if (op=="quadratic")
    {
        cout<<"Enter your first number: ";      //a=first number
        cin>>x;
        cout<<endl;
        
        cout<<"Enter your second number: ";
        cin>>y;
        cout<<endl;                             //b=second number
        
        cout<<"Enter your third number: ";      //c=third number
        cin>>z;
        cout<<endl;
    
    }
    return 3;   
}

/////////////////////////////////////////////////////////////////////
//division function
int division(double x, double y, double &result)
{
    if (y==0.0)
    {
        return DIV_ZERO;
    
    }
    else
    {
        result=x/y;
    
    }
    return OK;
}

//pythagorean function

int pythagorean(double x, double y, double &z)
{
    z=sqrt((pow(x,2))+(pow(y,2)));
    return OK;
}

// quadratic function
int quadratic(double x, double y, double z, double &root1, double &root2)
{   

    if ((pow(y,2)-(4*x*z))<0)
    {
        return SQRT_ERR;
    }
    else if (x==0.0)
    {
        return DIV_ZERO;
    }
    else
    {
        root1= ((-1*y)+(sqrt(pow(y,2)-(4*x*z))))/(x*2);
        root2= ((-1*y)-(sqrt(pow(y,2)-(4*x*z))))/(x*2);
        return OK;
    }
}
/////////////////////////////////////////////////////////////////////////////
int main()
{
    string op;
    double x, y, z = 0.0;
    double  root1, root2, result;
    
    cout<< "Please choose an operation: ";
    cin>>op;
    cout<<endl;
    while(op != "division"&&op!="quadratic"&&op!="pythagorean")
    {
        cout<<"Error: Operation not supported."<<endl;
        cout<<"Please choose an operation: ";
        cin>>op;
        cout<<endl;
    }
    int insertop= acquireOperands(op,x,y,z);
    
    //division
    if (op=="division")
    {
        cout<<"Equation: "<<x<<" / "<<y<<endl;
        
        division(x,y, result);
    
        if( division(x,y, result)==DIV_ZERO)
        {
            cout<<"Error: Cannot divide by zero."<<endl;
            return 0;
        }
    
        cout<<"Result: "<<result<<endl;   
    }
    
    //pythagorean
    if (op=="pythagorean")
    {
        cout<<"Equation: "<<"sqrt("<<x<<"^2 + "<<y<<"^2)"<<endl;
        pythagorean(x,y,z);
        cout<<"Result: "<< z<<endl;
    }
    
    //quadratic
    if(op=="quadratic")
    {
        cout<<"Equation: "<<x<<"x^2 + "<<y<<"x + "<<z<<" = 0"<<endl;
        
        quadratic(x,y,z, root1, root2);
        
        if(quadratic(x,y,z, root1, root2)==SQRT_ERR)
        {
            cout<<"Error: Cannot take square root of a negative number.";
            return 0;
        }
        if(quadratic(x,y,z, root1, root2)==DIV_ZERO)
        {
            cout<<"Error: Cannot divide by zero.";
            return 0;   
        }
        if(root1==root2)
        {
            cout<<"Result: "<<root1<<endl;
        }
        else
        {
            cout<<"Result: "<<root2<<", "<<root1<<endl;
        }
    }
    
    return 0;
}


