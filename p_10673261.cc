#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;

struct student
    {
        char name[25];
        char address[50];

        int id;
        char _class[20];
        int age;
        long double tel;
        int marks;
        char grade[4];
        int course_code;
        char course_title[25];
    };





int main()
{
   char dow;
     int arr=0;
     int arr2=0;
     int arr3=0;

       cout << "Press 1 Edit/Delete/Add Student" << endl;
       cout << "Press 2 Edit/Delete/Add Staff" << endl;


       cout << endl;
       cout << "\t Select Option:";

       int sw2;
       cin >> sw2;

       switch(sw2)
    {
        case  1 :

         cout << "You Can Edit/Add/Delete Student Records.. \n";

    do
   {
       student stud[20];

       cout << "Press 1 to Add New Record" << endl;
       cout << "Press 2 to Delete Record" << endl;
       cout << "Press 3 to Edit Record" << endl;
       cout << "Press 4 to Display Record" << endl;

       cout << endl;
       cout << "\t Select Option:";

       int rolcheck = 0;

    int sw;
    cin >> sw;

    switch(sw)
    {
        case  1 :


        cout << "\n Enter the info of the student " << arr+1 << " is :" << endl;

        cout << "\t Enter the ID No. = ";
    int id2;
    int id1;



    cin >> id1;

    for(int j=0; j<=arr; j++){

        id2=id1;
    if(id2 == stud[j].id)
    {
        rolcheck = 1;
         }
    }
    if(rolcheck!= 1){
        stud[arr].id=id1;

    cout <<"\t Enter the Name = ";
    cin >> stud[arr].name;

    cout << "\t Enter the Address = ";
    cin >> stud[arr].address;

    cout << "\t Enter the Telephone no = ";
    cin >> stud[arr].tel;

    cout << "\t Enter the Class = ";
    cin >> stud[arr]._class;

    cout << "\t Enter the Course_code = ";
    cin >> stud[arr].course_code;

    cout << "\t Enter the Course_title = ";
    cin >> stud[arr].course_title;

    cout << "\t Enter the Marks = ";
    cin >> stud[arr].marks;

    cout << "\t Enter the Grade = ";
    cin >> stud[arr].grade;

    cout << "\t Enter the Age = ";
    cin >> stud[arr].age;
    arr=arr+1;
    }
    else
    {
        cout << "This Record Already Exists \n";
    }


            break;

        case 2:
            cout << "\n Enter the ID No. of the Student to Delete: " << endl;

            cin >> id1;

            for(int j=0; j<=arr; j++)
            {

                id2=id1;
            if(id2==stud[j].id)
            {
                stud[j].id = 'd';
                cout << "\t Record Successfully Deleted";
                  }
            }
                    break;
        case 3:
            cout << "\n Enter the ID No. of the Student to Edit: " << endl;


            cin >>id1;

        for(int j=0; j<=arr; j++)
        {


            id2=id1;
        if(id2==stud[j].id)
        {
        cout << "\t ID No.  ";
        cout << stud[j].id;
        cout << "\t Name = ";
        cout << stud[j].name;
        cout << "\t Address = ";
        cout << stud[j].address;
        cout << "\t Telephone no ";
        cout << stud[j].tel;
        cout << "\t Class = ";
        cout << stud[j]._class;

        cout << "\t Course Code = ";
        cout << stud[j].course_code;

        cout << "\t Course Title = ";
        cout << stud[j].course_title;
        cout << "\t Marks = ";
        cout << stud[j].marks;
        cout << "\t Grade = ";
        cout << stud[j].grade;


    cout << "\n\t Re-Enter Info ";
            cout << "\n\t Enter the Name = ";
            cin >> stud[j].name;

            cout << "\n\t Enter the Address = ";
            cin >> stud[j].address;

            cout << "\n\t Enter the Telephone no = ";
            cin >> stud[j].tel;

            cout << "\n\t Enter the Class = ";
            cin >> stud[j]._class;

            cout << "\n\t Enter the Course Code = ";
            cin >> stud[j].course_code;

            cout << "\n\t Enter the Course Title = ";
            cin >> stud[j].course_title;

            cout << "\n\t Enter the Marks = ";
            cin >> stud[j].marks;

            cout << "\n\t Enter the Grade = ";
            cin >> stud[j].grade;

            cout << "\n\t Enter the Age = ";
            cin >> stud[j].age;
               }

    }
    break;


        case 4:
            cout << "\n________________________________________________________________________________________________________" << endl;
            for(int i=0; i<1; i++)
            {
                cout << "ID No. ||";
                cout << " Name ||";
                cout << " Address ||";
                cout << "Tele no ||";
                cout << " Class ||";
                cout << " Course Code || ";
                cout << " Course Title || ";
                cout << " Marks || ";
                cout << " Grade ||";
            for(int k=0;k<arr;k++)
            {
                if(stud[k].id!='d')
                {
                    cout << "\n";
                      cout << " ";
                    cout << stud[k].id;
                    cout << "   || ";
                    cout << stud[k].name;
                    cout << " || ";
                    cout << stud[k].address;
                    cout << "   ||  ";
                    cout << stud[k].tel;
                    cout << "  ||  ";
                    cout << stud[k]._class;
                    cout << " ||  ";
                    cout << stud[k].course_code;
                    cout << "       ||  ";
                    cout << stud[k].course_title;
                    cout << "            ||   ";
                    cout << stud[k].marks;
                    cout << "      ||   ";
                    cout << stud[k].grade;
                    cout << "   ||";
                }

            }
            }

            cout << "\n________________________________________________________________________________________________________\n";
                break;


        default:
            cout << "\t You've selected a wrong Option";
            break;
    }
          cout << "\n \n \t Do You want to Continue Again? [Yes/No]";
          cin>> dow;
            }

            while(dow=='y');


      break;

        case 2:
            cout << "You Can Edit/Add/Delete Staff Records: " << endl;

            //update/delete/edit staff records
             do
   {
       student stud[20];

       cout << "Press 1 to Add New Record" << endl;
       cout << "Press 2 to Delete Record" << endl;
       cout << "Press 3 to Edit Record" << endl;
       cout << "Press 4 to Display Record" << endl;

       cout << endl;
       cout << "\t Select Option:";

       int rolcheck = 0;

    int sw;
    cin >> sw;

    switch(sw)
    {
        case  1 :


        cout << "\n Enter the info of the Staff " << arr2+1 << " is :" << endl;

        cout << "\t Enter the ID No. = ";
    int id2;
    int id1;

    cin >> id1;

    for(int j=0; j<=arr2; j++){

        id2=id1;
    if(id2 == stud[j].id)
    {
        rolcheck = 1;
         }
    }
    if(rolcheck!= 1){
        stud[arr2].id=id1;

    cout <<"\t Enter the Name = ";
    cin >> stud[arr2].name;

    cout << "\t Enter the Address = ";
    cin >> stud[arr2].address;

    cout << "\t Enter the Telephone no = ";
    cin >> stud[arr2].tel;

    cout << "\t Enter the Age = ";
    cin >> stud[arr2].age;
    arr2=arr2+1;
    }
    else
    {
        cout << "This Record Already Exists \n";
    }


            break;

        case 2:
            cout << "\n Enter the ID No. of the Staff to Delete: " << endl;

            cin >> id1;

            for(int j=0; j<=arr2; j++)
            {

                id2=id1;
            if(id2==stud[j].id)
            {
                stud[j].id = 'd';
                cout << "\t Record Successfully Deleted";
                  }
            }
                    break;
        case 3:
            cout << "\n Enter the ID No. of the Staff to Edit: " << endl;


            cin >>id1;

        for(int j=0; j<=arr; j++)
        {


            id2=id1;
        if(id2==stud[j].id)
        {
        cout << "\t ID No.  ";
        cout << stud[j].id;
        cout << "\t Staff Name = ";
        cout << stud[j].name;
        cout << "\t Address = ";
        cout << stud[j].address;
        cout << "\t Telephone no ";
        cout << stud[j].tel;
        cout << "\t Age ";
        cout << stud[j].age;


    cout << "\n\t Re-Enter Info ";
            cout << "\n\t Enter the Staff ID No. = ";
            cin >> stud[j].id;
            cout << "\n\t Enter the Staff Name = ";
            cin >> stud[j].name;

            cout << "\n\t Enter the Address = ";
            cin >> stud[j].address;

            cout << "\n\t Enter the Telephone no = ";
            cin >> stud[j].tel;

            cout << "\n\t Enter the Age = ";
            cin >> stud[j].age;
               }
        }

                break;

            case 4:
            cout << "\n_________________________________________________________________________________________________________" << endl;
            for(int i=0; i<1; i++)
            {
                cout << "ID No. |";
                cout << " Name |";
                cout << " Address |";
                cout << "Tele no |";
                cout << " Age |";
            for(int k=0;k<arr;k++)
            {
                if(stud[k].id!='d')
                {
                    cout << "\n";
                      cout << " ";
                    cout << stud[k].id;
                    cout << "   | ";
                    cout << stud[k].name;
                    cout << " | ";
                    cout << stud[k].address;
                    cout << "   |  ";
                    cout << stud[k].tel;
                    cout << "  |  ";

                    cout << stud[k].age;
                    cout << "   |";
                }

            }
            }

            cout << "\n-----------------------------------------------------------------------------------------------------------\n";

                break;


        default:
            cout << "\t You've selected a wrong Option";
            break;
    }
          cout << "\n \n \t Do You want to Continue Again? [Yes/No]";
          cin>> dow;
            }

            while(dow=='y');

            break;




    return 0;
    getch();




    }


}
