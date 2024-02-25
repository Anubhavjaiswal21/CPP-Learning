#include<iostream>
#include<vector>
using namespace std;
/*
void display(vector <int>&vec1)
{
    cout<<"Elements are:";
    for(int i=0;i<vec1.size();i++)
    {
        cout<<vec1[i]<<" ";
        
    }
}
int main(){
    int size,element;
    cout<<"Enter size of vector:";
    cin>>size;
    vector<int> vec1;
    
    for(int i=0;i<size;i<i++)
    {
        cout<<"Enter the element: "<<endl;
        cin>>element;
        vec1.push_back(element);
    }
    display(vec1);
    return 0;
}*/
void display(vector <int>&vec)
{
    cout<<"Elements are:";
    for(int i=0;i<vec.size();i++)
    {
        cout<<vec[i]<<" ";
        
    }
}
int main()
{
   vector <int>vec2(7,3);
  // vec2.push_back(2);
  // vec2.push_back(20);
   //vec2.push_back(200);
   display(vec2);
}