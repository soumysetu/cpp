#include <iostream>
using namespace std;
class nitte{
    private:
        string dept;
        string nameHod;
    public:
        void setDeptName(){
            cout<<"enter the dept name\n";
            cin>>dept;
        }
        void getHodname(){
            cout<<"enter the hod name\n";
            cin>>nameHod;
        }
        void dispname(){
            cout<<nameHod<<" is the hod of "<<dept<<endl;
        }
};
int main(){
    nitte d1,d2;
    d1.setDeptName();
    d1.getHodname();
    d2.setDeptName();
    d2.getHodname();
    d1.dispname();
    d2.dispname();
return 0;
}