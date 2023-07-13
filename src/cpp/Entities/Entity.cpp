#include "../../header/Entities/Entity.h"

#include <iostream>

namespace ps { // beginning of ps

void Entity::ToString()
{
  std::cout << "Position = " << position.ToString() << std::endl;
  std::cout << "ID = " << id << std::endl;
  std::cout << "Active = " << isActive << "\n\n";
}

} // end of ps
