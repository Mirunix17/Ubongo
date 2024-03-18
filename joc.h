#include <iostream>
using namespace std;

class Joc {
private:
    int nivel;
    Mapa mp;
    Piesa piesa1, piesa2, piesa3;
public:
    Joc()=default;
    Joc(int nivel){set_joc(nivel);}
    void set_joc(int nivel) {
        if (nivel == 1) {
            Mapa mp_temp(MAPA1, 1);
            this->mp=mp_temp;
            Piesa piesa1_temp(PIESA1, 1,1);
            this->piesa1=piesa1_temp;
            Piesa piesa2_temp(PIESA2, 2,1);
            this->piesa2=piesa2_temp;
            Piesa piesa3_temp(PIESA3, 3,1);
            this->piesa3=piesa3_temp;
        }
        if (nivel == 2) {
            Mapa mp_temp(MAPA2, 2);
            this->mp=mp_temp;
            Piesa piesa1_temp(PIESA4, 4,1);
            this->piesa1=piesa1_temp;
            Piesa piesa2_temp(PIESA5, 5,1);
            this->piesa2=piesa2_temp;
            Piesa piesa3_temp(PIESA6, 6,1);
            this->piesa3=piesa3_temp;
        }
        if (nivel == 3) {
            Mapa mp_temp(MAPA3, 3);
            this->mp=mp_temp;
            Piesa piesa1_temp(PIESA7, 7,1);
            this->piesa1=piesa1_temp;
            Piesa piesa2_temp(PIESA8, 8,1);
            this->piesa2=piesa2_temp;
            Piesa piesa3_temp(PIESA9, 9,1);
            this->piesa3=piesa3_temp;
        }
    }
    //mapa MAPA;
    //combo c;
    //Piesa piesa1;
    //MAPA.set_mapa();
    //c.set_combo(1,2,3);
    /*void click()
    {
        int h,l;
        cout<<"pozitii: ";
        cin>>h>>l;
    }
     */
    void verif() {
        //Mapa map(MAPA1, 1);
        // c.set_combo(1,2,3);
        //Piesa piesa1(PIESA1, 1, 1);
        int h, l;
        cout << "pozitii: ";
        cout << endl;
        cin >> h >> l;
        int i, j;
        int r, s;
//        for(i=0;i<5;i++)
//            for(j=0;j<5;j++)
//            {
//                if(piesa1.pi[i][j]==2)
//                    r=i;
//                    s=j;
//            }
        if (mp.get_elem(h, l) != 0) {
            if (mp.get_elem(h, l + 1) && mp.get_elem(h + 1, l - 1) && mp.get_elem(h + 1, l)) {
                mp.set_elem(h, l + 1, 3);
                mp.set_elem(h + 1, l - 1, 3);
                mp.set_elem(h + 1, l, 3);
                mp.set_elem(h, l, 3);
            }
        }

//        int t, z;
//        for (t = 0; t < 5; t++) {
//            for (z = 0; z < 5; z++)
//                cout << map.get_elem(t, z) << " ";
//            cout << endl;
        }
    friend std::ostream &operator<<(std::ostream &os, Joc &joc)
    {
        int t, z;
        for (t = 0; t < 5; t++) {
            for (z = 0; z < 5; z++)
                os << joc.mp.get_elem(t, z) << " ";
            os << endl;
        }
        return os;
    }

//    void get_mapa1() {
//        int t, z;
//        for (t = 0; t < 5; t++) {
//            for (z = 0; z < 5; z++)
//                cout << map.get_elem(t, z) << " ";
//            cout << endl;
//        }
//    }

};
