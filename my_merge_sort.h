// A simple implementation of merge sort
// needs C++11

#ifndef MY_MERGE_SORT_H_
#define MY_MERGE_SORT_H_

#include <iostream>
#include <functional>
#include <algorithm>
#include <iterator>

<<<<<<< HEAD
using namespace std;
=======

>>>>>>> added merge sort
//alias - not needed in C++14
template<typename ITR>
using item_type = typename std::iterator_traits<ITR>::value_type;

template<typename ITR, class COMP = std::less<item_type<ITR>>>
  void my_merge_sort(ITR first, ITR last, COMP comp = COMP{})
  {
    auto dist = distance(first, last);
    if (dist <= 1)
    {
      return;
    }
    auto const middle = std::next(first, dist/2);
    my_merge_sort(first, middle, comp);
    my_merge_sort(middle, last, comp);
<<<<<<< HEAD
    inplace_merge(first, middle, last, comp); //YES!! its in-place merge !!
=======
    std::inplace_merge(first, middle, last, comp); //YES!! its in-place merge !!
>>>>>>> added merge sort
  }


#endif /* MY_MERGE_SORT_H_*/
