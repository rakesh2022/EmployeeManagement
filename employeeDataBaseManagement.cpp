#include<bits/stdc++.h>
#include<string>
#include<Windows.h>
using namespace std;
class emp{
    public:
string name,depart,age,salary,id;
};
class staf{
    public:
    string user_name,user_password;
};
staf staffs[50];
int total_staffs=0;
emp e[100];
int newId=1;
int total = 0;
void insert()
{
    int new_emp;
    cout << "please enter total number of new employees"
         << "\n";
    cin >> new_emp;
    for (int i = total; i < total + new_emp; i++)
    {
         e[i].id=to_string(newId);
         newId++;
        cout << "please insert details of new employee :" << i + 1 << "\n";
        cout << "enter employee name :"
             << "\n";
        cin >> e[i].name;
        cout << "enter employee department :"
             << "\n";
        cin >> e[i].depart;
        cout << "enter employee age :"
             << "\n";
        cin >> e[i].age;
        cout << "enter employee salary in dolor :"
             << "\n";
        cin >> e[i].salary;
        cout<<"\n";
    }
    total += new_emp;
}
void display()
{
    if (total == 0)
    {
        cout << " Sorry! there is no employee data"
             << "\n";
        return;
    }
    for (int i = 0; i < total; i++)
    {
        cout << "details of employee :" << i + 1 << "\n";
        cout << "employee id : " << e[i].id << "\n";
        cout << "employee name : " << e[i].name << "\n";
        cout << "employee department : " << e[i].depart << "\n";
        cout << "employee age : " << e[i].age << "\n";
        cout << "employee salary in dolor : " << e[i].salary << "\n\n\n";
    }
}
void search()
{
    string tid;
    cout << "enter employee id: "
         << "\n";
    cin >> tid;
    for (int i = 0; i < total; i++)
    {
        if (e[i].id == tid)
        {
            cout << "congrates! below is your employee details"
                 << "\n";
            cout << "employee id : " << e[i].id << "\n";
            cout << "employee name : " << e[i].name << "\n";
            cout << "employee department : " << e[i].depart << "\n";
            cout << "employee age : " << e[i].age << "\n";
            cout << "employee salary in dolor : " << e[i].salary << "\n";
            return;
        }
    }
    cout << "sorry! there is no employee of id: " << tid << "\n";
}
void update()
{
    string tid;
    cout << "enter employee id which you want to update: "
         << "\n";
    cin >> tid;
    for (int i = 0; i < total; i++)
    {
        if (e[i].id == tid)
        {
            e[i].id=to_string(newId);
            newId++;
            cout << "enter new employee name :"
                 << "\n";
            cin >> e[i].name;
            cout << "enter new employee department :"
                 << "\n";
            cin >> e[i].depart;
            cout << "enter new employee age :"
                 << "\n";
            cin >> e[i].age;
            cout << "enter new employee salary in dolor :"
                 << "\n";
            cin >> e[i].salary;
            return;
        }
    }
    cout << "sorry! tere is no employee of id: " << tid << "\n";
}
void deleteit()
{
    string tid;
    cout << "enter the id of employee ,you want to delete"
         << "\n";
    cin >> tid;
    for (int i = 0; i < total; i++)
    {
        if (e[i].id == tid)
        {
            total--;
            for (int j = i; j < total; j++)
            {
                e[j] = e[j + 1];
            }
            cout << "congrates! Employee with id: " << tid << " is deleted.";
            return;
        }
    }

}

int main()
{
    string username="",password="";
    int option;
    cout<<"\t\tEYES ON STARS\n\n";
    cout<<"\t\t******Sign Up****\n";
    cout<<"Enter Username : ";
    cin>>username;
    cout<<"\nEnter Password : ";
    cin>>password;
    staffs[total_staffs].user_name=username;
     staffs[total_staffs].user_password=password;
    total_staffs++;
cout<<"Please Wait creating Account";
for(int i=0;i<4;i++){
    cout<<".";
    Sleep(1000);
}
cout<<"\nCongratulations! Your Account is Successfully created.";
for(int i=0;i<4;i++){
    cout<<".";
    Sleep(1000);
}
system("CLS");
lable:
system("CLS");
string username1,password1;
cout<<"\t\tEYES ON STARS\n\n";
cout<<"***Login***\n";
        cout<<"Enter Username : ";
        cin>>username1;
         cout<<"Enter Password : ";
        cin>>password1;
        int i;
        for(i=0;i<total_staffs;i++){
        if(username1==staffs[i].user_name && password1==staffs[i].user_password)break;
        }
        if(i==total_staffs){
        cout<<"Incorrect username or password";
    Sleep(3000);
        goto lable;
        
system("CLS");
        cout<<"\t\tEYES ON STARS\n\n";
        }


    while (true)
    {
        cout << "\n"
             << "\n"
             << "\n";
        cout << "Most welcome, i'm here for you "
             << "\n";
        cout << "press 1 to insert new employee data: "
             << "\n";
        cout << "press 2 to show employee data: "
             << "\n";
        cout << "press 3 to search any employee data: "
             << "\n";
        cout << "press 4 to update any employee data: "
             << "\n";
        cout << "press 5 to delete any employee data: "
             << "\n";
        cout << "press 6 to logout"
             << "\n";
             cout<<"press 7 to exit\n";
        int option;
        cin >> option;
        switch (option)
        {
        case 1:
            insert();
            break;
        case 2:
            display();
            break;
        case 3:
            search();
            break;
        case 4:
            update();
            break;
        case 5:
            deleteit();
            break;
            case 6:
            goto lable;
        case 7:
            cout << "\nprogram ended";
            return 0;
        default:
            cout << "\aplease enter valid key: "
                 << "\n";
        }
    }
    return 0;
}
