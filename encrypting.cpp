#include <iostream>
#include <string>
using namespace std;
int main()
{
  string alphabets{"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
  string key{"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};

  cout << "enter your message: " << endl;
  string message{};
  getline(cin, message);
  string encrypted{};
  cout << "\nENCRYPTING" << endl;
  cout << "===============================" << endl;

  for (char c : message)
  {
    size_t position = alphabets.find(c);
    if (position != string::npos)
    {
      char new_char{key.at(position)};
      encrypted += new_char;
    }
    else
    {
      encrypted += c;
    }
  }
  cout << "\n"
       << encrypted;

  string decrypted{};

  cout << "\ndecrypting" << endl;
  cout << "==========================\n"
       << endl;

  for (char c : encrypted)
  {
    size_t position = key.find(c);
    if (position != string::npos)
    {
      char new_dword{alphabets.at(position)};
      decrypted += new_dword;
    }
    else
    {
      decrypted += c;
    }
  }
  cout << decrypted;
  return 0;
}