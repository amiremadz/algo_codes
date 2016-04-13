//  A simple templated implementation of quick sort
// needs C++ 11
#ifndef MY_QUICK_SORT_H_
#define MY_QUICK_SORT_H_

#include <iostream>
#include <functional>
#include <algorithm>
#include <iterator>


template<typename ITR>
using item_type = typename std::iterator_traits<ITR>::value_type;

template <typename ITR, class COMP = std::less<item_type<ITR>>>
    void my_qsort(ITR first, ITR last, COMP comp = COMP{})
    {
      auto dist = distance(first, last);
      if (dist <= 1)
      {
        return;
      }
      // pivot - choose last element
      const auto pivot = next(first, dist - 1);
      // partition
      auto pos = std::partition(first, last, [pivot, comp](const item_type<ITR>& item)
    {return comp(item, *pivot);});
      //swap
      auto temp = *pos;
      *pos = *pivot;
      *pivot = temp;
      //call quicksort
      my_qsort(first, pos, comp);
      // call quicksort on other half
      my_qsort(next(pos), last, comp);
    }

#endif /* MY_QUICK_SORT_H_ */
