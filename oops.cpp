#include <iostream>
using namespace std;
class cpp{
    private:
        string name;
    public:
        void getName();
        void dispname();
};
void cpp::getName(){
    cout << "enter name :- ";
    cin >> name;
}
void cpp::dispname(){
    cout << "name :- "<<name<<endl;
    
}
int main(){
    cpp student1,student2;
    student1.getName();
    student2.getName();
    student1.dispname();
    student2.dispname();
}