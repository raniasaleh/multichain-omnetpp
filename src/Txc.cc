//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
// 
// You should have received a copy of the GNU Lesser General Public License
// along with this program.  If not, see http://www.gnu.org/licenses/.
// 

#include "Txc.h"
#include "/home/ran/git/multichain/src/multichain/multichainlib.h"
#include <string>


//#include "multichainlib.h"
//#include "util.h"
namespace test1 {

Define_Module(Txc);

void Txc::initialize()
{
    if (par("sendInitialMessage").boolValue())
    {
        multichainlib s1 ;
        char* chainname;
        chainname ="chain5";
       // s1.connect1();
      int x= s1.connect(chainname);
       std::cout << "Test1..." ;
       std::cout<<  std::to_string(x);
        //Student s("Joe");
        cMessage *msg = new cMessage("tictocMsg");
        //test1
        //  int y=Num::getNum();

      //  multichainlib::connect();

         std::string s ("ran");
        send(msg, "out");
    }
}

void Txc::handleMessage(cMessage *msg)
{
    // just send back the message we received
    send(msg, "out");
}

}; // namespace
