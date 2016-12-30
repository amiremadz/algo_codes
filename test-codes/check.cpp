#include <iostream>
#include <type_traits>


template <bool Cond, typename T= void>
using enable_if_t= typename std::enable_if<Cond, T>::type;

template <typename T>
using rref_only= enable_if_t<std::is_reference<T>::value>;

template <typename T, typename= rref_only<T>>
  void check_enableif(T&& x)
{
  std::cout << "Can call !!\n";
}


//---------------------------------

template <typename T>
void disp_type(const T& x)
{
  std::cout << " [const&]." << std::endl;
}

template <typename T>
void disp_type(T& x)
{
  std::cout << " [&]." << std::endl;
}

template <typename T>
void disp_type(T&& x)
{
  std::cout << " [&&]." << std::endl;
}

//----------------------------------
template <typename T1>
void mycheck(T1&& e)
{
  disp_type(e); //should always choose lvalue overloads
}


template <typename T1>
void pushback_forward(T1&& e)
{

}


template <typename T1>
void mycheck_forward(T1&& e)
{
  disp_type(std::forward<T1>(e));
}

int main(int argc, char* argv[])
{
  const int i = 1;
  int j = 2;

  std::cout << "Just check type " << std::endl;
  disp_type(i);
  disp_type(j);
  disp_type(5);
  std::cout << "More testing -- without forward" << std::endl;
  mycheck(i);
  mycheck(j);
  mycheck(5);
  std::cout << "More testing with forward " << std::endl;
  mycheck_forward(i);
  mycheck_forward(j);
  mycheck_forward(3);
  //check enable if
  std::cout << "\n Check enable if "  << std::endl;
  check_enableif(i);
  check_enableif(j);
  //check_enableif(5);/// oops!! not allowed before ! compilation error

  return 0;
}
