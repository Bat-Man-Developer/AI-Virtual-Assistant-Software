#ifndef ASSISTANT_H_INCLUDED
#define ASSISTANT_H_INCLUDED
#include <iostream>
#include <vector>
#include <sstream>
#include <string.h>
#include <fstream>
#include <iomanip>
#include <windows.h>
using namespace std;
class assistant
{
public:
  assistant();
  void welcome_msg();
  void speak_func(string);
  void type_n_speak_func(string);
  void safe_city_response();
  void unsafe_city_response();
  ~assistant();
};
#endif // ASSISTANT_H_INCLUDED
