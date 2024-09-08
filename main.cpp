#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS]; //hibás változó név
    std::cout << "1-100 ertekek duplazasa: \n"; //' helyett " valamin ; a végére
    for (int i = 1; i <= N_ELEMENTS; i++){ //hibás for ciklus létrehozás
        b[i-1] = (i * 2); //() valamint index
    }
    for (int i = 0; i < N_ELEMENTS; i++)
    {
        std::cout << "Ertek: " << b[i] << std::endl; //; végére valamint változó
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    double atlag = 0; //init valamint átlag lehet nem egész ezért double
    for (int i = 0; i < N_ELEMENTS; i++)
    {
        atlag += (b[i]*1.0); //; végére valamint egészből nem egész
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    delete[] b; //memória felszabadítása
    return 0;
}
