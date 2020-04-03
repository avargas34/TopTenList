//Manages a list of top ten hyperlinks
#ifndef TOPTENLIST_H
#define TOPTENLIST_H
#include <string>
#include <vector>
#include <iostream>
#include "Hyperlink.h"
#include "IDirectionable.h"

using std::string;
using std::vector;
using std::cout;
using std::endl;

class TopTenList : public IDirectionable
{
private:
  vector<Hyperlink> _list;

public:
  void display_forward()
  {
    for (int i = 0; i < _list.size(); i++)
    {
      cout << i + 1 << ". " << _list[i].url << " " << _list[i].text << endl;
    }
  }

  void display_backward()
  {
    for (int i = _list.size() - 1; i >= 0; i--)
    {
      cout << i + 1 << ". " << _list[i].url << " " << _list[i].text << endl;
    }
  }

  void set_at(int index, Hyperlink link);
  Hyperlink get(int index);
  TopTenList();
};

#endif
