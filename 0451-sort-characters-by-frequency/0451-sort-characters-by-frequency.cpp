class Solution {
    
    // A helper function to merge two sorted subarrays
void merge(string& s, int left, int mid, int right, unordered_map<char, int>& m) {
  // Create a temporary array to store the merged subarray
  int n = right - left + 1;
  char temp[n];

  // Initialize the pointers for the two subarrays
  int i = left; // Pointer for the left subarray
  int j = mid + 1; // Pointer for the right subarray
  int k = 0; // Pointer for the temporary array

  // Compare the characters from the two subarrays and copy the smaller one to the temporary array
  while (i <= mid && j <= right) {
    // If the values are equal, use the alphabetical order to break the tie
    if (m[s[i]] == m[s[j]]) {
      if (s[i] < s[j]) {
        temp[k++] = s[i++];
      } else {
        temp[k++] = s[j++];
      }
    } else {
      // If the values are different, copy the one with the larger value to the temporary array
      if (m[s[i]] > m[s[j]]) {
        temp[k++] = s[i++];
      } else {
        temp[k++] = s[j++];
      }
    }
  }

  // Copy the remaining elements from the left subarray, if any
  while (i <= mid) {
    temp[k++] = s[i++];
  }

  // Copy the remaining elements from the right subarray, if any
  while (j <= right) {
    temp[k++] = s[j++];
  }

  // Copy the merged subarray back to the original string
  for (int i = left; i <= right; i++) {
    s[i] = temp[i - left];
  }
}

// A recursive function to sort a string using merge sort
void mergeSort(string& s, int left, int right, unordered_map<char, int>& m) {
  // Base case: if the string has only one character or is empty, return
  if (left >= right) {
    return;
  }

  // Find the middle point of the string
  int mid = left + (right - left) / 2;

  // Recursively sort the left and right subarrays
  mergeSort(s, left, mid, m);
  mergeSort(s, mid + 1, right, m);

  // Merge the sorted subarrays
  merge(s, left, mid, right, m);
}
public:
    string frequencySort(string s) {
        unordered_map<char,int> c;
        for(int i=0; i<s.size(); i++){
            c[s[i]]++;
            
        }
        mergeSort(s, 0, s.length() - 1, c);
        return s;
    }
};