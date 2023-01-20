#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;
int main(){
//function object(FUNCTOR)-function wrapped in class so that it available like an object 
   int arr[]={45,2,56,2,63,6,3};
   sort(arr,arr+5);//will sort 5 element,in increasing element
   sort(arr,arr+5,greater<int>()); //greater_function for sort in decending order
// sort(arr_name,arr+no. of element,function object)
   for (int i = 0; i < 7; i++)
   {
       cout<<arr[i]<<" ";
   }
   
return 0;
}