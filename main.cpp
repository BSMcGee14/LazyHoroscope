//Authors: Brandan McGee
#include<iostream>
#include<string>

using namespace std;


int main()
{
  //declare variables
  string firstName, lastName;
  int lucky;
  bool vowel = false;

  //get user input 
  cout << "Please enter your first name: ";
  cin >> firstName;
  cout << "Please enter your last name: ";
  cin >> lastName;
  cout << "Welcome " << firstName[0]<< "." << lastName[0] << " here is your fortune..." << endl;
  if (firstName[0] == 'a' || firstName[0] == 'e' || firstName[0] == 'i' || firstName[0] == 'o' || firstName[0] == 'u' || firstName[0] == 'A' || firstName[0] == 'E' || firstName[0] == 'I' || firstName[0] == 'O' || firstName[0] == 'U')
  vowel = true;
  if (vowel == true)
  {
     cout << "You're destined to be famous! You have aleady met your true!" << endl;
  }
  else
  {
    cout << "...you should keep a low profile..." << endl;
  }

  //tell fortune
  lucky = firstName.length();
  cout << "Your lucky number is... " << lucky << endl;

  return 0;
}
