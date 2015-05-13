/*    This file is part of FSM_framework
      The aim of this software is to provided generic facilities for FSM analyzis
      Copyright (C) 2013  Julien Thevenon ( julien_thevenon at yahoo.fr )

      This program is free software: you can redistribute it and/or modify
      it under the terms of the GNU General Public License as published by
      the Free Software Foundation, either version 3 of the License, or
      (at your option) any later version.

      This program is distributed in the hope that it will be useful,
      but WITHOUT ANY WARRANTY; without even the implied warranty of
      MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
      GNU General Public License for more details.

      You should have received a copy of the GNU General Public License
      along with this program.  If not, see <http://www.gnu.org/licenses/>
*/
#ifndef ALGORITHM_BASIC
#define ALGORITHM_BASIC

#include "framework_algorithm_if.h"

namespace FSM_framework
{
  class algorithm_basic: public framework_algorithm_if
  {
  public:
    // Methods inherited from interface
    void run(void);
    const std::string & get_string(void)const;
	
    static void register_algorithm(std::map<std::string,FSM_framework_algorithm_creator_t > & p_factory);
    static const std::string m_class_name;
  };

  framework_algorithm_if & create_algorithm_basic(void);
}
#endif // ALGORITHM_BASIC 
//EOF
