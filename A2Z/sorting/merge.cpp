#include "iostream"

using namespace std;

int main(int argc, char *argv[]) { return 0; }

void MergeSort(int arr[], int low, int high) {
  int mid = (low + high) / 2;
  MergeSort(arr, low, mid);
  MergeSort(arr, mid + 1, high);
}
