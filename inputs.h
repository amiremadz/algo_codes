/*
 * inputs.h
 *
 *  Created on: Mar 24, 2012
 *      Author: ratnesh
 */

#ifndef INPUTS_H_
#define INPUTS_H_

#include <vector>
#include <string>
#include <iostream>
#include <fstream>

std::vector<int> input_txt_file_and_form_vector_of_int(const std::string filename)
{
  std::vector<int> vec_txt;
  std::ifstream i_fin;
  i_fin.open(filename);
  int x= 0;
  if (i_fin.is_open())
  {
    std::cout << "\n File successively opened" << std::endl;
    while (i_fin >> x)
    {
      vec_txt.push_back(x);
    }
  }
  return vec_txt;
}

#endif /* INPUTS_H_ */
