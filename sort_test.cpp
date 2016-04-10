// By Ratnesh Kumar
// Some algo codes for sorting

#include <iostream>
#include <string>
#include <vector>
#include <list>
#include "inputs.h"
#include "my_quick_sort.h"

using namespace std;
int main(int argc, char* argv[])
{
  string fname = "data.txt";
  //vector<int> data = input_txt_file_and_form_vector_of_int(fname);
  list<int> data = {5, 1, 7, 3, 11, 10, 4, 2, 6, 0};
  my_qsort(data.begin(), data.end());
  for_each(begin(data), end(data), [](const int& p) {cout << p << endl;});
  return 0;
}
