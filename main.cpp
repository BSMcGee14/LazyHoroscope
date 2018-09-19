//Authors: Brandan McGee
#include<iostream>
#include<string>

using namespace std;


int main()
{
  //declare variables
  string firstName, lastName;
  int lucky;

  //get user input 
  cout << "Please enter your first name: ";
  cin >> firstName;
  cout << "Please enter your last name: ";
  cin >> lastName;
  cout << "Welcome " << firstName[0]<< "." << lastName[0] << " here is your fortune..." << endl;
  

  //tell fortune
  lucky = firstName.length();
  cout << "your lucky number is... " << lucky << endl;

  return 0;
}
