#include<iostream>
#include<map>
#include<string>
using namespace std;
//Map is an associative array
int main(){
    map<string, int> marksMap;;
    marksMap["Bhargav"]=99;
    marksMap["Rohan"]=50;
    marksMap["Gourav"]=89;
    marksMap["Veer"]=37;
    marksMap.insert({{"Gunda",33},{"Hero",100}});
    map<string,int> :: iterator itr;
    for (itr=marksMap.begin(); itr!=marksMap.end();itr++)
    {
        cout<<(*itr).first<<" "<<(*itr).second<<endl;
    }   
    cout<<"the size is "<<marksMap.size()<<endl;
    cout<<"the maximum size is "<<marksMap.max_size()<<endl;
    cout<<"the empty return value is "<<marksMap.empty()<<endl;
    cout<<"marksMap backwards "<<endl;
    for(auto re_itr=marksMap.crbegin();re_itr!=marksMap.crend();re_itr++){
        cout<<(*re_itr).first<<" "<<(*re_itr).second<<endl;
    }
return 0;
}
