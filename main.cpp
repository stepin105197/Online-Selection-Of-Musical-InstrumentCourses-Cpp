#include <iostream>
#include <gtest/gtest.h>
using namespace std;
int Veena();
int Violin();
int Flute();
int Tabla();


int main()
{

  //Constant Variables
  const string course1 = "Veena";
  const string course2  = "Violin";
  const string course3  = "Flute";
  const string course4  = "Tabla";
  int ret;
 //Variables
  int choice;




  cout << "Welcome to our school" << endl;

    cout << "\n\t\t Our Courses" << endl;
    cout << "1. " << course1 << endl;
    cout << "2. " << course2 << endl;
    cout << "3. " << course3 << endl;
    cout << "4. " << course4 << endl;
    cout << "5. Quit"  << endl;
    cout << "Which course do you want to select: ";
    cin >> choice;

    switch (choice)
    {
      case 1:

       ret = Veena();
       cout << course1 << "" <<"- Rs"<< ret << endl;
      break;

      case 2:


       ret = Violin();
       cout << course2 << "" <<"- Rs"<< ret << endl;

      break;

      case 3:

       ret= Flute();
       cout << course3 << "" <<"- Rs"<< ret << endl;

      break;

      case 4:

         ret = Tabla();
         cout << course4 << "" <<"- Rs"<< ret << endl;
        break;

      case 5: // display summary and quit

  break;
  cout << endl << "Thanks for choosing our school!!";
  return 0;
}
}
