#include <cstdlib>
#include <iostream>
#include <vector>

using std::vector;
using std::cin;
using std::cout;

long long MaxPairwiseProduct(const vector<int>& numbers) {
  long long result = 0;
  int n = numbers.size();
  for (int i = 0; i < n; ++i) {
    for (int j = i + 1; j < n; ++j) {
      if (((long long)(numbers[i])) * numbers[j] > result) {
        result = ((long long)(numbers[i])) * numbers[j];
      }
    }
  }
  return result;
}

long long MaxPairwiseProductFast(const vector<int>& numbers) {
  int n = numbers.size();

  int max_index1 = -1;
  for (int i = 0; i < n; ++i)
    if ((max_index1 == -1) || (numbers[i] >= numbers[max_index1]))
      max_index1 = i;

  int max_index2 = -1;
  for (int j = 0; j < n; ++j)
    if ((j != max_index1) && ((max_index2 == -1) || (numbers[j] >= numbers[max_index2])))
      max_index2 = j;
     
/*  int   max_index3 = -1;
  for (int k = 0; k < n; ++k)
    if ((((k != max_index1) && (k != max_index2))) && ((max_index3 == -1) || (numbers[k] > numbers[max_index3])))
      max_index3 = k;
  cout << max_index1 << ' ' << max_index2 << ' '<< max_index3 << "\n";
*/
  return ((long long)(numbers[max_index1])) * numbers[max_index2];
}

int main() {
  while (true) {
    int n = rand() % 10 + 2;
    cout << n << "\n";
    vector<int> a;
    for (int i = 0; i < n; ++i) {
      a.push_back(rand() % 100);
    }
    for (int i = 0; i < n; ++i) {
      cout << a[i] << ' ';
    }
    cout << "\n";
    long long res1 = MaxPairwiseProduct(a);
    long long res2 = MaxPairwiseProductFast(a);
    if (res1 != res2) {
      cout << "Wrong answer: " << res1 << ' ' << res2 << "\n";
      break;
    }
    else {
      cout << "OK\n";
    }
  }
  int n;
 // cin >> n;
  vector<int> numbers(n);
 // for (int i = 0; i < n; ++i) {
 //   cin >> numbers[i];
 // }

  long long result = MaxPairwiseProductFast(numbers);
  cout << result << "\n";
  return 0;
}
