#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h> // used for 'exit' function

int main(int argc, char* argv[]) // argc - number of arguments, argv - array of command line argument strings
{

  // Ex 1

  // This is a comment
  /* This is a
  Multiline comment */

  std::cout << "Hello World!\n" << std::endl;

  // Ex 2

  // create, modify, output int
  int myint{3};
  myint = 1;
  std::cout << myint << std::endl;

  // create double and output
  double mydouble{5.4};
  std::cout << mydouble << std::endl;

  int newint{mydouble};//initialise another int from mydouble
  std::cout << newint << std::endl; // print newint

  //Ex 3
  // create const double and output it
  const double constdouble{2.4};
  std::cout << constdouble << std::endl;

  // attempt to compile const int
  /*
  const int anotherint{5};
  anotherint = 3;
  */

  // create, initialise, output string variable
  std::string mystr{"hey"};
  std::cout << mystr << std::endl;

  //Ex 4
  //create double and int variables
  double d1{0.5};
  int int1{4};
  std::cout << d1*int1 << std::endl; // output product

  // apply division operations
  std::cout << d1/int1 << std::endl;
  std::cout << int1/int1 << std::endl;

  // create char, assign it a value of one letter in a string
  std::string str1{"stringy"};
  char char1{str1[4]};

  std::cout << char1 << std::endl; // output this

  ///////////////////////
  //////// Ex 6  ////////
  ///////////////////////
  const std::vector<std::string> cmdLineArgs {argv, argv+argc}; // store cmd line args

  // print elements of cmdLineArgs
  std::cout << "Printing command line arguments...." << std::endl;
  for (size_t i{0}; i < cmdLineArgs.size(); i++)
  {
      std::cout << cmdLineArgs[i] << std::endl;
  }
  std::cout << "Done printing." << std::endl;

  for (size_t i{0}; i < cmdLineArgs.size(); i++)
  {

    ///////////////////////
    //////// Ex 7  ////////
    ///////////////////////
      if(cmdLineArgs[i] == "--help" || cmdLineArgs[i] == "-h")
      {
        std::cout << "******* \nHere is some help... \n more help \n even more help \n final bit of help \n*******" << std::endl;
      }

      ///////////////////////
      //////// Ex 8  ////////
      ///////////////////////
      if(cmdLineArgs[i] == "--version") //version
      {
        std::string version_str{"C++11"};
        std::cout << "Current version: " + version_str << std::endl;
      }

      if(cmdLineArgs[i] == "-i") //input file name
      {
        std::string input_str;
        input_str.assign(cmdLineArgs[i+1]); // element after "-i" is input file name
        std::cout << "Input file name: " + input_str << std::endl;

        // check if .txt extension is part of input file name
        if(cmdLineArgs[i+1].find(".txt") == std::string::npos)
        {
          // string.find(substring) - returns index of first occurance of substring in string
          // npos is the max index for string - if find() doesn't find anything, it will equal npos
          std::cout << "You forgot to add a .txt extension to your input file name." << std::endl;
          std::cout << "Exiting...." << std::endl;
          exit(EXIT_FAILURE);
        }
       }

      if(cmdLineArgs[i] == "-o") //output file name
      {
        std::string output_str;

        output_str.assign(cmdLineArgs[i+1]); // element after "-o" is output file name

        // check if .txt extension is part of output file name
        if(cmdLineArgs[i+1].find(".txt") == std::string::npos)
        {
          // string.find(substring) - returns index of first occurance of substring in string
          // npos is the max index for string - if find() doesn't find anything, it will equal npos
          std::cout << "You forgot to add a .txt extension to your output file name." << std::endl;
          std::cout << "Exiting...." << std::endl;
          exit(EXIT_FAILURE);
        }

        std::cout << "Output file name: " + output_str << std::endl;
      }
    }
    ///////////////////////
    //////// Ex 5  ////////
    ///////////////////////

    std::string userInput; // stores input string
    std::cout << "Please type a string (then press enter, then CTRL+D).            " << std::endl;


    std::string in_str;
    char in_char{'x'};
    while(std::cin >> in_char) // 'loop' through characters in inputted string
    {
        // change digits to words
        if (isdigit(in_char)) // check if char is a number
        {
            switch (in_char) // swtich number to word
            {
                case '0':
                    in_str.assign("ZERO");
                    break;
                case '1':
                    in_str.assign("ONE");
                    break;
                case '2':
                    in_str.assign("TWO");
                    break;
                case '3':
                    in_str.assign("THREE");
                    break;
                case '4':
                    in_str.assign("FOUR");
                    break;
                case '5':
                    in_str.assign("FIVE");
                    break;
                case '6':
                    in_str.assign("SIX");
                    break;
                case '7':
                    in_str.assign("SEVEN");
                    break;
                case '8':
                    in_str.assign("EIGHT");
                    break;
                case '9':
                    in_str.assign("NINE");
                    break;
            }

          userInput += in_str; // append in_str to userInput
        }
        else if (isalpha(in_char))// letter
        {
          userInput += toupper(in_char);// append in_char to userInput
        }
        else // not alpha numeric - ignore (don't append to userInput)
        {
        }


    }

    std::cout << "Final Result: " + userInput << std::endl; //print final result


}
