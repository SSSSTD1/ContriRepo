/*#include <iostream>
#include <string>

using namespace std;

template <typename T>
T data_sum(T operand1, T operand2){
    return operand1 + operand2;
}

int main(){
    int data1 = 3, data2 = 5;
    double data3 = 4.5, data4 = 8.9;
    string data5 = "Hello, ", data6 = "World!";

    cout << "integer data sum : " << data_sum(data1,data2) << endl;
    cout << "double data sum : " << data_sum(data3,data4) << endl;
    cout << "string data sum : " << data_sum(data5,data6) << endl;
    return 0;
}*/

#include <iostream>
#include <string>

using namespace std;

template <typename Type1, typename Type2>
class data_package{
public:
    data_package(Type1 first, Type2 second) : first(first),second(second){}
    void print_out_element(){
        cout << "first element : " << first << ", second element : " << second << endl;
    }
private:
    Type1 first;
    Type2 second;
};

int main(){
    data_package<int,double> template_inst1(5,10.5);
    data_package<string, int> template_inst2("string", 10);

    template_inst1.print_out_element();
    template_inst2.print_out_element();
    return 0;
}