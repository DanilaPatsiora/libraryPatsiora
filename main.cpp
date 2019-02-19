#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
#include <iomanip>
#include <time.h>
using namespace std;
struct Date
{
    int day;
    int  month;
    int  year;
};
struct Book
{
    Date date_b;            // дата издания
    char name[30];           //название книги
    char author[30];        // имя автора
    char genre[15];         // жанр
    double price;           //цена
    double rating;          //рейтинг
    int id_b;               // ID книги
    int availability;// наличие в библиотеке либо ID читателя, у которого находится книга
    time_t timeofexceed; // время выдачи книги
    time_t timeofreturn; //время возвращения книги
};
struct Reader
{
	Date date_a;
    Date date_r;            // дата рождения
    char surname[15];       //фамилия
    char name[15];          //имя
    char patronymic[15];    //отчество
    char passport_num[20];  //паспорт
    int id_r;               // ID читателя
    int books_read;        // кол-во прочитаных книг
    int listofbookonhand[10];  //список ID книг, находящихся на руках

};
void generate_books(Book*&books_mas,int &size_b,int &id_b )
{
    int data; //для свитча
    if (size_b == 0)
    {
        books_mas = new Book[1];
    }
    else
    {
        Book *tmp = new Book[size_b + 1];
        for (int i = 0; i < size_b; i++)
        {
            tmp[i] = books_mas[i];
        }
        delete[]books_mas;
        books_mas = tmp;
    }
    books_mas[size_b].id_b = id_b++;
    books_mas[size_b].date_b.day=rand()%31+1;
    books_mas[size_b].date_b.month=rand()%12+1;
    books_mas[size_b].date_b.year=rand()%1017+1000;
    data=rand()%10;
    switch (data)
        {
            case 0:
                strcpy(books_mas[size_b].name,"Mantra");
                break;
            case 1:
                strcpy(books_mas[size_b].name,"Sparta");
                break;
            case 2:
                strcpy(books_mas[size_b].name,"Pulse");
                break;
            case 3:
                strcpy(books_mas[size_b].name,"Generator");
                break;
            case 4:
                strcpy(books_mas[size_b].name,"Fighters club");
                break;
            case 5:
                strcpy(books_mas[size_b].name,"Funny moments");
                break;
            case 6:
                strcpy(books_mas[size_b].name,"Aikido");
                break;
            case 7:
                strcpy(books_mas[size_b].name,"Portable");
                break;
            case 8:

                strcpy(books_mas[size_b].name,"Tundra");
                break;

            case 9:

                strcpy(books_mas[size_b].name,"Western");
                break;

        }
    data=rand()%10;
    switch (data)
    {
        case 0:
            strcpy(books_mas[size_b].author,"Ricardo Alves");
            break;
        case 1:
            strcpy(books_mas[size_b].author,"Danila Patsiora");
            break;
        case 2:
            strcpy(books_mas[size_b].author,"Dasha Suvorova");
            break;
        case 3:
            strcpy(books_mas[size_b].author,"Evgeniya Cherkasskaya");
            break;
        case 4:
            strcpy(books_mas[size_b].author,"Tatyana Musiiko");
            break;
        case 5:
            strcpy(books_mas[size_b].author,"Dmitriy Kuprava");
            break;
        case 6:
            strcpy(books_mas[size_b].author,"Alexander Krivoruchko");
            break;
        case 7:
            strcpy(books_mas[size_b].author,"Denis Lupandin");
            break;
        case 8:

            strcpy(books_mas[size_b].author,"Yaroslava Pronina");
            break;

        case 9:

            strcpy(books_mas[size_b].author,"Ruslan Atdaev");
            break;

    }
    data=rand()%5;
    switch (data) {
        case 0:
            strcpy(books_mas[size_b].genre, "Comedy");
            break;

        case 1:
            strcpy(books_mas[size_b].genre, "Horror");
            break;

        case 2:
            strcpy(books_mas[size_b].genre, "Poetry");
            break;

        case 3:
            strcpy(books_mas[size_b].genre, "Tragedy");
            break;

        case 4:
            strcpy(books_mas[size_b].genre, "Epic");
            break;
    }
    books_mas[size_b].rating=rand()%5+1;
    books_mas[size_b].price=rand()%51+50;
    books_mas[size_b].availability=-5;
    size_b++;
}
void generate_readers(Reader*&readers_mas,int &size_r,int &id_r )
{
    int data;
    if (size_r == 0)
    {
        readers_mas = new Reader[1];
    }
    else
    {
        Reader *tmp = new Reader[size_r + 1];
        for (int i = 0; i < size_r; i++)
        {
            tmp[i] = readers_mas[i];
        }
        delete[]readers_mas;
        readers_mas = tmp;
    }
    readers_mas[size_r].id_r= id_r++;
    data=rand()%10;
    switch (data)
    {
        case 0:
            strcpy(readers_mas[size_r].name,"Alexander");
            break;
        case 1:
            strcpy(readers_mas[size_r].name,"Vladislav");
            break;
        case 2:
            strcpy(readers_mas[size_r].name,"Evgeniy");
            break;
        case 3:
            strcpy(readers_mas[size_r].name,"Danila");
            break;
        case 4:
            strcpy(readers_mas[size_r].name,"Denis");
            break;
        case 5:
            strcpy(readers_mas[size_r].name,"Dmitriy");
            break;
        case 6:
            strcpy(readers_mas[size_r].name,"Maxim");
            break;
        case 7:
            strcpy(readers_mas[size_r].name,"Valentin");
            break;
        case 8:

            strcpy(readers_mas[size_r].name,"Ivan");
            break;

        case 9:

            strcpy(readers_mas[size_r].name,"Ruslan");
            break;

    }
    data=rand()%10;
    switch (data)
    {
        case 0:
            strcpy(readers_mas[size_r].surname,"Chepiga");
            break;
        case 1:
            strcpy(readers_mas[size_r].surname,"Pschenichniy");
            break;
        case 2:
            strcpy(readers_mas[size_r].surname,"Kolyada");
            break;
        case 3:
            strcpy(readers_mas[size_r].surname,"Kostenok");
            break;
        case 4:
            strcpy(readers_mas[size_r].surname,"Plugoviy");
            break;
        case 5:
            strcpy(readers_mas[size_r].surname,"Cokalo");
            break;
        case 6:
            strcpy(readers_mas[size_r].surname,"Maximenko");
            break;
        case 7:
            strcpy(readers_mas[size_r].surname,"Melnik");
            break;
        case 8:

            strcpy(readers_mas[size_r].surname,"Kosteckiy");
            break;

        case 9:

            strcpy(readers_mas[size_r].surname,"Kucherenko");
            break;

    }
    data=rand()%10;
    switch (data)
    {
        case 0:
            strcpy(readers_mas[size_r].patronymic,"Vladimirovich");
            break;
        case 1:
            strcpy(readers_mas[size_r].patronymic,"Igorevich");
            break;
        case 2:
            strcpy(readers_mas[size_r].patronymic,"Sergeyevich");
            break;
        case 3:
            strcpy(readers_mas[size_r].patronymic,"Ivanovich");
            break;
        case 4:
            strcpy(readers_mas[size_r].patronymic,"Vasilievich");
            break;
        case 5:
            strcpy(readers_mas[size_r].patronymic,"Alexandrovich");
            break;
        case 6:
            strcpy(readers_mas[size_r].patronymic,"Maximovich");
            break;
        case 7:
            strcpy(readers_mas[size_r].patronymic,"Olegovich");
            break;
        case 8:

            strcpy(readers_mas[size_r].patronymic,"Nikolayevich");
            break;

        case 9:

            strcpy(readers_mas[size_r].patronymic,"Felixovich");
            break;

    }
    readers_mas[size_r].date_r.day=rand()%31+1;
    readers_mas[size_r].date_r.month=rand()%12+1;
    readers_mas[size_r].date_r.year=rand()%40+1950;
    data=rand()%5;
    switch(data)
    {
        case 0:
            strcpy(readers_mas[size_r].passport_num,"KI 192345");
            break;
        case 1:
            strcpy(readers_mas[size_r].passport_num,"AK 564979");
            break;
        case 2:
            strcpy(readers_mas[size_r].passport_num,"SN 123750");
            break;
        case 3:
            strcpy(readers_mas[size_r].passport_num,"TT 987654");
            break;
        case 4:
            strcpy(readers_mas[size_r].passport_num,"RE 836835");
            break;
        case 5:
            strcpy(readers_mas[size_r].passport_num,"KI 125616");
            break;
        case 6:
            strcpy(readers_mas[size_r].passport_num,"AK 542524");
            break;
        case 7:
            strcpy(readers_mas[size_r].passport_num,"SN 873925");
            break;
        case 8:
            strcpy(readers_mas[size_r].passport_num,"TT 120204");
            break;
        case 9:
            strcpy(readers_mas[size_r].passport_num,"RE 122231");
            break;
    }
    readers_mas[size_r].books_read=0;
    for (int j = 0; j <10 ; ++j)
    {
        readers_mas[size_r].listofbookonhand[j]=0;
    }
    size_r++;
}
void add_book(Book*&books_mas,int &size_b,int &id_b )
{
    if (size_b == 0)
    {
        books_mas = new Book[1];
    }
    else
    {
        Book *tmp = new Book[size_b + 1];
        for (int i = 0; i < size_b; i++)
        {
            tmp[i] = books_mas[i];
        }
        delete[]books_mas;
        books_mas = tmp;
    }
    books_mas[size_b].id_b = id_b++;
    cout << "Enter day of edition ->";
    for(;;)
    {
        cin>>books_mas[size_b].date_b.day;
        if(books_mas[size_b].date_b.day<=0||books_mas[size_b].date_b.day>31)
        {
            cout<<"Wrong data! Enter one more time"<<endl;
        }
        else
        {
            break;
        }
    }
    cout << "Enter month of edition(example: 01 ; 07; 12) ->";
    for(;;)
    {
        cin>>books_mas[size_b].date_b.month;
        if(books_mas[size_b].date_b.month<=0||books_mas[size_b].date_b.month>12)
        {
            cout<<"Wrong data! Enter one more time"<<endl;
        }
        else
        {
            break;
        }
    }
    cout << "Enter year of edition ->";
    cin>>books_mas[size_b].date_b.year;
    cin.ignore();
    cout << "Enter name of book->";
    cin.getline(books_mas[size_b].name,30);
    cout << "Enter author->";
    cin.getline(books_mas[size_b].author,30);
    cout << "Enter genre ->";
    cin.getline(books_mas[size_b].genre, 15);
    cout << "Enter rating(0 - 5.0) ->";
    for(;;)
    {
        cin >> books_mas[size_b].rating;
        if(books_mas[size_b].rating<0||books_mas[size_b].rating>5)
        {
          cout<<"Wrong data! Enter one more time"<<endl;
        }
        else
        {
            break;
        }
    }
    cout << "Enter price in UAH ->";
    cin>>books_mas[size_b].price;
    cin.ignore();
    books_mas[size_b].availability=-5;  //if -5= book in library
    size_b++;
    cout << endl;

}
void add_reader(Reader*&readers_mas,int &size_r,int &id_r )
{
    if (size_r == 0)
    {
        readers_mas = new Reader[1];
    }
    else
    {
        Reader *tmp = new Reader[size_r + 1];
        for (int i = 0; i < size_r; i++)
        {
            tmp[i] = readers_mas[i];
        }
        delete[]readers_mas;
        readers_mas = tmp;
    }
    readers_mas[size_r].id_r= id_r++;
    cout<<"Enter your name->";
    cin.getline(readers_mas[size_r].name,30);
    cout<<"Enter your surname->";
    cin.getline(readers_mas[size_r].surname,30);
    cout<<"Enter your patronymic->";
    cin.getline(readers_mas[size_r].patronymic,30);
    cout << "Enter day of your birth ->";
    for(;;)
    {
        cin>>readers_mas[size_r].date_r.day;
        if(readers_mas[size_r].date_r.day<=0||readers_mas[size_r].date_r.day>31)
        {
            cout<<"Wrong data! Enter one more time"<<endl;
        }
        else
        {
            break;
        }
    }
    cout << "Enter month of your birth(example: 01 ; 07; 12) ->";
    for(;;)
    {
        cin>>readers_mas[size_r].date_r.month;
        if(readers_mas[size_r].date_r.month<=0||readers_mas[size_r].date_r.month>12)
        {
            cout<<"Wrong data! Enter one more time"<<endl;
        }
        else
        {
            break;
        }
    }
    cout << "Enter year of your birth ->";
    cin>>readers_mas[size_r].date_r.year;
    cin.ignore();
    cout<<"Enter your passport data ->";
    cin.getline(readers_mas[size_r].passport_num,20);
    readers_mas[size_r].books_read=0;
    for (int j = 0; j <10 ; ++j)
    {
        readers_mas[size_r].listofbookonhand[j]=0;
    }
    size_r++;
    cout << endl;

}
void ShowInformationReader(Reader obj, Book* books_mas, int size_b)
{
    bool a=0;   //проверка есть ли вообще книги на руках
    cout<<"Name ->"<<obj.name<<endl;
    cout<<"Surname ->"<<obj.surname<<endl;
    cout<<"Patronymic ->"<<obj.patronymic<<endl;
    cout<<"Passport data ->"<<obj.passport_num<<endl;
    cout<<"Date of birth ->"<<obj.date_r.day<<"."<<obj.date_r.month<<"."<<obj.date_r.year<<endl;
    cout<<"Reader's ID ->"<<obj.id_r<<endl;
    cout<<"Books read ->"<<obj.books_read<<endl;
    for (int i = 0,j=0 ; i <10 ;++i)
    {
        if(obj.listofbookonhand[i]!=0 )
            a=1;

    }
    if(a==0)
    {
        cout<<"No books \"on hand\""<<endl;
    }
    else
    {
        cout<<"Books \" on hand\":"<<endl;
        for (int i = 0, j = 1; i < 10; ++i)
        {
                for (int k = 0; k < size_b; ++k) {
                    if (books_mas[k].id_b ==obj.listofbookonhand[i] )
                    {
                        cout << j << "." << setw(3) << books_mas[k].name << endl;
                        j++;

                    }
                }
        }
    }
    cout<<endl;
}
void ShowInformationBook(Book obj)
{
    cout<<"Book's name ->"<<obj.name<<endl;
    cout<<"Author's name ->"<<obj.author<<endl;
    cout<<"Date of edition ->"<<obj.date_b.day<<"."<<obj.date_b.month<<"."<<obj.date_b.year<<endl;
    cout<<"Genre ->"<<obj.genre<<endl;
    cout<<"Rating(0 - 5.0) ->"<<obj.rating<<endl;
    cout<<"Price ->"<<obj.price<<" UAH"<<endl;
    if(obj.availability==-5)
    {
        cout<<"Available"<<endl;
    }
    else
    {
        cout<<"Not Available"<<endl;
    }
    cout<<"Book's ID ->"<<obj.id_b<<endl;
    cout<<endl;
}
void SearchReader(Reader*readers_mas, int size_r,Book* books_mas, int size_b )
{
    char buf[60];
    int av=0; //проверка существует ли вообще читатель
    int a=0;
    int books_read;
    int id;
    if(size_r==0)
    {
        cout << "There is nothing to find" << endl;
    }
    else
    {
        for (;;)
        {
            cout << "How you want to find reader?(full name, number of read books, ID or passport data)" << endl;
            cin.getline(buf,60);
            if(strstr(buf,"full name")!=NULL)
            {
                cout<<"Enter full name(example: Ivanov Ivan Ivanovich)"<<endl;
                cin.getline(buf,60);
                for (int i = 0; i < size_r; ++i)
                {
                    if (strstr(buf,readers_mas[i].name) != NULL)
                    {
                        if (strstr(buf,readers_mas[i].surname) != NULL)
                        {
                            if (strstr(buf,readers_mas[i].patronymic) != NULL)
                            {
                                ShowInformationReader(readers_mas[i],books_mas,size_b);
                                av=1;
                            }
                        }
                    }
                }
            }
            if(strstr(buf,"number of read books")!=NULL)
            {
                cout<<"Enter number of read books"<<endl;
                cin>>books_read;
                cin.ignore();
                for (int i = 0; i < size_r; ++i)
                {
                    if (books_read==readers_mas[i].books_read)
                    {
                        ShowInformationReader(readers_mas[i],books_mas,size_b);
                        av=1;
                    }
                }
            }
            if(strstr(buf,"ID")!=NULL)
            {
                cout<<"Enter reader's ID"<<endl;
                cin>>id;
                cin.ignore();
                for (int i = 0; i < size_r; ++i)
                {
                    if (id==readers_mas[i].id_r)
                    {
                        ShowInformationReader(readers_mas[i],books_mas,size_b);
                        av=1;
                    }
                }
            }
            if(strstr(buf,"passport data")!=NULL)
            {
                cout<<"Enter passport data"<<endl;
                cin.getline(buf,60);
                for (int i = 0; i < size_r; ++i)
                {
                    if (strstr(buf,readers_mas[i].passport_num) != NULL)
                    {
                        ShowInformationReader(readers_mas[i],books_mas,size_b);
                        av=1;
                    }
                }
            }
             if (av == 0)
             {
                 cout << "There is no result" << endl;
             }
            cout << "Do you find reader you want ?(yes/no)" << endl;
            for (;;) {
                cin.getline(buf, 50);
                if (strstr(buf, "yes") != NULL) {
                    a = 1;
                    break;
                } else {
                    if (strstr(buf, "no") != NULL) {
                        break;
                    } else {

                        cout << "Please, write your answer again" << endl;
                        continue;

                    }
                }

            }
            if (a == 1) {
                a = 0;
                break;
            }
            av=0; //после каждого поиска, в случае если ни одной книги не найдено - поиск запускается заново.
        }
    }
}
void SearchBook(Book*books_mas, int size_b) {
    char buf[50];
    int  rating;
    bool av = 0;    //проверка существует ли вообще книга
    bool a = 0; // найдена ли нужная книга
    if (size_b == 0) {
        cout << "There is nothing to find" << endl;
    } else {
        for (;;) {
            cout << "How you want to find book?(book's name, author, genre or rating)" << endl;
            cin.getline(buf, 50);
            if (strstr(buf, "book's name") != NULL) {
                cout << "Enter book's name " << endl;
                cin.getline(buf, 50);
                for (int i = 0; i < size_b; ++i) {
                    if (strstr(buf, books_mas[i].name) != NULL) {
                        ShowInformationBook(books_mas[i]);
                        av = 1;
                    }
                }
            } else {
                if (strstr(buf, "author") != NULL) {
                    cout << "Enter author's name " << endl;
                    cin.getline(buf, 50);
                    for (int i = 0; i < size_b; ++i) {
                        if (strstr(buf, books_mas[i].author) != NULL) {
                            ShowInformationBook(books_mas[i]);
                            av = 1;
                        }
                    }

                } else {
                    if (strstr(buf, "genre") != NULL) {
                        cout << "Enter book's genre " << endl;
                        cin.getline(buf, 50);
                        for (int i = 0; i < size_b; ++i) {
                            if (strstr(buf, books_mas[i].genre) != NULL) {
                                ShowInformationBook(books_mas[i]);
                                av = 1;
                            }
                        }

                    }
                    else
                    {
                        if(strstr(buf, "rating") != NULL)
                        {
                            cout << "Enter book's rating " << endl;
                            cin>>rating;
                            cin.ignore();
                            for (int i = 0; i < size_b; ++i) {
                                if (rating==books_mas[i].rating) {
                                    ShowInformationBook(books_mas[i]);
                                    av = 1;
                                }
                            }
                        }
                    }
                }
            }
            if (av == 0) {
                cout << "There is no result" << endl;
            }
            cout << "Do you find book you want ?(yes/no)" << endl;
            for (;;) {
                cin.getline(buf, 50);
                if (strstr(buf, "yes") != NULL) {
                    a = 1;
                    break;
                } else {
                    if (strstr(buf, "no") != NULL) {
                        break;
                    } else {

                        cout << "Please, write your answer again" << endl;
                        continue;

                    }
                }

            }
            if (a == 1) {
                a = 0;
                break;
            }
            av=0; //после каждого поиска, в случае если ни одной книги не найдено - поиск запускается заново.
        }
    }
}

