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
  cout << "What is your first name?" << endl;
  cin >> firstName;
  cout << "What is your last name?" << endl;
  cin >> lastName;
  cout << "Welcome, " << firstName[0]<< "." << lastName[0] << "."  << ", here is your fortune..." << endl;
  lucky = firstName.length();
  cout << "your lucky number is " << lucky << endl;
  vowel = true;
  if (firstName[0] == 'a' || firstName[0] == 'e' || firstName[0] == 'i' || firstName[0] == 'o' || firstName[0] == 'u' || firstName[0] == 'A' || firstName[0] == 'E' || firstName[0] == 'I' || firstName[0] == 'O' || firstName[0] == 'U')
  if (vowel == true)
  {
     cout << "you are destined to be famous!" << endl;
     cout << "have a good day!" << endl;
  }
  lastName[lastName.length()-1];
  if (lastName[0] == 'a' || lastName[0] == 'e' || lastName[0] == 'i' || lastName[0] == 'o' || lastName[0] == 'u' || lastName[0] == 'A' || lastName[0] == 'E' || lastName[0] == 'I' || lastName[0] == 'O' || lastName[0] == 'U')
  {
     cout << "you have already met your true love." << endl;
  }
  else
  {
    cout << "you should keep a low profile." << endl;
    cout << "have a good day!" << endl;
  }

  //tell fortune

  return 0;
}
