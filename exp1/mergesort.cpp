#include<iostream>
using namespace std;
void merge(int a[],int l,int m,int h){
    
}
void mergesort(int a[],int l,int h){
    if(l<=h){
        int m=(l+h)/2;
        mergesort(a,l,m-1);
        mergesort(a,m+1,h);
        merge(a,l,m,h);
    }
    
}