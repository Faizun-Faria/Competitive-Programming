/*
Take some books name and number of pages, sort and print them by page descending order. If page number is the same, then by name ascending lexicographically.
*/



#include <bits/stdc++.h>
using namespace std;

struct Book {
   string name;
   int page;

   Book(string name, int page) {
       this->name = name;
       this->page = page;
   }

   // bool operator < (const Book& b) {
   //     if (page == b.page) return name < b.name;
   //     else return page > b.page;
   // }
};

bool cmp(Book b1, Book b2) {
   if (b1.page == b2.page) return b1.name < b2.name;
   else return b1.page > b2.page;
}

int main(){
   //freopen("in.txt","r", stdin);
   int ins;
   cin >> ins;

   int page;
   string name;

   vector <Book> booklist;

   for (int i = 0; i < ins; i++){
       cin>>name>>page;
       booklist.push_back(Book(name, page));
   }
   sort(booklist.begin(), booklist.end(), cmp);

   for (int i = 0; i < ins; i++){
       cout<<booklist[i].name<<" "<<booklist[i].page<<"\n";
   }
}
