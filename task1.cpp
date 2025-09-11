#include <iostream>
#include <vector>
using namespace std;

int main(){
    int array[10] = {};
    cout<<"Which number would you like to search for?"<<endl;
    int key;
    cin>>key;
    bool found = false;
    int occurrences = 0;
    vector<int> indices;
    for (int i=0; i<10; i++){
        if (array[i] == key){
            occurrences++;
            found=true;
            indices.push_back(i);
        }
    }
    if(found){
        cout<<key<<" was found "<<occurrences<<" time(s) at the following indices: ";
        for(int index : indices){
            cout<<index<<" ";
        }
        cout<<endl;
    } else{
        cout<<key<<" was not found."<<endl;
    }
    return 0;
}