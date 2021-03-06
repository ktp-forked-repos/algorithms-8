//
//  test.cpp
//  algorithms. Linked List. Implementation
//
//  Created by alifar on 11/22/17.
//  Copyright © 2017 alifar. All rights reserved.
//

#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "linked_list.hpp"
#include <iostream>
#include <algorithm>
#include <vector>

TEST_CASE("Linked List Push, Top, Next"){
  LinkedList<int> list;
  REQUIRE(list.size == 0);
  std::vector<int> items{1, 3, 6};
  for(auto it: items){
    list.push(it);
  }
  REQUIRE(list.size == 3);
  // verify Top
  REQUIRE(list.top()->value == 6);
  // collect items in List
  std::vector<int> collected;
  for(auto it: list){
    collected.push_back(it);
  }
  // reverse items
  std::reverse(items.begin(), items.end());
  // verify foreach
  REQUIRE(collected == items);
  REQUIRE(list.top()->next()->value == 3);
  REQUIRE(list.size == 3);
}

TEST_CASE("Linked List Append, Top, Next"){
  LinkedList<int> list;
  std::vector<int> items{1, 3, 6};
  REQUIRE(list.size == 0);
  for(auto it: items){
    list.append(it);
  }
  REQUIRE(list.size == 3);
  // verify Top
  REQUIRE(list.top()->value == 1);
  // collect items in List
  std::vector<int> collected;
  for(auto it: list){
    collected.push_back(it);
  }
  // verify foreach
  REQUIRE(collected == items);
  REQUIRE(list.top()->next()->value == 3);
}

TEST_CASE("Linked List Remove, Top"){
  LinkedList<int> list;
  std::vector<int> items{1, 3, 6};
  REQUIRE(list.size == 0);
  for(auto it: items){
    list.append(it);
  }
  REQUIRE(list.size == 3);
  // Remove Head
  list.remove_head();
  REQUIRE(list.top()->value == 3);
  REQUIRE(list.size == 2);
  // Remove Last
  list.remove_last();
  REQUIRE(list.get_last()->value == 3);
  REQUIRE(list.size == 1);
  // Remove item
  list.remove(3);
  REQUIRE(list.empty() == true);
  REQUIRE(list.size == 0);
}

TEST_CASE("Linked List Destruction"){
  LinkedList<int> *list = new LinkedList<int>();
  list->append(4);
  list->append(1);
  list->append(7);
  delete list;
  REQUIRE(list->size == 0);
}
