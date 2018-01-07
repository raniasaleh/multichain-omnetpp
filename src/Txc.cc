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
#include "/home/ran/git/multichain/src/multichain/multichainutillib.h"
#include "/home/ran/git/multichain/src/multichain/multichaindlib.h"
#include <string>


//#include "multichainlib.h"
//#include "util.h"
namespace test1 {

Define_Module(Txc);

void Txc::initialize()
{
    if (par("sendInitialMessage").boolValue())
    {

        char* chainname;
        char* datadir;
        char* port;
        char* rpcport;
        char* daemon;
        daemon="";
        datadir="-datadir=~/.multichain1";
        port= " -port=10255 ";
       rpcport="";
       chainname ="chain41@192.168.197.128:2901";
     //  chainname ="chain41";

        //1. create a chain
        multichainutillib s2 ;
      //   int x= s2.create(chainname);
        //2. generate blockchain
        multichaindlib s1 ;
      //  int x= s1.generateBlockchain(chainname);

        // 3. connect to multichain in another node
        int x= s1.generateBlockchain(chainname, datadir, port, rpcport, daemon);
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
