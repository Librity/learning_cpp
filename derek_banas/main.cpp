/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: lgeniole
 *
 * Created on July 30, 2019, 9:11 PM
 * 
 * $ make main.o
 */

#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <limits>

int g_iRandNum = 0; //g=global,i=interger
const double g_dbPI = 3.141592; //db=double

/*
 * 
 */
int main(int argc, char** argv) {
    std::cout << "Hello World!!!" << std::endl;

    bool bMarried = true;
    char chMyGrade = 'A';
    unsigned int u16Age = 43;
    short int siWeight = 180;
    int nDays = 7;
    long lBigNum = 1100000;
    float fPI = 3.141592;
    double dbBigFloat = 1.111111111111;
    long double ldPI = 3.141592;
    auto whatWillIBe = true;

    std::cout << "Min bool " <<
            std::numeric_limits<bool>::min() << std::endl;
    std::cout << "Max bool " <<
            std::numeric_limits<bool>::max() << std::endl;


    std::cout << "Min float " <<
            std::numeric_limits<float>::min() << std::endl;
    std::cout << "Max float " <<
            std::numeric_limits<float>::max() << std::endl;

    std::cout << "Min double " <<
            std::numeric_limits<double>::min() << std::endl;
    std::cout << "Max double " <<
            std::numeric_limits<double>::max() << std::endl;

    std::cout << "Min int " <<
            std::numeric_limits<int>::min() << std::endl;
    std::cout << "Max int " <<
            std::numeric_limits<int>::max() << std::endl;

    std::cout << "Min long unsigned int " <<
            std::numeric_limits<long unsigned int>::min() << std::endl;
    std::cout << "Max long unsigned int " <<
            std::numeric_limits<long unsigned int>::max() << std::endl;

    std::cout << "Min short unsigned int " <<
            std::numeric_limits<short unsigned int>::min() << std::endl;
    std::cout << "Max short unsigned int " <<
            std::numeric_limits<short unsigned int>::max() << std::endl;

    std::cout << "Min long double " <<
            std::numeric_limits<long double>::min() << std::endl;
    std::cout << "Max long double " <<
            std::numeric_limits<long double>::max() << std::endl;

    std::cout << "Min char " <<
            std::numeric_limits<char>::min() << std::endl;
    std::cout << "Max char " <<
            std::numeric_limits<char>::max() << std::endl;

    std::cout << "Min wchar_t " <<
            std::numeric_limits<wchar_t>::min() << std::endl;
    std::cout << "Max wchar_t " <<
            std::numeric_limits<wchar_t>::max() << std::endl;

    std::cout << "Min short " <<
            std::numeric_limits<short>::min() << std::endl;
    std::cout << "Max short " <<
            std::numeric_limits<short>::max() << std::endl;


    std::cout << "int size " << sizeof (int) << std::endl;
    std::cout << "long int size " << sizeof (long int) << std::endl;
    std::cout << "float size " << sizeof (float) << std::endl;
    std::cout << "double size " << sizeof (double) << std::endl;
    std::cout << "long double size " << sizeof (long double) << std::endl;
    std::cout << "bool size " << sizeof (bool) << std::endl;
    std::cout << "char size " << sizeof (char) << std::endl;
    std::cout << "wchar_t size " << sizeof (wchar_t) << std::endl;
    std::cout << "short size " << sizeof (short) << std::endl;


    float fBigFloat = 1.1111111111;
    float fBigFloat2 = 1.1111111111;
    float fFloatSum = fBigFloat + fBigFloat2;

    printf("fFloatSum Precision :  %.10f\n", fFloatSum);
    //fFloatSum Precision :  2.2222223282   --> 6 places of precision;

    dbBigFloat = 1.11111111111111111111;
    double dbBigFloat2 = 1.11111111111111111111;
    double dbDoubleSum = dbBigFloat + dbBigFloat2;

    printf("dbDoubleSum Precision :  %.20f\n", dbDoubleSum);
    //fFloatSum Precision :  2.22222222222222232091   --> 12+ places of precision;

    long double ldLongDouble = 1.1111111111111111111111111111111;
    long double ldLongDouble2 = 1.1111111111111111111111111111111;
    long double ldLongDoubleSum = ldLongDouble + ldLongDouble2;

    //printf("ldLongDoubleSum Precision :  %.30f\n", ldLongDoubleSum);
    //0.000000000000000000000000000000, long double not working with printf;
    std::cout.precision(30);
    std::cout << "ldLongDoubleSum Precision : " << ldLongDoubleSum << "\n";
    //fFloatSum Precision :  2.22222222222222232090871330001   --> 12+ places of precision;

    if (argc != 1) {
        std::cout << "You entered " << argc << " arguments\n";

    }
    for (int i = 0; i < argc; i++) {
        std::cout << argv[i] << "\n";
    }


    //Loop:
    //  system("./a.out")
    //build in terminal & pass arguments array argv:
    //  system("cd /home/lgeniole/NetBeansProjects/CppDerekBanasTutorial")
    //  system("g++ main.cpp")
    //  system("./a.out I Love Torah")
    //  output:
    //      ./a.out     //this argument always exists/gets passed to main --> argc >=1
    //      I
    //      Love
    //      Torah    //    system("") execute OS's terminal commands
    //    system("pause");
    //    system("ls");
    //    system("printenv");
    std::cout << "Press enter to continue ...";
    std::cin.get();
    return 0;
}

