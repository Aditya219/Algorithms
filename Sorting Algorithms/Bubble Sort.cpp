#include<iostream>
#include<stdio.h>
using namespace std;

void swap(float *left, float *right){
    float temp;
    temp = *left;
    *left = *right;
    *right = temp;
}

void print(float * Array, int num){
    cout<<"SOrting using bubble Sort : ";
    for(int i=0; i<num; i++){
        cout<<Array[i]<<" ";
    }
}

void BubbleSort(float *Array, int num){
    for(int i=0; i<num; i++){
        for(int j=0; j<num-1-i; j++){
            if(Array[j] > Array[j+1]){
                swap(Array[j], Array[j+1]);
            }
        }
    }
    print(Array, num);
}


int main(){
    int num;
    cout << "Enter No. of elements : ";
    cin >> num;
    float *Array = new float[num];

    for(int i=0; i<num; i++){
        cout<<"Enter number "<<i+1<<": ";
        cin >> Array[i];
    }

    BubbleSort(Array, num);
}