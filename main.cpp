#include "piesa.h"
#include "mapa.h"
#include "combo.h"
#include "joc.h"
using namespace std;


int main() {
    Piesa piesa1(PIESA1, 1, 1);
    Piesa piesa2(PIESA2, 1, 1);
    Piesa piesa3(PIESA3, 1, 1);
    Piesa piesa4(PIESA4, 1, 1);
    Piesa piesa5(PIESA5, 1, 1);
    Piesa piesa6(PIESA6, 1, 1);
    Piesa piesa7(PIESA7, 1, 1);
    Piesa piesa8(PIESA8, 1, 1);
    Piesa piesa9(PIESA9, 1, 1);

    Mapa mapa1(MAPA1, 1);
    Mapa mapa2(MAPA2, 2);
    Mapa mapa3(MAPA3, 3);

    Joc joc1;
    joc1.set_joc(1);
    joc1.verif();
    cout<<joc1;

    piesa1.rotire(7);
    cout<<piesa1;

    //mapa MAPA;
    //x.set_combo(1,2,3);
    //int nr;
    //cout<<"nr:";
    //cin>>nr;
    //cout<<"dir:";
    //cout<<endl;
    //p.set_dir();
    //piesa1.set_piesa(1);
    //p.get_piesa();
   // m1.get_mapa();
   // cout<<endl;
    //p.referinta(nr);
    //x.get_combo();
   // p.get_piesa();
//    joc j1;
//    j1.verf();
//    j1.get_mapa1();
//    cout<<endl;
//    mapa m1;
//    m1.set_mapa();
//    m1.get_mapa();
    return 0;
}

//ostream& operator<<(operator&out, )