#include <iostream>
#include <sortedtype.cpp>

using namespace std;
int main()
{
    sortedtype<int> st;
    int temp;
    bool found;
    cout << "Length is: " << st.LengthIs() << endl;
    st.InsertItem(5);
    st.InsertItem(7);
    st.InsertItem(4);
    st.InsertItem(2);
    st.InsertItem(1);

    st.ResetList();
    for(int i=0; i<st.LengthIs(); ++i)
    {
        st.GetNextItem(temp);
        cout << temp << " ";
    }
    cout << endl << endl;

    temp = 6;
    st.RetrieveItem(temp, found);
    if(found)
        cout << "Item is found." << endl;
    else
        cout << "Item is not found" << endl;
    temp = 5;
    st.RetrieveItem(temp, found);
    if(found)
        cout << "Item is found." << endl;
    else
        cout << "Item is not found" << endl;
    if(st.IsFull())
        cout << "List is full" << endl;
    else
        cout << "List is not full" << endl;


    st.DeleteItem(1);
    st.ResetList();
    for(int i=0; i<st.LengthIs(); ++i)
    {
        st.GetNextItem(temp);
        cout << temp << " ";
    }
    cout << endl << endl;
    if(st.IsFull())
        cout << "List is full" << endl;
    else
        cout << "List is not full" << endl << endl << endl;
    st.DeleteItem(2);
    st.DeleteItem(4);
    st.DeleteItem(5);
    st.DeleteItem(7);
    st.ResetList();
     for(int i=0; i<st.LengthIs(); ++i)
    {
        st.GetNextItem(temp);
        cout << temp << " ";
    }
    cout << endl << endl;
    if(st.IsFull())
        cout << "List is full" << endl;
    else
        cout << "List is not full" << endl << endl << endl;
       int n;
       if(n!=6)
        for(int i=0; i<5; ++i)
       {cout<<"Insert Five number;";
           cin>>n;
    }
       for(int i=0; i<5; ++i)
       {
           cout<<n;
       }
      return 0;
}
