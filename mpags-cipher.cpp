#include <iostream>
#include <string>


int main()
{
  /*
    const double mydouble{5.4};
    std::cout << mydouble << std::endl;

    int myint{3};
    myint = 1;

    std::string mystr{"hey"};
    std::cout << mystr << std::endl;

    double d1{0.5};
    int int1{4};
    std::cout << d1*int1 << std::endl;

    std::cout << d1/int1 << std::endl;
    std::cout << int1/int1 << std::endl;

    std::string str1{"stringy"};
    char char1{str1[4]};

    std::cout << char1 << std::endl;

  */

    // Ex 5

    std::string userInput;
    std::cout << "Please type a string.            " << std::endl;

    char in_char{'x'};
    while(std::cin >> in_char)
    {
        if(isdigit(in_char))
        {
            switch (in_char)
            {
                case "0":
                    in_char << "zero";
                    break;
                case "1":
                    in_char << "one";
                    break;
                case "2":
                    in_char << "two";
                    break;
                case "3":
                    in_char << "three";
                    break;
                case "4":
                    in_char << "four";
                    break;
                case "5":
                    in_char << "five";
                    break;
                case "6":
                    in_char << "six";
                    break;
                case "7":
                    in_char << "seven";
                    break;
                case "8":
                    in_char << "eight";
                    break;
                case "9":
                    in_char << "nine";
                    break;
            }

        }

        userInput += toupper(in_char)

    }


    for (int i{0}; i < userInput.length(); i ++)
    {
        userInput[i] = toupper(userInput[i]);
    }

    std::cout << userInput << std::endl;

}
