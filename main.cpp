#include <iostream>
#include <string>
#include <vector>
#include <utility>

using namespace std;

std::string rep(string napis)
{
   std::vector<std::string> tr1{
      "??=" , "??/" , "??'" , "??(" , "??)" , "??!" , "??<" , "??>", "??-" };

   const std::vector<const char* > tr2{
       "#"  ,  "\\" ,  "^"  ,  "["  ,  "]"  ,  "|"  ,  "{"  ,  "}" ,  "~"  };

   std::vector<const char* >::const_iterator ite2 = tr2.begin();

   for(std::vector<string>::const_iterator ite = tr1.begin() ; ite != tr1.end(); ++ite, ++ite2)
   {
        while (napis.find(*ite) != std::string::npos)
        {
           napis.replace(napis.find(*ite), 3 , *ite2);
        }
   }
   return napis;
}

int main()
{
    std::string napis;
    while(getline (std::cin,napis))
    {
        std::cout<< rep(napis) << endl;
    }
    return 0 ;
}

