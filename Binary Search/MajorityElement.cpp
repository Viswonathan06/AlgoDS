#include<iostream>

bool Majoritysearch( int arr[], int low, int high, int key, int& count){
    static int size = high + low;
    //std::cout<<size<<"\n";
    int mid = (high + low)/2;
    if ( arr[mid] == key){
        count++;
        while(low < mid){
            if( arr[low] == key)
                count++;
            low++;
            
        }
        while(high > mid){
            if( arr[high] == key)
                count++;
            high--;
        }
        if( count >= size/2 )
            return true;
        else return false;
    }

    if( arr[low] < key && arr[mid] > key){
        return Majoritysearch ( arr, low, mid, key, count);
    }
    else if( arr[mid+1] < key && arr[high] > key){
        return Majoritysearch ( arr, mid+1, high, key, count);
    }
}


//Smart ass algorithm is:

//if an element is present equal to or more than n/2 times, it will be there as the middle element. 
//so if the input element is middle element, its the majority element.

bool isMajorityElement( int arr[], int n, int key){
    if( arr[n/2] == key){
        return true;
    }
    else
    {
        return false;
    }
    
}

int main() 
{ 
    int arr[] = { 2, 3, 3, 3, 3,4, 4,4 , 4, 6, 7 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    int key = 3; 
    int count = 0;
    Majoritysearch(arr, 0, n - 1, key, count)?std::cout<<"True\n":std::cout<<"False\n"; 
    isMajorityElement( arr, n, key)?std::cout<<"True\n":std::cout<<"False\n";

    //std::cout<<count;
    // if (i != -1) 
    //     std::cout << "Index: " << i << "\n"; 
    // else
    //     std::cout << "Key not found"; 
} 
