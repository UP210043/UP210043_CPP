/*La pizzería Bella Napoli ofrece pizzas vegetarianas y no vegetarianas a sus clientes. Los
ingredientes para cada tipo de pizza aparecen a continuación. 
 Ingredientes vegetarianos: Pimiento y tofu.
 Ingredientes no vegetarianos: Peperoni, Jamón y Salmón. 
Escribir un programa que pregunte al usuario si quiere una pizza vegetariana o no, y enfunción de su respuesta 
le muestre un menú con los ingredientes disponibles para que elija. 
Solo se puede eligir un ingrediente además de la mozzarella y el tomate que están en todas las pizzas.
Al final se debe mostrar por pantalla si la pizza elegida es vegetariana o no y todos los
ingredientes que lleva.*/
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int veg, ingr;
    string elemento,tipo;
    cout<<"Si quieres tu pizza vegetariana teclea 1, si no teclea 0 \n";
    cin>>veg;
    if(veg==0)
    {
        tipo="No vegetariana";
        cout<<"Escoge un ingrediente \n 1.Peperoni \n 2.Jamon \n 3.Salmón \n";
        cin>>ingr;
        switch (ingr)
        {
        case 1:
            elemento="Peperoni";
            break;
        case 2:
            elemento="Jamon";
            break;
        case 3:
            elemento="Salmon";
            break;
        default:
            break;
        }
    }
    else
    {
        tipo="Vegetariana";
        cout<<"Teclea el numero del ingrediente que desees  \n 1.Pimiento \n 2.Tofu \n ";
        cin>>ingr;
        switch (ingr)
        {
        case 1:
            elemento="Pimiento";
            break;
        case 2:
            elemento="Tofu";
            break;
        default:
            break;
        }
    }

    cout<<"Tu pizza es: "<< tipo<< "\n Contiene: Mozzarela, Tomate y "<<elemento;
    return 0;
}
