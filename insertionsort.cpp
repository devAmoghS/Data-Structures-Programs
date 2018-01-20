#include <iostream>
#include <conio.h>
#define MAX 10
using namespace std;

class Inssort{
    int arr[MAX],n;
    public:
    void getdata();
    void showdata();
    void sortLogic();
};

void Inssort :: getdata(){
    cout<<"How many elements you require : ";
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
}

void Inssort :: showdata(){
    cout<<"\n--Display--\n";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<"   ";
}

void Inssort :: sortLogic(){
    int j,temp,min;
    for(int i=1;i<n;i++){
        temp = arr[i];
        for(j=i;j>0 && arr[j-1]>temp;j--){
            arr[j] = arr[j-1];
        }
        arr[j] = temp;
    }
}

int main(){
    //clrscr();
    cout<<"\n*****Insertion Sort*****\n";
    Inssort obj;
    obj.getdata();
    obj.sortLogic();
    obj.showdata();
    getch();
}