void DeleteBook(Book*&books_mas, int &size_b) {
    int id;
    int num = -1;//для запоминания ID
    cout<<"Please, remember book's ID you want delete"<<endl;
    SearchBook(books_mas,size_b);
    if (size_b == 0) {
        cout << "There is nothing to delete" << endl;
    } else {

        cout << "Enter ID of book you want delete" << endl;
        cin >> id;
        for (int i = 0; i < size_b; i++) {
            if (id == books_mas[i].id_b)
                num = i;

        }
        if (num == -1) {
            cout << "Wrong ID" << endl;
        } else {
            Book *tmp = new Book[size_b - 1];
            for (int i = 0, q = 0; i < size_b - 1; q++, i++) {
                if (q != num)
                    tmp[i] = books_mas[q];
                else {
                    q += 1;
                    tmp[i] = books_mas[q];
                }
            }
            delete[]books_mas;
            books_mas = tmp;
            size_b--;
            cout<<"Deleted !"<<endl;
        }

    }
}
void DeleteReader(Reader*&readers_mas, int &size_r, Book*&books_mas, int &size_b) {
    int id;
    int num = -1;//для запоминания ID
    cout<<"Please, remember reader's ID you want delete"<<endl;
    SearchReader(readers_mas,size_r, books_mas,size_b);
    if (size_r == 0) {
        cout << "There is nothing to delete" << endl;
    } else {

        cout << "Enter ID of reader you want delete" << endl;
        cin >> id;
        for (int i = 0; i < size_r; i++) {
            if (id == readers_mas[i].id_r)
                num = i;

        }
        if (num == -1) {
            cout << "Wrong ID" << endl;
        } else {
            Reader *tmp = new Reader[size_r - 1];
            for (int i = 0, q = 0; i < size_r - 1; q++, i++) {
                if (q != num)
                    tmp[i] = readers_mas[q];
                else {
                    q += 1;
                    tmp[i] = readers_mas[q];
                }
            }
            delete[]books_mas;
            readers_mas = tmp;
            size_r--;
            cout<<"Deleted !"<<endl;
        }

    }
}

