//----------------------------------------------------------------------
// Author:
// Course: CPSC 223, Spring 2020
// Assign: 7
// File:   linked_list_collection.h
//
// TODO: Description here
//----------------------------------------------------------------------


#ifndef LINKED_LIST_COLLECTION_H
#define LINKED_LIST_COLLECTION_H

#include <vector>
#include <algorithm>
#include "collection.h"


template<typename K, typename V>
class LinkedListCollection : public Collection<K,V>
{
public:

  // constructor to initialize empty linked list
  LinkedListCollection();

  // copy constructor
  LinkedListCollection(const LinkedListCollection<K,V>& rhs);

  // assignment operator
  LinkedListCollection<K,V>& operator=(const LinkedListCollection<K,V>& rhs);
  
  // destructor to delete a linked list
  ~LinkedListCollection();
  
  // add a new key-value pair into the collection 
  void add(const K& a_key, const V& a_val);

  // remove a key-value pair from the collectiona
  void remove(const K& a_key);

  // find and return the value associated with the key
  bool find(const K& search_key, V& the_val) const;

  // find and return the values with keys >= to k1 and <= to k2 
  void find(const K& k1, const K& k2, std::vector<V>& vals) const;
  
  // return all of the keys in the collection 
  void keys(std::vector<K>& all_keys) const;

  // return all of the keys in ascending (sorted) order
  void sort(std::vector<K>& all_keys_sorted) const;

  // return the number of key-value pairs in the collection
  int size() const;

  // in place sorting 
  void selection_sort();
  void insertion_sort();
  void merge_sort();
  void quick_sort();
  
private:
  
  // linked list node structure
  struct Node {
    K key;
    V value;
    Node* next;
  };
  Node* head;
  Node* tail;
  int length;

  // helper to delete linked list (optional)
  // void make_empty();

  // helper functions for merge and quick sort
  Node* merge_sort(Node* left, int len);
  Node* quick_sort(Node* start, int len);

};


// TODO: Add Linked List Implementation here (from HW6)
// ... 


// TODO: Add Selection and Insertion Sorts here (from HW6)


// TODO: Implement the following for HW7

template<typemane K, typename V>
void LinkedListCollection<K,V>::merge_sort()
{
}

template<typename K, typename V>
typename LinkedListCollection<K,V>::Node*
LinkedListCollection<K,V>::merge_sort(Node* left, int len)
{
}


template<typemane K, typename V>
void LinkedListCollection<K,V>::quick_sort()
{
}

template<typename K, typename V>
typename LinkedListCollection<K,V>::Node*
LinkedListCollection<K,V>::quick_sort(Node* start, int len)
{
}


#endif
