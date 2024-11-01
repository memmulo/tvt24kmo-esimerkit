/*1.Kysy luvut ja tallenna ne muuttujiin a ja b, käytä cin ja cout olioita
 2. funktio calcSum ottaa vastaan kaksi kokonaislukua ja tulostaa niiden summan, mutta ei palauta mitään.
    funktio calcDiv ottaa vastaan kaksi kokonaislukua ja tulostaa niiden osamäärän, mutta ei palauta mitään.
    jos jakaja on nolla calcDiv tulostaa virheilmoituksen.
    kutsu em. funktioita mainissa antamalla niille argumenttina muuttujat a ja b
3.  funktio retSum ottaa vastaan kaksi kokonaislukua ja palauttaa niiden summan, mutta ei tulosta mitään
    funktio retDiv ottaa vastaan kaksi kokonaisluka ja palauttaa niiden osamäärän (float), mutta ei tulosta mitään
    jos jakaja on nolla retDiv tulostaa virheilmoituksen ja palauttaa nollan
    kutsu em. funktioita mainissa, niin että annat niille argumenttina muuttujat a ja b ja tulosta niiden palauttamat arvot.
Tekijä: Merja Sotkasiira, 1.11.2024
*/

#include <iostream>
#include "myfunctions.h"

using namespace std;
int a, b;

int main()
{
    cout << "Give first interger" << endl;
    cin >>a;
    cout << "Give second interger" << endl;
    cin >>b;
    cout << "You gave intergers " << a << " and " << b << endl;
    calcDiv(int a, int b);
    calcSum(a, b);
    return 0;
}
