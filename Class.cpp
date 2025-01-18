#include <iostream>
using namespace std;

class Cube {

    // write your code here......
    private:
        int length;
        int width;
        int height;
    public:
    //构造方法 
    Cube() = default;
    /*
    是一种简洁的方式来告诉编译器生成一个默认的构造函数。它的作用与显式定义一个空的构造函数 Cube() {} 类似，但更为简洁和直接。
    */
        /*
    1.这个默认构造函数会初始化对象的成员变量，但不会执行任何其他操作
    2.不加Cube() {}的话会默认添加（无参）构造函数
    3.如果不初始化定义的变量便会产生警告
        */
        void setLength(int len){
            length = len;
        }
            
        void setWidth(int wid){
            width = wid;
        }

        void setHeight(int hei){
           height = hei;
        }
        int getLength(){
            return length;
        }

        int getWidth(){
            return width;
        }

        int getHeight(){
            return height;
        }
       
       int getArea(){
        return 2 * ( length * width + length * height + width * height );
       }

       int getVolume(){
            return length * width * height;
       }
    

};

int main() {

    int length, width, height;
    cin >> length;
    cin >> width;
    cin >> height;

    Cube c;
    c.setLength(length);
    c.setWidth(width);
    c.setHeight(height);

    cout << c.getLength() << " "
        << c.getWidth() << " "
        << c.getHeight() << " "
        << c.getArea() << " "
        << c.getVolume() << endl;

    return 0;
}
