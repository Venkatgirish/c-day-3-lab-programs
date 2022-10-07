#include<iostream>
using namespace std;
class student
{
 protected:
 int rollnumber;
 public:
  void getdata(int);
     void put_number(void);     
};
void student :: getdata(int a)
{
 rollnumber=a;
}
void student :: put_number()
{
 cout<<"roll number is"<<rollnumber<<"\n";
}
class test : public student
{
 protected:
 float sub1;
 float sub2;
 public:
  void get_marks(float x,float y);
  void put_marks(void);
};
void test :: get_marks(float x,float y)
{
 sub1=x;
 sub2=y;
}
void test :: put_marks()
{
 cout<<"\nmarks in sub1"<<sub1<<"\n";
 cout<<"\nmarks in sub2"<<sub2<<"\n";
}
class result : public test
{
 private:
 float total;
 public:
 void display(void);
};
void result :: display(void)
{
 total=sub1+sub2;
 put_number();
 put_marks();
 cout<<"\n total="<<total<<"\n";
}
int main()
{
 result student1;
 student1.getdata(111);
 student1.get_marks(75.0,59.5);
 student1.display();
 return 0;

}
