/**********************************************************************
  printCrystalInfo.cpp - contains main file for obtaining
                         and printing the crystal info

  Copyright (C) 2015 - 2016 by Patrick S. Avery

  This source code is released under the New BSD License, (the "License").

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.

 ***********************************************************************/

#include <iostream>

#include "crystal.h"

using namespace std;

int main(int argc, char* argv[])
{
  if (argc != 2) {
    cout << "Usage: ./printCrystalInfo <POSCARFileName>\n";
    return -1;
  }

  Crystal c(argv[1]);
  c.printCrystalInfo();
}
