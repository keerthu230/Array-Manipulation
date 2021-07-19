#include<iostream>
using namespace std;
void RotateArray(int arr[],int n,int d);
void PrintArray(int arr[],int n);

int main()
{
    int n,d,key;
    cout<<"Enter no.of.elements in array = ";
    cin>>n;
    cout<<"No.of.elements to be rotated , d = ";
    cin>>d;
    int arr[n];
    for(int i=0 ;i<n;i++)
        cin>>arr[i];
    
    cout<<"Array Before Rotation "<<endl;    
    PrintArray(arr,n);  

   do{ 
    
        RotateArray(arr,n,d); 
    
        cout<<endl<<"To Exit press -> 0 \nTo Continue press -> 1 "<<endl;    
    
        cin>>key;
        if(key)
        {
                do
                {   if(d==n) // No Need Of Rotation if d and n are equal that the output is same.
                        cout<<"!!! Enter d < no.of.elements in the array = "<<n<<endl;
                    cout<<endl<<"enter d :"<<endl;
                    cin>>d;

                }while (d==n);
            cout<<"Array Before Rotation "<<endl;    
            PrintArray(arr,n);
        }
   }while(key);
   
}

// Function To Rotate the Given Array

void RotateArray(int arr[],int n,int d)
{
    int temp;
    int RotatedArray[n];
    for(int i =0;i<n;i++)
        RotatedArray[i]=arr[i];

    for(int i =0;i<d;i++)
    {
        temp=RotatedArray[0]; // first element in rotated array stored in temp  
        for(int j=0;j<n-1;j++)  // move one element forward using loop
            RotatedArray[j]=RotatedArray[j+1];
        RotatedArray[n-1]=temp; // store first element in the last position 
        
    }
    cout<<endl<<"Array After Rotation "<<endl;   
    PrintArray(RotatedArray,n);  
}

// Function To print The Passed Array

void PrintArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" "; 
}
