/*
Given an array of integers heights representing the histogram's bar height where the width of each bar is 1, return the area of the largest rectangle in the histogram.

Input: heights = [2,1,5,6,2,3]
Output: 10
*/
#include<bits/stdc++.h>
using namespace std;
 int largestRectangleArea(vector<int>& heights) {
        int n = heights.size(); 
        stack<int> st; 
        int leftSmall[n], rightSmall[n];
        for(int i = 0;i<n;i++) {
            while(!st.empty() && heights[st.top()] >= heights[i]) {
                st.pop(); 
            }
            
            if(st.empty()) leftSmall[i] = 0; 
            else leftSmall[i] = st.top() + 1; 
            st.push(i); 
        }
        
        // clear the stack to be re-used
        while(!st.empty()) st.pop(); 
        
        for(int i = n-1;i>=0;i--) {
            while(!st.empty() && heights[st.top()] >= heights[i]) {
                st.pop(); 
            }
            
            if(st.empty()) rightSmall[i] = n-1; 
            else rightSmall[i] = st.top() - 1;
            
            st.push(i); 
        }
        
        int maxA = 0; 
        for(int i = 0;i<n;i++) {
            maxA = max(maxA, heights[i] * (rightSmall[i] - leftSmall[i] + 1));
        }
        return maxA; 
    }

int main(){
    int n;
    cout<<"Enter Size of array: ";
    cin>>n;
    cout<<"Enter the array elements: ";
    vector<int>arr(n);
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<largestRectangleArea(arr);
}