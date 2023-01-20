#include <iostream>
#include <vector>
using namespace std;
template <class T>
void display(vector<T> &v)
{   
    cout<<"displaying this vector "<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> vac1;//zero length integervector
    display (vac1);
    vector<char> vac2(4);//4 element character vector
    vac2.push_back('5');
    display(vac2);
    vector<char> vac3(vac2);//4 element character vector from vac2
    display(vac3);
    vector<int> vac4(6,3); //6 element vector of 3s vac(element,length)
    display(vac4);
    cout<<vac4.size();
    int element, size=6;
    // cout << "enter the size of your vector ";
    // cin >> size;
    // for (int i = 0; i < size; i++)
    // {
    //     cout << "enter a element to the vector ";
    //     cin >> element;
    //     vac1.push_back(element);
    // }
    // vac1.pop_back();
    // delete element at last position

    // display(vac1);
    vector<int>::iterator itr = vac1.begin();
    vac1.insert(itr + 2, 500, 6); // insert or can we say itrate an element at specified position
    // name.insert(itr{any name}+after how many position,repetation,element)
    display(vac1);
    return 0;
}