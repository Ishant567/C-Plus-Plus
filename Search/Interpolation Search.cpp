#include <iostream>
int InterpolationSearch(int A[], int n, int x)
{
    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        int mid = low + (((high - 1) * (x - A[low])) / (A[high] - A[low]));
        if (x == A[mid])
            return mid; // Found x, return (exit)
        else if (x < A[mid])
            high = mid - 1; // X lies before mid
        else
            low = mid + 1; // x lies after mid
    }
    return -1;
}

int main()
{  
    int n;
    cout<<"size of array"<<endl;
    cin>>n;
    int A[n];
    int x;
    cout<<"enter elements of array"<<endl;
    for(int i=0;i<n;i++)
        cin>>A[i];
    cout<<"element to find "<<endl;
    cin>>x;
    int index = InterpolationSearch(A, n, x); // passed array A inside the InterpolationSearch function
    if (index != -1)
        std::cout << "Number " << x << " is at " << index;
    else
        std::cout << "Number " << x << " not found";  // No element found 
}

// randomly set x bcoz array was defined by us , therefore not reasonable for asking input.
// We could have asked for input if array elements were inputed by the user.
