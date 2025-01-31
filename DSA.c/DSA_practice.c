//---------------ARRAY----------------------
// #include<stdio.h>

// void display(int arr[] , int n){
//     // Code for traversal
//     for(int i = 0; i<n; i++){
//         printf("%d " , arr[i]);
//     }
//     printf("\n");
// }

// int indInsertion(int arr[] , int size , int element , int capacity , int index){
//     // Code for INSERTION
//     if(size>=capacity){
//         return -1;
//     }
//     for(int i = size-1 ; i>=index ; i--){
//         arr[i+1] = arr[i];
//     }
//     arr[index] = element;
//     return 1;
// }

// void indDeletion(int arr[] , int size ,  int index){
//     // Code for DELETION
//     for(int i = index ; i< size-1; i++){
//         arr[i] = arr[i+1];
//     }
// }

// int main(){
//     int arr[100] = {7,8,12,27,88};
//     int size = 5, element = 45 , index =3;
//     display(arr,size);
//     // indInsertion(arr , size , element , 100 , index);     Use for Insertion
//     // size+=1;                                              Use for Insertion
//     // display(arr,size);                                     Use for Insertion
//     indDeletion(arr , size ,index);
//     size-=1;
//     display(arr,size);
//     return 0;

// }



//-----------------------------------------------------------------------------------------------

//--------------BINARY SEARCH----------LINEAR SEARCH----------------

// #include<stdio.h>
// int linearsearch(int arr[] , int size , int element){
//     for(int i = 0 ; i <size; i++){
//         if(arr[i]==element){
//             printf("Item Found\n");
//             return i;
//         }
//     }
//     printf("Item not found");
//     return -1;
// }

// int binarysearch(int arr[] , int size, int element){
//     int low , mid , high;
//     low = 0;
//     high = size-1;

//     while(low<=high){
//     mid = (low+high)/2;
//     if(arr[mid]==element){
//         printf("Element found \n");
//         return mid;
//     }
//     if(arr[mid] < element){
//         low = mid+1;
//     }
//     else{
//         high = mid-1;
//     }
//     }
//     return -1;


// }

// int main(){
//     // Unsorted array ---Binary Search---
//     int arr[]={1,2,32,24,35,46,45,76,98,9,56745,345,6,32};
//     int size = sizeof(arr)/sizeof(int);
//     int element = 46;
//     int searchindex = linearsearch(arr , size , element);
//     printf("The element %d was found at index %d \n" , element , searchindex);

//     // Sorted array
//     // int arr[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
//     // int size = sizeof(arr)/sizeof(int);
//     // int element = 10;
//     // int searchindex = binarysearch(arr , size , element);
//     // printf("The element %d was found at index %d \n" , element , searchindex);

//     return 0;
// }


//--------------Linked List------------
