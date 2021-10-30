#include <iostream>  //header
using namespace std; //standard

void TowerOfHanoi(int n, char source, char destination, char helper) //function for tower of hanoi
{
    if (n == 1) //base condition
    {
        cout << "Move disc 1 to " << destination << " from " << source << endl; //for the last disc
        return;                                                                 //stops here
    }
    TowerOfHanoi(n - 1, source, helper, destination);                                 //again calling the function for n-1 from source to helper
    cout << "Move disc " << n << " to " << destination << " from " << source << endl; //printing that line
    TowerOfHanoi(n - 1, helper, destination, source);                                 //again calling that function for n-1,from helper to destination
}

int main() //execution begins from here
{
    int n;
    char a, b, c;
    cout << "enter the nummber of discs" << endl;
    cin >> n;
    cout << "enter the source disc from (a,b,c)" << endl;
    cin >> a;
    cout << "enter the destination disc" << endl;
    cin >> b;
    cout << "enter the helper disc" << endl;
    cin >> c;
    TowerOfHanoi(n, a, b, c); //calling the function
    return 0;
}
