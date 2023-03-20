#include<iostream>
#include<cmath>

using namespace std;

class Circle{
public:
    int radius;
    string color;

    Circle(){
        cout << "Creat an object \'circle\'\n";
    }
    Circle(int valueRadius, string valueColor){
        radius = valueRadius;
        color = valueColor;
    }

    void S(){
        int s = 3.14 * pow(radius, 2);
        cout << "Area of a circle = " << s << endl;
    }
    void C(){
        int c = 2 * 3.14 * radius;
    }
    void SetCircleInfo(){
        cout << "Input circle radius: ";
        cin >> radius; 
        cout << "Input cirlce color: ";
        cin >> color;
    }
    void ShowInfo(){
        cout << "Radius: " << radius << endl;
        cout << "Color: " << color << endl;
    }
};

int main(){
    
    Circle cir(10, "red");
    cir.SetCircleInfo();
    cir.S();
    cir.C();
    cir.ShowInfo();
    return 0;
}