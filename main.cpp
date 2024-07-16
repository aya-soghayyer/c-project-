#include <bits/stdc++.h>

using namespace std;

int main()
{

    int service ;

    cout << "\n\n\a";
    cout << "                                      ***************************************\n";
    cout << "                                      ****  Welcome To Services Program  ****\n";
    cout << "                                      ****            Done By:           ****\n";
    cout << "                                      ****        Aseel Al-ashqar        ****\n";
    cout << "                                      ****         Aya Soghayyer         ****\n";
    cout << "                                      ***************************************\n";
    cout << "\n\n";


    cout << " Select the number of service you want to use :\n\n Enter 1 for mathematical service.\n Enter 2 for drawing services.\n Enter 3 for sorting services.\n Enter 4 for text processing services.\n Enter 5 to exit.\n";
    cout << " ";
    cin >> service ;

// Mathematical services:
    if ( service == 1 ){
    cout << "\n\a Mathematical services: \n\n";
    float firstnumber , secondnumber ;
    int operation , factorial=1;

    cout << " Choose a number of mathematical service :\n 1- Division \n 2- Multiplication \n 3- Power \n 4- Square Root \n 5- Factorial \n" ;
    cout << " ";
    cin >> operation ;

    if ( operation==1 || operation == 2 || operation==3 ) {
    cout << " Enter two numbers : \n" ;
    cout << " ";
    cin >> firstnumber >> secondnumber ;

    switch ( operation ) {
    case 1 : {
    if ( secondnumber == 0 ) cout << " Error! please try again. \n" ;
    else cout <<  firstnumber << "/" << secondnumber << " = " << firstnumber/secondnumber << endl ; break ;}
    case 2 : cout <<  firstnumber << "*" << secondnumber << " = " << firstnumber * secondnumber << endl ; break ;
    case 3 : cout <<  firstnumber << "^" << secondnumber << " = " << pow(firstnumber,secondnumber) << endl ; break ;
    }
    }

    else if ( operation==4 || operation==5 ){
    cout << " Enter one number : \n" ;
    cout << " ";
    cin >> firstnumber ;

    switch( operation ) {
    case 4 : cout << " Square root of " << firstnumber << " = " << sqrt(firstnumber) << endl ; break ;
    case 5 : {for (int i=1 ; i<=firstnumber ; i++ )
    factorial*=i ;
    cout << firstnumber << "! = " << factorial ; break ;
    }}}
    else cout << " Error! please try again :) \n";
    }


// Drawing services:
   else if ( service == 2 ) {
   cout << "\n\a Drawing services: \n\n";
   bool shape , case_of_shape ;
   int rows;

   cout << " Enter 0 to select Diamond shape. \n Enter 1 to select Box shape. \n " ;
   cout << " ";
   cin >> shape ;
//Diamond shape.
    if ( shape == 0 ){
    cout << "\a";
    cout <<" Enter 0 to select empty Diamond. \n Enter 1 to select filled Diamond. \n" ;
    cout << " ";
    cin >> case_of_shape;
//filled
    if ( case_of_shape == 1){
    cout << " Enter the number of rows : ";
    cout << " ";
    cin >> rows;
    rows = rows/2 +1 ;

    for(int i = 1; i <= rows; i++)
    { for(int j = i; j< rows; j++)
    {cout << " ";}

    for(int k = 1; k<= (2*i-1); k++)
    cout << "*";
    cout << endl;}

    for(int i = rows-1; i >=1; i--)
    { for(int j = rows  ; j> i; j--)
    cout << " ";

    for(int k = (2 * i - 1); k>=1; k--)
    cout << "*";
    cout << endl ;}}

//empty
    else if ( case_of_shape ==0 ){
    cout << " Enter the number of rows : ";
    cout << " ";
    cin >> rows;
    int rowss ;

    if( rows%2==0)
    rowss = rows ;

    else rowss = rows+1 ;
    for ( int i=0; i<=rowss; i++){
    for (int j=0; j<=rowss ; j++){
    if ( i<= (rowss/2)) {
    if ( abs( (rowss/2 )-j)== i || abs ( (rowss/2) + j)== i)
    {cout << "*";}
    else {cout << " ";}
    }
    else {
    if ( abs(( rowss/2) +j)== i ||rowss - ( i - (rowss/2) )== j)
    {cout << "*";}
    else {cout << " ";}
    }
    }
    cout << endl;
    }}}
//Box
    else if ( shape == 1 ){
    cout <<" Enter 0 to select empty Box \n Enter 1 to select filled Box \n" ;
    cout << " ";
    cin >> case_of_shape;
//filled
    if ( case_of_shape == 1){
    cout << " Enter the number of rows : ";
    cout << " ";
    cin >> rows;

    for  ( int i=1 ; i<=rows ; i++){
    for ( int j=1 ; j <=rows ; j++ ){
    cout << " " ;
    cout << "*" ;
    }
    cout << endl ;
    }
    }
//empty
    else if ( case_of_shape == 0 ) {
    cout << " Enter the number of rows : ";
    cout << " ";
    cin >> rows;
    for ( int i=1 ; i<=rows ; i++ ){
    for ( int j=1 ; j<=rows ; j++){
    if ( i ==1 || j==1 || i == rows ||j ==rows ){
    cout << "* " ;}
    else
    cout << "  ";}
    cout << endl ;
    }}}
    else cout << " Error! please try again :) \n";
    }


// Sorting services:
    else if ( service == 3 ) {
    cout << "\n\a Sorting services:\n\n";
    vector <float> number(3) ;
    cout << " Enter three numbers : \n";
    cout << " ";

    for (int i=0 ; i<3 ; i++) {
    cin >> number[i];}

    cout << " Choose a number of sorting service : \n 1- Ascending order.\n 2- Descending order. \n ";
    int sorting ;
    cout << " ";
    cin >> sorting ;

    if (sorting == 1 ) {
    sort (number.begin() , number.end());
    cout << " Ascending order of numbers : " ;

    for (int j=0 ; j<3 ; j++ ){
    cout << number[j] << " " ;}
    cout << endl;}

    else if (sorting == 2 ) {
    sort (number.begin() , number.end());
    reverse (number.begin() , number.end());
    cout << " Descending order of numbers : " ;

    for (int j=0 ; j<3 ; j++){
    cout << number[j] << " " ;}
    cout << endl;}
    else
    cout << " Error! please try again :) \n";
    }


// Text processing services:
    else if ( service == 4 ) {
    cout << "\n\a Text processing services: \n\n";
    cout << " Enter the text you want to process : \n";
    cout << " ";

    string text ;
    int sum=0 ;
    cin.ignore() ;
    getline(cin,text) ;

    cout << " Choose the number of service you want : \n 1- Reverse. \n 2- Count words. \n" ;
    int text_processing ;
    cout << " " ;
    cin >> text_processing ;

    if ( text_processing == 1 ){
    reverse ( text.begin() , text.end()) ;
    cout << " " << text ;}

    else if (text_processing == 2 ){
    for ( int i=0 ; i<text.size()-1 ; i++ ){
    if ( text[i] == ' ')
    sum++;
    }
    cout << " " << sum+1;}

    else
    cout << " Error! please try again :) \n";
    }


// For exit :
    else if ( service == 5 ) {
    cout << " Thank you :) \n Good bye \n\n" ;
    }

// Anything else :
    else
    cout << " Error! \n please try again\n\n" ;


    return 0;
    }
