 int x=4;
        cout<<&x<<endl;//using &
        int  *p=&x;
        cout<<p<<endl;//using pointer
        
        cout<<*p<<endl;//the value located at the address stored in pointer
        *p=8;
        cout<<*p<<endl;
        