#include "ctime"
#include "deque"
#include "iostream"
#include "vector"

int print_container(std::vector<int> &input) {

  for (std::vector<int>::iterator it = input.begin(); it < input.end(); ++it) {
    std::cout << *it << " ";
  }
  std::cout << std::endl;
  return 0;
}

int print_container(std::deque<int> &input) {

  for (std::deque<int>::iterator it = input.begin(); it < input.end(); ++it) {
    std::cout << *it << " ";
  }
  std::cout << std::endl;
  return 0;
}

void insertionSort(std::vector<int> &input) {
  int j, key;
  size_t i;
  for (i = 1; i < input.size(); i++) {
    key = input[i];
    j = i - 1;
    while (j >= 0 && input[j] > key) {
      input[j + 1] = input[j];
      j = j - 1;
    }
    input[j + 1] = key;
  }
}

void insertionSort(std::deque<int> &input) {
  int j, key;
  size_t i;
  for (i = 1; i < input.size(); i++) {
    key = input[i];
    j = i - 1;
    while (j >= 0 && input[j] > key) {
      input[j + 1] = input[j];
      j = j - 1;
    }
    input[j + 1] = key;
  }
}

// performe a merge insertion sort on a Vector data structure
void mergeSort(std::vector<int> &input, size_t size) {

  size_t mid;
  size_t vec_size = input.size();

  if (vec_size < size) {
    insertionSort(input);
    return;
  }
  mid = vec_size / 2;
  std::vector<int> left(input.begin(), input.begin() + mid);
  std::vector<int> right(input.begin() + mid, input.end());
  mergeSort(left, size);
  mergeSort(right, size);
  std::merge(left.begin(), left.end(), right.begin(), right.end(),
             input.begin());
}
void mergeSort(std::deque<int> &input, size_t size) {

  size_t mid;
  size_t vec_size = input.size();

  if (vec_size < size) {
    insertionSort(input);
    return;
  }
  mid = vec_size / 2;
  std::deque<int> left(input.begin(), input.begin() + mid);
  std::deque<int> right(input.begin() + mid, input.end());
  mergeSort(left, size);
  mergeSort(right, size);
  std::merge(left.begin(), left.end(), right.begin(), right.end(),
             input.begin());
}

double timerSorter(std::vector<int> &arg) {
  std::clock_t start = std::clock();

  mergeSort(arg, (arg.size() / 100) + 2);

  std::clock_t end = std::clock();
  double elapsed = 100.0 * (end - start) / CLOCKS_PER_SEC;
  return elapsed;
}

double timerSorter(std::deque<int> &arg) {
  std::clock_t start = std::clock();
  mergeSort(arg, (arg.size() / 100) + 2);
  std::clock_t end = std::clock();
  double elapsed = 100.0 * (end - start) / CLOCKS_PER_SEC;
  return elapsed;
}

int main(int argc, char **argv) {
  (void)argc;
  std::vector<int> unSortedVec;
  std::deque<int> unSortedDeque;

  if (argc <= 1)
    return 0;

try {
    int temp;
  
  for (int i = 1; i < argc; i++) {
      temp =  std::stoi(argv[i]);
        if(temp < 0 || std::stoi(argv[i]) > INT_MAX ){
         
        std::cout << "DATA  INVALID:Value below zero or bigger than int" << std::endl;
        return 0;
      }
    unSortedVec.push_back(std::stoi(argv[i]));
  }
  for (int i = 1; i < argc; i++) {
           if(temp < 0 && std::stoi(argv[i])){
         
        std::cout << "DATA  INVALID:Value below zero or bigger than int" << std::endl;
        return 0;
      }
    unSortedDeque.push_back(std::stoi(argv[i]));
  }
  }
  catch(...){
     std::cout << "INVALID DATA: Data provided could not be converted to  a number" << std::endl;
    return 0;
  }
  std::vector<int> sortedVec(unSortedVec);
  std::deque<int> sortedDeque(unSortedDeque);
  double vecTime = timerSorter(sortedVec);
  double deqTime = timerSorter(sortedDeque);

  std::cout << "before:-> " ;
  print_container(unSortedDeque);
  std::cout << std::endl;
  std::cout << "after:-> " ;
  print_container(sortedDeque);
  std::cout << std::endl;
  std::cout << "took: " << vecTime << " with " << " std::vector" <<   std::endl;
  std::cout << "took: " << deqTime << " with " << " std::deque" <<   std::endl;
  return 0;
}
