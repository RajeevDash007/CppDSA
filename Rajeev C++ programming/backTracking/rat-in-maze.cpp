#include<iostream>
using namespace std;

bool isSafe(int** arr,int x,int y,int n){
    if(x<n && y<<n && arr[x][y]==1){
         return true;
    }
    return false;
}

bool ratinMaze(int** arr,int x,int y,int n,int** solArr){

    if(x==n-1 && y==n-1){
        solArr[x][y]=1;
        return true;
    }

    if(isSafe(arr,x,y,n)){
        solArr[x][y]=1;
        if(ratinMaze(arr,x+1,y,n,solArr)){
            return true;
        }
        if(ratinMaze(arr,x,y+1,n,solArr)){
            return true;
        }
        solArr[x][y]=0;
        return false;
    }
    return false;
}

int main(){
    int n;
    cin>>n;

    int** arr=new int*[n];
 return 0;
} 