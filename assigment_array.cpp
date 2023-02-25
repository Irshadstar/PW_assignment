#include<iostream>
#include<vector>
using namespace std;

// answer 5 function. 
int findMissingNumber(vector<int>& nums) {
    int n = nums.size();
    vector<bool> visited(n+1, false);
    for(int i=0; i<n; i++) {
        visited[nums[i]] = true;
    }
    for(int i=0; i<=n; i++) {
        if(!visited[i]) {
            return i;
        }
    }
    return -1; // error case, should never happen
}

// answer 6 function.
int findElement(vector<int>& nums) {
    int n = nums.size();
    int maxSoFar = INT_MIN;
    int minToRight = INT_MAX;
    for(int i=0; i<n; i++) {
        if(nums[i] > maxSoFar) {
            maxSoFar = nums[i];
        }
        if(nums[i] < minToRight) {
            minToRight = nums[i];
        }
        if(nums[i] > maxSoFar && nums[i] < minToRight) {
            return nums[i];
        }
    }
    return -1; // error case, should never happen
}

int main(){
    // answer 1.
    int arr_num[]={1,2,3,4,5,6,7,8,9};
    int size=9;
    for(int i=1;i<=size;i++){
        if(i%2!=0){
            cout<<"Odd numbers:"<<i<<" ";
        }
    }cout<<endl;
    for(int i=1;i<=size;i++){
        if(i%2==0){
            cout<<"Even numbers:"<<i<<" ";
        }
    }cout<<endl;

    // answer 2.
    int arr[]={2,5,8,6,9,1,7,3,4};
    int n=9;
    int smallest_num=INT16_MAX;
    int largest_num=INT16_MIN;
    for(int i=0;i<n;i++){
        if(smallest_num>arr[i]){
            smallest_num=arr[i];
        }
    }
    for(int i=0;i<n;i++){
        if(largest_num<arr[i]){
            largest_num=arr[i];
        }
    }
    cout<<"Sum of smallest and largest number of in array:"<<smallest_num+largest_num<<endl;

    // answer 3.
    int arry[]={6,8,5,3,9,0,7,1,4,2};
    int arry_size=10;
    for(int i=arry_size-1;i>=0;i--){
        cout<<arry[i]<<" ";
    }cout<<endl;

    // answer 4.
        int n;
    cin >> n; // input size of arrays
    int a[n], b[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    int minSum = INT_MAX;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j) { // elements must be from different arrays
                int sum = a[i] + b[j];
                if (sum < minSum) {
                    minSum = sum;
                }
            }
        }
    }

    cout << minSum << endl;

    // answer 5.
    vector<int> nums = {0, 1, 3};
    int missingNumber = findMissingNumber(nums);
    cout << missingNumber << endl; // output: 2
    // answer 6.
    vector<int> nums = {2, 1, 5, 3, 4};
    int element = findElement(nums);
    cout << element << endl; // output: 3

    return 0;
}