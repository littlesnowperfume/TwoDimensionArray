//
//  main.cpp
//  Two_dim_array
//
//  Created by Paul Chou on 2020/11/6.
//
#include <iostream>


using namespace std;
int main(){
    int i,j;
    int data_height,data_width;
    int **data; //The most important thing declaration
    
    cout<<"先輸入維度:";
    cin>>data_height>>data_width;
    
    //Create a space, then new
    data = new int*[data_height];
    for(i=0;i<data_height;i++){
        data[i] = new int[data_width];
    }
    //print
    for(i =0;i<data_height;i++){
        for(j=0;j<data_width;j++){
            data[i][j] = i+j;
            cout<<data[i][j]<<"\t";
        }
        cout<<"\n";
    }
    //delete
    for(i =0;i<data_height;i++){
        delete [] data[i];
    }
    delete [] data;
    return 0;
}


