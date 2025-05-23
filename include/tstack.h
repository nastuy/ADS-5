// Copyright 2021 NNTU-CS
#include <string>
#ifndef INCLUDE_TSTACK_H_
#define INCLUDE_TSTACK_H_
template<typename T, int size>
class TStack {
 private:
  T * arr;
  int top;
  int capacity;

 public:
  TStack() : top(-1), capacity(size) {
    arr = new T[capacity];
  }
  T get() const {
    if (!isEmpty()) {
      return arr[top];
    } else {
      throw std::string("Empty");
    }
  }
  bool isEmpty() const {
    return top == -1;
  }
  bool isFull() const {
    return top == size - 1;
  }
  void pop() {
    if (!isEmpty()) {
      top--;
    } else {
      throw std::string("Empty");
    }
  }
  void push(T item) {
    if (!isFull()) {
      arr[++top] = item;
    } else {
      throw std::string("Full");
    }
  }
};
#endif  // INCLUDE_TSTACK_H_
