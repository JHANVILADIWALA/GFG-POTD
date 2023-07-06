https://practice.geeksforgeeks.org/problems/quick-sort/1

class Solution
{
    public:
    //Function to sort an array using quick sort algorithm.
    void quickSort(int arr[], int low, int high)
    {
        if(low<high){ //that means they have not crossed each other yet
            int pivot = partition(arr,low,high);
            
            //recursive quick sort on left and right side subarrays of pivot
            quickSort(arr,low,pivot-1);
            quickSort(arr,pivot+1,high);
        }
    }
    
    public:
    int partition (int arr[], int low, int high)
    { 
       int pivot=arr[high]; //taking pivot as end element
       int i = low-1;
       
       //traversing of left side of pivot
       for(int j=low; j<high; j++){
           //if element <= pivot found ..swap it with i++
           if(arr[j]<=pivot){
               i++;
               swap(arr[i], arr[j]);
           }
       }
       // in end swap i++ with pivot because that is the correct position of pivot
       swap(arr[i+1], arr[high]);
       
       // returning correct position of pivot
       return i+1;
    }
};
