
#include<iostream>
using namespace std;

void RotateArray(int arr[],int n);
int main()
{

    int key , d,arr[]={1,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    do{
        RotateArray(arr,n);  
    

    cout<<endl<<"To Exit press -> 0 \nTo Continue press -> 1 "<<endl;    
   
    cin>>key;

    }while(key);
    
}
void RotateArray(int arr[],int n)
{
    cout<<"Array Before Rotation"<<endl;
    for(int i=0;i<n;i++)
      cout<<arr[i]<<" ";
    cout<<endl;
    
    int d;  
    do{
        cout<<"!!!!Entered d < no.of.elements = "<<n<<endl;;
        cout<<"enter d"<<endl;
        cin>>d;
    }while(d==n);
    
    // create temp[]
    int temp[d];
    
    for(int i=0;i<d;i++)
      temp[i]=arr[i]; // temp[] of d elements
    int RotatedArray[n]; 
    for(int i=0;i<n-d;i++)
        RotatedArray[i]=arr[i+d]; // shift thr rest of elemenys in arr[] from 0 th position that d th element onwards


    for(int i=n-d,j=0;i<n;i++,j++)
        RotatedArray[i]=temp[j];

    cout<<"Array after rotation"<<endl;

    for(int i=0;i<n;i++)
        cout<<RotatedArray[i]<<" ";     

}
