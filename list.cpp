#include <iostream>
#include <list>
using namespace std;
void display(list<int> &lst)
{
    list<int>::iterator it;
    for (it = lst.begin(); it != lst.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}
int main()
{
    list<int> list1; // list of 0 length
    list1.push_back(9);
    list1.push_back(7);
    list1.push_back(9);
    list1.push_back(2);
    list1.push_back(9);
    list1.push_back(8);
    // list<int>:: iterator itr;
    // itr=list1.begin();
    // cout<<*itr<<" ";
    // itr++;
    // cout<<*itr<<" ";
    // itr++;
    // cout<<*itr<<" ";
    // itr++;
    // cout<<*itr<<" ";
    display(list1);
    list1.pop_back(); // delete from back
    display(list1);
    list1.pop_front(); // delete from front
    display(list1);
    list1.remove(9); // delete a particular value(all occurence will be deleted)
    display(list1);
    list<int> list2(5); // empty list of size 7
    list<int>::iterator iter;
    iter = list2.begin();
    *iter = 76;
    iter++;
    *iter = 55;
    iter++;
    *iter = 6;
    iter++;
    *iter = 87;
    iter++;
    *iter = 12;
    iter++;
    display(list2);
    // list2.sort();
    // cout<<"sorted list " ;
    // display(list2);
        list<int> list3; 
    list3.push_back(8);
    list3.push_back(6);
    list3.push_back(9);
    list3.push_back(11);
    list3.push_back(32);
    list3.push_back(2);
    display(list3);
    list2.merge(list3);
    cout<<"merged list "<<endl;
    display(list2);
    list2.reverse();
    return 0;
}
// list used for increse the speed of insertion and deletion,but access is slower than array