void BookExtradition(Reader*readers_mas,Book* books_mas, int size_r, int size_b)
{
    int id_b;
    int id_r;
    int a=0;
    if(size_b==0||size_r==0)
    {
        cout<<"There is nothing/no one to extradite"<<endl;
    } else
    {
        cout<<"Please, remember book's ID you want extradite"<<endl;
        SearchBook(books_mas,size_b);
        for(;;)
        {
            cout << "Enter book's ID " << endl;
            cin >> id_b;
            cin.ignore();
            for (int i = 0; i < size_b; ++i) {
                if (books_mas[i].id_b == id_b) {
                    if (books_mas[i].availability!=-5)
                    {
                        cout<<"This book is not available in the library"<<endl;
                        a=2;
                    }
                    else
                    {
                        id_b = i;
                        a = 1;
                    }
                }
            }
            if(a==2)
                break;
            if(a==0)
            {
                cout<<"Wrong ID"<<endl;
                cout<<"Please, remember book's ID you want extradite"<<endl;
                SearchBook(books_mas,size_b);
                continue;
            }
            else
            {
                a=0;
                cout<<"Please, remember reader's ID "<<endl;
                SearchReader(readers_mas,size_r,books_mas,size_b);
                for(;;)
                {
                    cout << "Enter reader's ID " << endl;
                    cin >> id_r;
                    cin.ignore();
                    for (int i = 0; i < size_r; ++i) {
                        if (readers_mas[i].id_r == id_r) {
                            a=2;
                            for(int k=0;k<10;k++) {
                                if (readers_mas[i].listofbookonhand[k] == 0)
                                {
                                    books_mas[id_b].availability = readers_mas[i].id_r;
                                    readers_mas[i].listofbookonhand[k] =books_mas[id_b].id_b;
                                    books_mas[id_b].timeofexceed=time(NULL);
                                    a = 1;
                                    cout<<"Extradit succes"<<endl;
                                    break;
                            }
                            }

                        }
                    }
                    if(a==2)
                    {
                        cout<<"Books limit exceeded"<<endl;
                    }
                    if(a==0)
                    {
                        cout<<"Wrong ID"<<endl;
                        cout<<"Please, remember reader's ID "<<endl;
                        SearchReader(readers_mas,size_r,books_mas,size_b);
                        continue;
                    }
                    else
                    {
                        break;
                    }
                }
                break;
            }

        }




    }
}
void BookReturn(Reader*readers_mas,Book* books_mas, int size_r, int size_b)
{
    int id_b;
    int id_r;
    int a=0;
    int timeinarend;
    int peni=37;
    if(size_b==0||size_r==0)
    {
        cout<<"There is nothing/no one to return"<<endl;
    } else
    {
        cout<<"Please, remember book's ID you want return"<<endl;
        SearchBook(books_mas,size_b);
        for(;;)
        {
            cout << "Enter book's ID " << endl;
            cin >> id_b;
            cin.ignore();
            for (int i = 0; i < size_b; ++i) {
                if (books_mas[i].id_b == id_b) {
                    if (books_mas[i].availability==-5)
                    {
                        cout<<"This book is in the library"<<endl;
                    }
                    else
                    {
                        id_b = i;
                        a = 1;
                    }
                }
            }

            if(a==0)
            {
                cout<<"Wrong ID"<<endl;
                cout<<"Please, remember book's ID you want return"<<endl;
                SearchBook(books_mas,size_b);
                continue;
            }
            else
            {
                a=0;
                cout<<"Please, remember reader's ID "<<endl;
                SearchReader(readers_mas,size_r,books_mas,size_b);
                for(;;)
                {
                    cout << "Enter reader's ID " << endl;
                    cin >> id_r;
                    cin.ignore();
                    for (int i = 0; i < size_r; ++i) {
                        if (readers_mas[i].id_r == id_r) {
                            for(int k=0;k<10;k++) {
                                if (readers_mas[i].listofbookonhand[k] ==books_mas[id_b].id_b )
                                {
                                    books_mas[id_b].availability = -5;
                                    readers_mas[i].listofbookonhand[k] =0;
                                    readers_mas[i].books_read+=1;
                                    books_mas[id_b].timeofreturn=time(NULL);
                                    timeinarend=books_mas[id_b].timeofreturn-books_mas[id_b].timeofexceed;
                                    if(timeinarend>3600)
                                    {
                                        timeinarend-=3600;
                                        peni*=timeinarend/1200;
                                        cout<<"Past due "<<timeinarend/3600<<" hours "<<(timeinarend-((timeinarend/3600)*3600))/60<<" minutes"<<endl;
                                        cout<<"Debt ->"<<peni<<" UAH"<<endl;
                                    }
                                    a = 1;
                                    break;
                                }
                            }

                        }
                    }
                    if(a==0)
                    {
                        cout<<"Wrong ID"<<endl;
                        cout<<"Please, remember reader's ID "<<endl;
                        SearchReader(readers_mas,size_r,books_mas,size_b);
                        continue;
                    }
                    else
                    {
                        break;
                    }
                }
                break;
            }

        }




    }
}
void EditingBook(Book*books_mas, int size_b)
{
    char buf[50];
    int id;
    bool a=0;
    if(size_b==0)
    {
        cout<<"There is nothing to edit"<<endl;
    }
    else
    {
        cout<<"Please, remember book's ID you want edit"<<endl;
        SearchBook(books_mas,size_b);
        for(;;)
        {
            cout << "Enter book's ID " << endl;
            cin >> id;
            cin.ignore();
            for (int i = 0; i < size_b; ++i) {
                if (books_mas[i].id_b == id) {
                    id=i;
                    a=1;

                }
            }
            if(a==0)
            {
                cout<<"Wrong ID"<<endl;
                cout<<"Please, remember book's ID you want edit"<<endl;
                SearchBook(books_mas,size_b);
                continue;
            }
            else
            {
                break;
            }
        }
        for(;;)
        {
        cout<<"How you want edit information about book(full/partially)?"<<endl;

            cin.getline(buf,50);
            if(strstr(buf,"full")!=NULL)
            {
                cout << "Enter day of edition ->";
                for(;;)
                {
                    cin>>books_mas[id].date_b.day;
                    if(books_mas[id].date_b.day<=0||books_mas[id].date_b.day>31)
                    {
                        cout<<"Wrong data! Enter one more time"<<endl;
                    }
                    else
                    {
                        break;
                    }
                }
                cout << "Enter month of edition(example: 01 ; 07; 12) ->";
                for(;;)
                {
                    cin>>books_mas[id].date_b.month;
                    if(books_mas[id].date_b.month<=0||books_mas[id].date_b.month>12)
                    {
                        cout<<"Wrong data! Enter one more time"<<endl;
                    }
                    else
                    {
                        break;
                    }
                }
                cout << "Enter year of edition ->";
                cin>>books_mas[id].date_b.year;
                cin.ignore();
                cout << "Enter name of book->";
                cin.getline(books_mas[id].name,30);
                cout << "Enter author->";
                cin.getline(books_mas[id].author,30);
                cout << "Enter genre ->";
                cin.getline(books_mas[id].genre, 15);
                cout << "Enter rating(0 - 5.0) ->";
                for(;;)
                {
                    cin >> books_mas[id].rating;
                    if(books_mas[id].rating<0||books_mas[id].rating>5)
                    {
                        cout<<"Wrong data! Enter one more time"<<endl;
                    }
                    else
                    {
                        break;
                    }
                }
                cout << "Enter price in UAH ->";
                cin>>books_mas[id].price;
                cin.ignore();
                break;
            }
            else
            {
                if(strstr(buf,"partially")!=NULL)
                {
                    cout << "What you want to edit?(date of edition,book's name, author, genre, rating, price)" << endl;
                    cin.getline(buf, 50);
                    if (strstr(buf, "book's name") != NULL) {
                        cout << "Enter book's name " << endl;
                        cin.getline(books_mas[id].name,30);
                        break;
                    } else {
                        if (strstr(buf, "author") != NULL) {
                            cout << "Enter author's name " << endl;
                            cin.getline(books_mas[id].author,30);
                            break;

                        } else {
                            if (strstr(buf, "genre") != NULL) {
                                cout << "Enter book's genre " << endl;
                                cin.getline(books_mas[id].genre,30);
                                break;
                            }
                            else
                            {
                                if(strstr(buf, "rating") != NULL)
                                {

                                    cout << "Enter rating(0 - 5.0) ->";
                                    for(;;)
                                    {
                                        cin >> books_mas[id].rating;
                                        cin.ignore();
                                        if(books_mas[id].rating<0||books_mas[id].rating>5)
                                        {
                                            cout<<"Wrong data! Enter one more time"<<endl;
                                        }
                                        else
                                        {
                                            break;
                                        }
                                    }
                                    break;
                                } else
                                {
                                    if(strstr(buf,"date of edition")!=NULL)
                                    {
                                        cout << "Enter day of edition ->";
                                        for(;;)
                                        {
                                            cin>>books_mas[id].date_b.day;
                                            if(books_mas[id].date_b.day<=0||books_mas[id].date_b.day>31)
                                            {
                                                cout<<"Wrong data! Enter one more time"<<endl;
                                            }
                                            else
                                            {
                                                break;
                                            }
                                        }
                                        cout << "Enter month of edition(example: 01 ; 07; 12) ->";
                                        for(;;)
                                        {
                                            cin>>books_mas[id].date_b.month;
                                            if(books_mas[id].date_b.month<=0||books_mas[id].date_b.month>12)
                                            {
                                                cout<<"Wrong data! Enter one more time"<<endl;
                                            }
                                            else
                                            {
                                                break;
                                            }
                                        }
                                        cout << "Enter year of edition ->";
                                        cin>>books_mas[id].date_b.year;
                                        cin.ignore();
                                        break;
                                    }
                                    else
                                    {
                                        if(strstr(buf,"price")!=NULL)
                                        {
                                            cout << "Enter price in UAH ->";
                                            cin>>books_mas[id].price;
                                            cin.ignore();
                                            break;
                                        }
                                        else
                                        {
                                            cout << "Wrong data!" << endl;
                                            continue;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                else
                {
                    cout<<"Wrong data!"<<endl;
                    continue;
                }
            }
        }
    }

}
void EditingReader(Reader*readers_mas, int size_r,Book*books_mas, int size_b)
{
    char buf[50];
    int id;
    bool a=0;
    if(size_r==0)
    {
        cout<<"There is nothing to edit"<<endl;
    }
    else
    {
        cout<<"Please, remember reader's ID you want edit"<<endl;
        SearchReader(readers_mas,size_r,books_mas,size_b);
        for(;;)
        {
            cout << "Enter reader's ID " << endl;
            cin >> id;
            cin.ignore();
            for (int i = 0; i < size_r; ++i) {
                if (readers_mas[i].id_r == id) {
                    id=i;
                    a=1;

                }
            }
            if(a==0)
            {
                cout<<"Wrong ID"<<endl;
                cout<<"Please, remember reader's ID you want edit"<<endl;
                SearchReader(readers_mas,size_r,books_mas,size_b);
                continue;
            }
            else
            {
                break;
            }
        }
        for(;;)
        {
            cout<<"How you want edit information about reader(full/partially)?"<<endl;

            cin.getline(buf,50);
            if(strstr(buf,"full")!=NULL)
            {
                cout<<"Enter your name->";
                cin.getline(readers_mas[id].name,30);
                cout<<"Enter your surname->";
                cin.getline(readers_mas[id].surname,30);
                cout<<"Enter your patronymic->";
                cin.getline(readers_mas[id].patronymic,30);
                cout << "Enter day of your birth ->";
                for(;;)
                {
                    cin>>readers_mas[id].date_r.day;
                    if(readers_mas[id].date_r.day<=0||readers_mas[id].date_r.day>31)
                    {
                        cout<<"Wrong data! Enter one more time"<<endl;
                    }
                    else
                    {
                        break;
                    }
                }
                cout << "Enter month of your birth(example: 01 ; 07; 12) ->";
                for(;;)
                {
                    cin>>readers_mas[id].date_r.month;
                    if(readers_mas[id].date_r.month<=0||readers_mas[id].date_r.month>12)
                    {
                        cout<<"Wrong data! Enter one more time"<<endl;
                    }
                    else
                    {
                        break;
                    }
                }
                cout << "Enter year of your birth ->";
                cin>>readers_mas[id].date_r.year;
                cin.ignore();
                cout<<"Enter your passport data ->";
                cin.getline(readers_mas[id].passport_num,20);
                break;
            }
            else
            {
                if(strstr(buf,"partially")!=NULL)
                {
                    cout << "What you want to edit?(date of birth,reader's name, passport data)" << endl;
                    cin.getline(buf, 50);
                    if (strstr(buf, "reader's name") != NULL) {
                        cout << "Enter reader's name " << endl;
                        cin.getline(readers_mas[id].name,30);
                        cout << "Enter reader's surname " << endl;
                        cin.getline(readers_mas[id].surname,30);
                        cout << "Enter reader's name " << endl;
                        cin.getline(readers_mas[id].patronymic,30);
                        break;
                    } else
                    {
                        if (strstr(buf, "passport data") != NULL)
                        {
                            cout << "Enter reader's passport data " << endl;
                            cin.getline(readers_mas[id].passport_num, 30);
                            break;
                        }
                         else
                        {
                            if(strstr(buf,"date of birth")!=NULL)
                            {
                                cout << "Enter day of your birth ->";
                                for(;;)
                                {
                                    cin>>readers_mas[id].date_r.day;
                                    if(readers_mas[id].date_r.day<=0||readers_mas[id].date_r.day>31)
                                    {
                                        cout<<"Wrong data! Enter one more time"<<endl;
                                    }
                                    else
                                    {
                                        break;
                                    }
                                }
                                cout << "Enter month of your birth(example: 01 ; 07; 12) ->";
                                for(;;)
                                {
                                    cin>>readers_mas[id].date_r.month;
                                    if(readers_mas[id].date_r.month<=0||readers_mas[id].date_r.month>12)
                                    {
                                        cout<<"Wrong data! Enter one more time"<<endl;
                                    }
                                    else
                                    {
                                        break;
                                    }
                                }
                                cout << "Enter year of your birth ->";
                                cin>>readers_mas[id].date_r.year;
                                cin.ignore();
                                break;
                            }

                        }
                    }
                }
                else
                {
                    cout<<"Wrong data!"<<endl;
                    continue;
                }
            }
        }
    }

}
int main()
{
    char buf[50];
    int size_b = 0, size_r=0, id_b = 1, id_r=1;
    Book* books_mas = nullptr;
    Reader* readers_mas = nullptr;
    for (int i = 0; i <10 ; ++i) {
        generate_readers(readers_mas,size_r,id_r );
    }
    for(int i=0;i<20;i++)
    {
        generate_books(books_mas,size_b,id_b);
    }
    for(;;)
    {
     cout<<"What you want to do?"<<endl;
        cout<<"1. add reader"<<endl;
        cout<<"2. add book"<<endl;
        cout<<"3. edit reader"<<endl;
        cout<<"4. edit book"<<endl;
        cout<<"5. delete reader"<<endl;
        cout<<"6. delete book"<<endl;
        cout<<"7. search reader"<<endl;
        cout<<"8. search book"<<endl;
        cout<<"9. show all readers"<<endl;
        cout<<"10. show all books"<<endl;
        cout<<"11. extradit book"<<endl;
        cout<<"12. return book"<<endl;
      cout<<"13. exit"<<endl;
        cout<<"-> ";
        cin.getline(buf,50);
        if(strstr(buf,"add book")!=NULL)
        {
            add_book(books_mas,size_b, id_b ) ;
        }
        if(strstr(buf,"add reader")!=NULL)
        {
            add_reader(readers_mas,size_r,id_r ) ;
        }
        if(strstr(buf,"edit book")!=NULL)
        {
            EditingBook(books_mas, size_b) ;
        }
        if(strstr(buf,"edit reader")!=NULL)
        {
            EditingReader(readers_mas, size_r,books_mas, size_b) ;
        }
        if(strstr(buf,"delete book")!=NULL)
        {
            DeleteBook(books_mas, size_b);
        }
        if(strstr(buf,"delete reader")!=NULL)
        {
            DeleteReader(readers_mas, size_r, books_mas, size_b) ;
        }
        if(strstr(buf,"search book")!=NULL)
        {
            SearchBook(books_mas,  size_b) ;
        }
        if(strstr(buf,"search reader")!=NULL)
        {
            SearchReader(readers_mas,size_r, books_mas, size_b ) ;
        }
        if(strstr(buf,"show all books")!=NULL)
        {
            for(int i=0; i<size_b; i++)
            {
                ShowInformationBook(books_mas[i]);
            }
        }
        if(strstr(buf,"show all readers")!=NULL)
        {
            for(int i=0; i<size_r; i++)
            {
                ShowInformationReader(readers_mas[i], books_mas, size_b);
            }
        }
        if(strstr(buf,"extradit book")!=NULL)
        {
            BookExtradition(readers_mas, books_mas, size_r, size_b);
        }
        if(strstr(buf,"return book")!=NULL)
        {
            BookReturn(readers_mas, books_mas, size_r, size_b);
        }
        if(strstr(buf,"exit")!=NULL)
        {
            break;
        }
    }
   delete []books_mas;
   delete []readers_mas;

}

