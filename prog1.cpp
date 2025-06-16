#include<iostream>
using namespace std;

class Selection_sort{
    public:
    void sort(int arr[],int n)
    {
        int temp,min;

        for(int i=0; i<n-1; i++)
        {
            min = i;
            for(int j=i+1; j<n; j++)
            {
                if(arr[j] < arr[min])
                {
                    min = j;
                }  
               
              
            }
             temp = arr[i];
                arr[i] = arr[min];
                arr[min] = temp; 
             
      

            cout<<"\n---------------------------\n";
           
            for(int i = 0 ; i < n ; i++){
            cout<<arr[i]<<" ";
        }
            cout<<"\n---------------------------\n";
        }
    }
    void display(int arr[] , int n)
    {
        
        for(int i = 0 ; i < n ; i++){
            cout<<arr[i]<<" ";
        }
    }
};

int main(){
    
    Selection_sort obj;
    int n ;

    cout<<"Enter the size of an Array : ";
    cin>>n;

    int arr[n];

    for(int i = 0 ; i < n ; i++){
        cout<<"Enter elemnet of array["<<i<<"] : ";
        cin>>arr[i];
    }
    cout<<"Before Sorting \n";
    obj.display(arr , n);
    cout<<endl;
    obj.sort(arr , n);
    cout<<endl;
    cout<<"After Sorting \n";
    obj.display(arr , n);
    cout<<endl;


}