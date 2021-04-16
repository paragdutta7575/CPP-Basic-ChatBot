#include <iostream>
#include <string>
#include<windows.h>
#include <cstring>

using namespace std;

//NOTE* - To save users time some abbriviations have been used So , kindly use the following -
// USE y/Y or n/N on the place of YES or NO 
// USE  M OR F On the place of Male or Female

int main()

{
    system("Color 0D");

    char inp, Y ,N ,n ,y  ;
    string name , gtkey   ;
    int age  ;
    
    cout<<"\t\t\t ** WELCOME TO CHATBOT  (made by - Parag Dutta) ** \n\n";     //welcome note*
    cout<<"\t\t **To continue the program type 'Y' and to end it type 'N'** \n\n";
    cout<<"-->";
    cin>> inp;
    //condition whether its y or n


if(inp == 'y' || inp == 'Y') //if y
{
    cout << "\t\t HERE , WISHING YOU A GREAT EXPERIENCE !! \n\n";    //DO THIS
}

else //if not which is n 
{
    
    cout<< "\t\t Thanks for Coming Here \n\n";  //DO THIS
}
system("cls");

if ( gtkey != "bi")
{
    cout<< "\t\t HELLO USER , LETS START , SAY HEY !!\n\n ";
    cout<< "-->";
    cin>> gtkey;

    cout << " \t what is your NAME ? \n" ;
    cout<< "-->";
    cin>>  name ;

cout<< " \t what is your GENDER ? \n";
cout<< "-->";
cin>> inp;
if (inp == 'M' || inp == 'm')
{
    cout<< " \t\t OKK , So tell me!! \n\n";
}  //if you are a male
else {
    cout << " \t\t So , we shall continue \n\n";
}

cout << " \t Do you like SPORTS ? \n";
    cout << "-->"; 
    cin>> inp ;

    if(inp == 'y' || inp == 'Y') //if y
{
    cout << "\t\t Thats nice , SPORTS is good for health !! \n\n";    //DO THIS
}

else //if not which is n 
{
    
    cout<< "\t\t OKK !! So Can i know !?  \n\n";  //DO THIS
}



    cout << name <<" \t what is your AGE ? \n\n";
    cout<< "-->";
    cin >> age ;

 switch (age)
 {
 case /* constant-expression */18 :
 cout<< " \n you are young \n\n";
 break;
     /* code */
    case 30:
    cout << "\n you are quite mature\n\n";
    break;
    default :
    cout<< " \n you seems to be young\n\n";
 }


        cout << " \t Am I talking to a ROBOT ? \n";
    cout << "-->"; 
    cin>> inp ;

    if(inp == 'y' || inp == 'Y') //if y
{
    cout << "\t\t SO , we are likewise aren't we XD !! \n\n";    //DO THIS
}

else //if not which is n 
{
    
    cout<< "\t\t That sounds great \n\n";  //DO THIS
}


cout<< " \t Are you are a citizen of INDIA ? \n";
cout<< "-->";
cin>> inp;
if (inp == 'y' || inp == 'Y')
{
    cout<< " \t\t OHH!! , I am from INDIA too \n\n";
}  //if you are an INDIAN
else {
    cout << " \t\t OKK !! \n\n";
}

    
    cout<< "\t So , which is your favourite color ? \n" << name <<"\n";
    cout<<"-->";
    cin>> gtkey;

cout<< " \n Have a great day ,STAY SAFE AND STAY INDOOR  thanks !!" << name <<"\n";
cout<< "-->";
cin>> gtkey;

}
system("cls");

cout<< " \t\t\t PROGRAM END HERE ";
    return 0;
}