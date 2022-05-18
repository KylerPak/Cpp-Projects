#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
  string
    command,
    name, password,
    inName, inPassword,
    registerName, registerPassword;

  while (1)
  {
    cout << "(register/exit/login)\n"
      << "Command: ";
    getline(cin >> ws, command);
    if (command == "exit") return 1;
    if (command == "register")
    {
      ofstream g("registration.txt");
      if (!g.is_open()) { cout << "could not open file\n"; return 0; }
      cout << "\n\n\n"
        << "New Username: ";
      getline(cin >> ws, registerName);
      cout << "New Password: ";
      getline(cin >> ws, registerPassword);
      g << registerName
        << "\n"
        << registerPassword;
      g.close();
    }
    if (command == "login")
    {
      ifstream f("registration.txt");
      if (!f.is_open()) { cout << "could not open file\n"; return 0; }
      getline(f, name, '\n');
      getline(f, password, '\n');
      f.close();
      while (1)
      {
        cout << "\n\n\n"
          << "Enter Username :";
        getline(cin >> ws, inName);
        cout << "Enter Password :";
        getline(cin >> ws, inPassword);
        if (inName == name && inPassword == password)
        {
          cout << "Login Successful\n"
            << "Welcome, "
            << inName;
          break;
        }
        cout << "Incorrect name or password\n";
      }
    }
    cout << "\n\n\n\n\n";
  }
  return 1;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
