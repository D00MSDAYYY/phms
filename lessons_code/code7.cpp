#include <iostream>

#include <algorithm>
#include <array>
// template <typename TYPE>
// class Size {
// private:
//     TYPE _x;
//     TYPE _y;
//     TYPE _z;

// public:
//     Size(TYPE x, TYPE y, TYPE z)
//         : _x { x }
//         , _y { y }
//         , _z { z }
//     {
//     }
//     bool operator>(Size another)
//     {
//         if (_x > another._x)
//             return true;
//         else
//             return false;
//     }
//     TYPE getX()
//     {
//         return _x;
//     }
// };

// int main()
// {
//     Size a { 1, 2, 3 };
//     Size b { 4, 5, 6 };

//     bool c = a > b;
// }

// bool compare(Size a, Size b)
// {
//     return (a > b) ? true : false;
// }

// bool compare(int a, int b)
// {
//     return (a > b) ? true : false;
// }

// bool compare(double a, double b)
// {
//     return (a > b) ? true : false;
// }

// template <typename MyType>
// bool compare(MyType a, MyType b)
// {
//     return (a > b) ? true : false;
// }

// template <typename TYPE>
// class MyContainer {
// private:
//     TYPE _x[10];

// public:
//     MyContainer(TYPE x[10])
//         : _x(x)
//     {
//     }

//     TYPE operator[](int index)
//     {
//         return _x[index];
//     }
// };

int main()
{
    // int a { 5 };
    // int b { 7 };
    // std::cout << compare(a, b);

    // double x { 2.4 };
    // double y { 0.5 };
    // std::cout << compare<double>(x, y);

    // Size<int> v { 10, 2, 4 };
    // Size<int> w { 9, 20, 4 };
    // std::cout << compare<Size<int>>(v, w);

    // Size<float> v2 { 3.5, 5.6, 7.8 };
    // std::cout << v2.getX();

    //! создать шаблон класса MyContainer,
    //! хранящий в себе 10 элементов произвольного типа
    //! и позволяющий получить к ним доступ с помощью operator[](int index)
    // template <typename TYPE, int N>
    // class MyContainer ......

    // MyContainer<int, 20>

    //     int a[10]
    //     = {
    //           1, 2, 3, 4, 5, 6, 7, 8, 9, 10
    //       };
    // MyContainer<int> obj { a };
    // std::cout << obj[10];

    std::array<int, 20> arr = {10,22,34,56,1,2,3,4,5,6,7};
    std::cout << std::boolalpha << arr.empty() << std::endl;

    std::sort(arr.begin(), arr.end());

    for (int i { 0 }; i < arr.size(); ++i)
    {
        std::cout << arr[i] << " ";
    }
}
