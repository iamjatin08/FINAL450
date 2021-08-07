#include<bits/stdc++.h>
using namespace std;

int sb(int arr[], int n, int x)
    {
      
    int curr_sum = 0, min_len = n + 1;
 
    
    int start = 0, end = 0;
    while (end < n) {
        
        while (curr_sum <= x && end < n)
            curr_sum += arr[end++];
 
        
        while (curr_sum > x && start < n) {
           
            if (end - start < min_len)
                min_len = end - start;
 
         
            curr_sum -= arr[start++];
        }
    }
    return min_len;

}

 int main(int argc, char const *argv[])
{
    int A[] = {1, 10, 5, 2, 7}, x  = 9;
    cout<<"MIN LENGTH IS "<<sb(A,5,x)<<endl;
    return 0;
}