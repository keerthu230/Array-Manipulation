#include<iostream>
using namespace std;

int gcd(int a,int b);
int PrintArray(int arr[],int n);
void RotateArray(int arr[],int n,int s);

int main()
{
    int n,d;
    cout<<"Enter No.of.elements in Array :";
    cin>>n;
    int arr[n];
    cout<<"Enter the Array Elements : ";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<" Enter the elements to rotated , d = ";
    cin>>d;    
    int s= gcd(n,d);
    RotateArray(arr,n,s);
    PrintArray(arr,n);
    
    

}

// To Find GCD Of Two Numbers
int gcd(int a,int b)
{
    if(b==0)
       return a;
    else    
        return gcd(b,a%b);
}

//To Display The Passed Array

int PrintArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}

// To Rotate The Given Array By Juggling Algorithm 

void RotateArray(int arr[],int n,int s)
{
    int temp ,j,d;
    for(int i=0;i<s;i++)
    {
        j=i;
        temp=arr[i];
        while(1)
        {
            d=(j+s)%n; // identify when it is going out of bound of the array  
            if(d==i)
                break;
            arr[j]=arr[d];
            j=d;    
        }
        arr[j]=temp;
    }
     
}