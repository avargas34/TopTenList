//Manages a list of top ten hyperlinks
#include <string>
#include "TopTenList.h"
#include "Hyperlink.h"

using std::string;

TopTenList::TopTenList()
{
  _list.resize(10);
}

void TopTenList::set_at(int index, Hyperlink link)
{
  _list[index - 1] = link;
}

Hyperlink TopTenList::get(int index)
{
  return _list[index - 1];
}