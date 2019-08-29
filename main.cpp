#include <iostream>
using namespace std;

int main() {
    int x = 0;
    while(cin>>x){
        int operations = 0;
        int array[x];
        for(int i=0; i<x; i++){
            cin>>array[i];
        }
        for(int j=0; j<x-1; j++){
            for(int i=0; i<x-1-j; i++){
                if(array[i] > array[i+1]){
                    swap(array[i], array[i+1]);
                    operations+=1;
                }
            }
        }
        cout<<"Minimum exchange operations : "<< operations<<'\n';
    }
    return 0;
}