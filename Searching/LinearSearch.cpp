#include <iostream>
// linear Search
// Complixty O(n)
using namespace std;

int Search(int arr[], int n, int x)
{
    int i;
    for (i=0; i<n; i++)
        if (arr[i] == x)
         return i;
    return -1;
    //it return -1 if element not found
}
int main(){
    int ar[3];
    ar[0,2,6,8];
    int sizee =4;
    int Target_Element=6;
    cout<<"Index number "<<Search(ar,sizee,Target_Element);

}
