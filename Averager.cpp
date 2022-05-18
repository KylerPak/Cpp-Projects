#include <iostream>
#include <string>

using namespace std;

bool compareFunction(string s1, string s2)
{
  if (s1 != s2) return false;
  else return true;
}

int main()
{
  int* arrayPointer;
  int totalStudents{ 0 };
  int loopCount{ 0 };
  int totalScore{ 0 };
  int scores[50];
  int end{ 0 };
  char a[] = "average";
  char b[] = "exit";
  string average{ a };
  string input{};
  string exit{ b };

  cout << "\nEnter Student test scores: \n(Enter -1 to terminate input)\n";

  while (end == 0)
  {
    cout << "Enter Student " << loopCount + 1 << ":";
    cin >> scores[loopCount];

    if (scores[loopCount] == -1) end = 1; loopCount++;
  }

  cout << "\nChoose next input: \naverage\nexit\n";
  getline(cin >> ws, input);

  totalStudents = loopCount - 1;

  arrayPointer = new int[totalStudents];

  cout << "\n\n";

  if (compareFunction(average, input) == true)
  {
    for (int student{ 0 }; student < totalStudents; student++)
    {
      totalScore += scores[student];
    }
    auto average = totalScore / totalStudents;
    cout << "Average Test Score is " << average;
    delete[]arrayPointer;
    return 0;
  }
  else delete[]arrayPointer; return 0;
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
