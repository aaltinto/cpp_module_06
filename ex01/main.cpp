#include "Serializer.hpp"
#include <iostream>

int main()
{
    Data node1;
    Data node2;

    node1.age = 35;
    node1.name = "Samurai Jack";

    node2.age = 61;
    node2.name = "Jhonny Depp";
    node2.next = NULL;

    node1.next = &node2;

    Data *temp = &node1;
    int i = 1;
    while (temp)
    {
        std::cout << "node" << i << ": " << std::endl;
        std::cout << "name: "  << temp->name << std::endl;
        std::cout << "age: "  << temp->age << std::endl << std::endl;
        temp = temp->next;
        i++;
    }
    Data *temp2 = Serializer::deserialize(Serializer::serialize(&node1));
    i = 1;
    while (temp2)
    {
        std::cout << "deserialized node" << i << ": " << std::endl;
        std::cout << "name: "  << temp2->name << std::endl;
        std::cout << "age: "  << temp2->age << std::endl << std::endl;
        temp2 = temp2->next;
        i++;
    }

}