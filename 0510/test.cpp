#include <iostream>
#include <stdio.h>
using namespace std;

class People{
    public:
    	People(char *name,int age);
    	People(void);
		~People();

        void show(void);
    protected:
        char *m_name;
        int  m_age;
    protected:
    	char m_type;
};

People::People(char *name,int age):m_name(name),m_age(age){

	cout<<"m_name:"<<m_name<<endl;
    cout<<"m_age:"<<m_age<<endl;
}

People::People(void){
    cout<<"class people"<<endl;
}


People::~People(void){
	cout<<"class~ People"<<endl;

}

void People::show(void){
    cout<<"show.m_name:"<<m_name<<endl;
    cout<<"show.m_age:"<<m_age<<endl;
}


class student:public People{
public:
	student();
	~student();
	void show(void);
private:
	int chengji;
	int Class;

	
};
student::student(){
    cout<<"class student"<<endl;
}
student::~student(){
    cout<<"class ~student"<<endl;
}


void student::show(void){

	cout<<"student show"<<endl;
}

void test(int num)
{
    num = 10;
    cout<<num<<endl;;

}


int main(void)
{

    // People pro((char *)"tao",20);
    // // People pro1;
    // pro.show();

    student stu;
    stu.show();

    int num1 =20;
    cout<<num1<<endl;
    test(num1);
    cout<<num1<<endl;

  

}














// #include<iostream>
// using namespace std;
// //基类People
// class People {
// public:
//     void setname(char *name);
//     void setage(int age);
//     void sethobby(char *hobby);
//     char *gethobby();
// protected:
//     char *m_name;
//     int m_age;
// private:
//     char *m_hobby;
// };
// void People::setname(char *name) {
//     m_name = name;
// }
// void People::setage(int age) {
//     m_age = age;
// }
// void People::sethobby(char *hobby) {
//     m_hobby = hobby;
// }
// char *People::gethobby() {
//     return m_hobby;
// }
// //派生类Student
// class Student: public People {
// public:
//     void setscore(float score);
// protected:
//     float m_score;
// };
// void Student::setscore(float score) {
//     m_score = score;
// }
// //派生类Pupil
// class Pupil: public Student {
// public:
//     void setranking(int ranking);
//     void display();
// private:
//     int m_ranking;
// };
// void Pupil::setranking(int ranking) {
//     m_ranking = ranking;
// }
// void Pupil::display() {
//     cout<<m_name<<"的年龄是"<<m_age<<"，考试成绩为"<<m_score<<"分，班级排名第"<<m_ranking<<"，TA喜欢"<<gethobby()<<"。"<<endl;
// }
// int main() {
//     Pupil pup;
//     pup.setname("小明");
//     pup.setage(15);
//     pup.setscore(92.5f);
//     pup.setranking(4);
//     pup.sethobby("乒乓球");
//     pup.display();
//     return 0;
// }